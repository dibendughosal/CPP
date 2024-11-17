#include<bits/stdc++.h>
using namespace std;
int main(){
    int num1,num2;
    cin>>num1>>num2;
    for(int i = min(num1, num2);i>1;i--){
        if (num1%i==0 && num2%i==0)
        {
            cout<<"The GCD of "<<num1<<" and "<<num2<<" is "<<i<<endl;
            break;
        }
        
    }
}