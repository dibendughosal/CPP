#include<iostream>
using namespace std;
int main(){
    int rupees100 = 0;
    int rupees50 = 0;
    int rupees20 = 0;
    int rupees10 = 0;
    int coins5 = 0;
    int coins2 = 0;
    int coins1 = 0;

    cout<<"Enter the amount: ";
    int amount,deno;
    cin>>amount;

    if (amount>=100)
    {
        deno = 100;
    }
    else if (amount>=50)
    {
        deno = 50;
    }
    else if (amount>=20)
    {
        deno = 20;
    }
    else if (amount>=10)
    {
        deno = 10;
    }
    else if (amount>=5)
    {
        deno = 5;
    }
    else if (amount>=2)
    {
        deno = 2;
    }
    else if (amount>=1)
    {
        deno = 1;
    }
        
    switch (deno)
    {
    case 100:
        rupees100=amount/100;
        amount = amount % 100;
    case 50:
        rupees50=amount/50;
        amount = amount % 50;
    case 20:
        rupees20=amount/20;
        amount = amount % 20;
    case 10:
        rupees10=amount/10;
        amount = amount % 10;
    case 5:
        coins5=amount/5;
        amount = amount % 5;
    case 2:
        coins2=amount/2;
        amount = amount % 2;
    case 1:
        coins1=amount/1;
        amount = amount % 1;
    }
    cout<<"the 100 Needed: "<<rupees100<<endl<<" the 50 Needed: "<<rupees50<<endl <<" the 20 Needed: "<<rupees20<<endl<<" the 10 Needed: "<<rupees10<<endl<<" the 5 Needed: "<<coins5<<endl<<" the 2 Needed: "<<coins2<<endl<<" the 1 Needed: "<<coins1;
    

    
}