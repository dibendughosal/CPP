#include<bits/stdc++.h>
using namespace std;
int fibbonacci(int n){
    if (n==0)
    {
        return 1;
    }
    int sum = n * fibbonacci(n-1);
    return sum;
    
}
int main(){
    int n;
    cin>>n;
    cout<<fibbonacci(n);
}