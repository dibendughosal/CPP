#include<iostream>
using namespace std;
int fact(int num){
    int fact = 1;
    for (int i = 1; i <= num; i++)
    {
        fact *= i;
    }
    return fact;
}

int main(){
    int n;
    int r;
    int value;
    cout<<"Enter the nC number: ";
    cin>>n;
    cout<<"Enter the Cr number: ";
    cin>>r;
    value = fact(n)/(fact(r) *  fact(n-r));
    cout<<"The Value is "<< value <<endl;

}