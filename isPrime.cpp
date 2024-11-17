#include<bits/stdc++.h>
using namespace std;
int main(){
    int num;
    cin>>num;
    if(num == 1) cout<<num<<" : not Prime";
    for(int i = 2; i*i <=num;i++){
        if (num%i==0)
        {
           cout<<"Not Prime";
        }
        else{
            cout<<num<<" is a Prime Number";
            break;
        } 
        
        
    }
}