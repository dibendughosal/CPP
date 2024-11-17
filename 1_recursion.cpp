//Print name 5 time using Recursion
#include<bits/stdc++.h>
using namespace std;
void myName(int i, int n){
    if (i > n)
    {
        return;
    }
    cout<<"Dibendu"<<endl;
    myName(i+1, n);
    
}
int main(){
    int n;
    cin>>n;
    myName(1,n);
}