#include <bits/stdc++.h>
using namespace std;
void findRemainder(int num1, int num2){
    int remainder = num1 % num2;
    cout<<remainder;
}
int main(){
	// your code goes here
	int t;
	cin<<t;
	for(int i = 0;i<t;i++){
        int n1,n2;
	    cin<<n1<<n2;
	    findRemainder(n1, n2);
	}
}