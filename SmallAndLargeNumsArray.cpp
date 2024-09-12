#include<iostream>
using namespace std;
int main(){
    int marks[] = {92,98,76,54,65};
    int size = sizeof(marks)/sizeof(int);
    int smallest,largest =0;
    for (int i = 0; i < size; i++)
    {
       if (marks[i]<smallest)
       {
        smallest = marks[i];
       }
       if (marks[i]>largest){
        largest = marks[i];
       }
       
        
    }
    cout<<"The Size of the array is: "<<size<<endl;
    cout<<"smalllest is: "<<smallest<<endl;
    cout<<"Largest is: "<<largest;
    
}