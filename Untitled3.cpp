#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
	int a,b,c;
	cout<<"ENTER THE INCOME : ";
	cin>>a;
	if(a<=150000)
	{
		cout<<"NO TAX";
	}
	else if((a>150000)&&(a<=300000))
	{
		b=a/10;
		cout<<"TAX = "<<b;
	}
	else if((a>300000)&&(a<=500000))
	{
		b=a/20;
		cout<<"TAX = "<<b;
	}
	else(a>500000);
	{
		b=a/30;
		cout<<"TAX = "<<b;
	}
}

