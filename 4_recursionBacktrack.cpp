//Print 1 to N using Recursion by Backtracking
#include<bits/stdc++.h>
using namespace std;
int printNum(int i, int j){
    if(i<1){
        return 0;
    }
    printNum(i-1, j);
    cout<<i<<endl;
} 
int main(){
    int n;
    cin>>n;
    printNum(n, n);
}