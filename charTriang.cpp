#include<iostream>
using namespace std;
int main(){
    int count;
    cin>>count;
    char ch = 'A';
    for (int i = 0; i < count; i++)
    {
        for (int j = 0; j < i+1; j++)
        {
            cout<<ch<<" ";
        }
        cout<<endl;
        ch+=1;
        
    }
    
}