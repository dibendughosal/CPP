#include<iostream>
using namespace std;
int calculateSumOfDigit(int num){
    int digit;
    int sum=0;
    while (num>0)
    {
        digit = num%10;
        sum = sum + digit;
        num = num/10;
    }
    
    return sum;
}
int main(){
    int n;
    cout<<"Enter The Number: ";
    cin>>n;
    cout<<"The Sum of Digit "<<n<< " is "<<calculateSumOfDigit(n)<<endl;
}