#include<iostream>
using namespace std;
int main(){
    int count;
    cin>>count;
    char ch='A';
    for (int i = 1; i <= count; i++)
    {
        for (int j = 1; j <= count; j++)
        {
            cout<<' '<<ch;
            ch++;
        }
        cout<<endl;
    }
    
}