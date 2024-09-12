#include<iostream>
using namespace std;
int main(){
    int marks[] = {92,98,76,54,65};
    int size = sizeof(marks)/sizeof(int);
    int smallest;
    for (int i = 0; i < size; i++)
    {
       if (marks[i]<smallest)
       {
        smallest = marks[i];
       }
       
        
    }
    cout<<size<<endl;
    cout<<smallest<<endl;
    
}