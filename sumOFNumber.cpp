#include<iostream>
using namespace std;

int main(){
    int sum = 0;
    int i=1;
    int n;
    cout << "Enter the Number: ";
    cin >>n;

    while (i<=n)
    {
        sum = sum + i;
        i++;
    }
    cout << "The Sum of 1 to "<<n<<" is "<<sum;
    
}