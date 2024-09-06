#include<iostream>
using namespace std;
int calculateSum(int n){
    int sum =0;
    for (int i = 1; i <= n; i++)
    {
        sum = sum + i;
    }
    return sum;
    
}
int main(){
    int num;
    cout<<"Enter the number: ";
    cin>>num;
    cout << "The Sum of Number is "<< calculateSum(num) << endl;
}