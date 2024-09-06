#include<iostream>
using namespace std;
int main(){
    int count;
    cin>>count;
    for (int i = 0; i < count; i++)
    {
        for (int j = 0; j < i; j++)
        {
            cout<<" ";
        }
        for (int j = 0; j < count-i; j++)
        {
            cout<<(i+1);
        }
        
        cout<<endl;
    }
    
}