#include<iostream>
using namespace std;

int linearSearch(int marks[],int size,int target){
    for (int i = 0; i < size; i++)
    {
        if (marks[i] == target)
        {
            return i;
        }
        
    }
    return -1;
}
int main(){
    int target = 34;
    int marks[]={11,23,44,54,34,32};
    
    int size = sizeof(marks)/sizeof(int);
    cout<<linearSearch(marks,size,target);
    
}