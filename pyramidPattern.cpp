#include<iostream>
using namespace std;
int main(){
    int num;
    cin>>num;
    
    for (int i = 0; i < num; i++)
    {
        for (int j = 0; j < num-i-1 ; j++)
        {
            cout<<" ";
        }
        for (int j = 1; j <= i+1; j++)
        {
            cout<<j;           
        }
        for (int j = i; j >0 ; j--)
        {
            cout<<j;
        }
        
        cout<<endl;
        
        
    }
    
}