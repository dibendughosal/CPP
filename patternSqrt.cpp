#include<iostream>
using namespace std;
int main(){
    int count;
    cin>>count;
    int num=1;
    for (int i = 1; i <= count; i++)
    {
        
        for (int j = 1; j <= count; j++)
        {
            cout<<num;
            num++;
        }
        cout<<endl;
        
    }
    
}