#include <iostream>
 #include <conio.h>
using namespace std;

int main()
{
    int num1, num2,r,i;

    cout<<"Enter the first number for the range: ";
    cin>>num1; 
    cout<<"Enter the second number for the range: ";
    cin>>num2; 
    cout<<"\n\nDisplay the even numbers between"<<num1 <<"and"<<num2<< "are";

    for(i=num1; i<=num2; i++)
{
        r=i%2;
        if(r==0)
            cout<<"\n"<<i; 
}

     cout<<"\n\nDisplay the odd numbers between"<<num1 <<"and"<<num2<< "are";

     for(i=num1; i<=num2; i++)
{
        r=i%2;
        if(r==1)
            cout<<"\n"<<i;
}
    getch();
    return 0;
}

