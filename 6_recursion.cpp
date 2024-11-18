#include<bits/stdc++.h>
using namespace std;
int calSum(int i,int sum){
    if (i<1)
    {
        cout<<sum;
        return 0;
    }
    calSum(i-1, sum+i);
    
}
int main(){
    int n;
    cin>>n;
    calSum(n, 0);
}