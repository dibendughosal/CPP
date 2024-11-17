//Print N to 1 using Recursion
#include<bits/stdc++.h>
using namespace std;
int printNum(int i, int n){
    if(i>n){
        return 0;
    }
    printNum(i+1, n);
    cout<<i<<endl;
}
int main(){
    int n;
    cin>>n;
    printNum(1, n);
}