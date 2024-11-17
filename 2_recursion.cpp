//Print Linearly from 1 to N
#include<bits/stdc++.h>
using namespace std;
int printNum(int i, int n){
    if (i > n)
    {
        return 0;
    }
    cout<<i<<endl;
    printNum(i+1, n);   
}
int main(){
    int n;
    cin>>n;
    printNum(1, n);
}