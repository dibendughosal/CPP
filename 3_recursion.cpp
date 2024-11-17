//Print Numbers Linearly from N to 1.
#include<bits/stdc++.h>
using namespace std;
int printNum(int i, int n){
    if(i<1){
        return 0;
    }
    cout<<i;
    printNum(i-1, n);
}
int main(){
    int n;
    cin>>n;
    printNum(n, n);
} 