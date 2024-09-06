#include<iostream>
using namespace std;
int main(){
    int count;
    cin>>count;
    for (int i = 0; i < count; i++)
    {
        for (int j = i; j > 0; j--)
        {
            cout<<j<<" ";
        }
        cout<<endl;
        
    }
    
}