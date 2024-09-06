#include<iostream>
using namespace std;
int calculateFact(int n){
    int fact=1;
    for (int i = 1; i <= n; i++)
    {
        fact = fact * i;
    }
    return fact;
}
int main(){
    int num;
    cout<<"Enter the number : ";
    cin>>num;

    cout<<"The Factorial of "<<num<<" is "<<calculateFact(num)<<endl;

}