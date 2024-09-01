#include<iostream>
using namespace std;
int main(){
    int i = 2,sum = 0,n;
    cout<< "Enter the Number : ";
    cin>>n;
    while (i<=n)
    {   
        if (i%2==0){
        sum = sum + i;
        i=i+2;
        }
        
    }
    cout<<sum;
    
}