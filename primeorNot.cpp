#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter Number:";
    cin>>n;
    int i=1;
    while (i<=n)
    {
        if (n%i==0)
        {
            cout << n<< "isNot Prime No." << endl;
            break;
        }
        else{
            cout<<n<<" isPrime Number";   
        }
        

    }    
}