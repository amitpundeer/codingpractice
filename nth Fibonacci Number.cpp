/*
WAP to print nth fibonacci no.... 
*/
#include"iostream.h"

void main()
{
int fn=0,sn=1,tn,no;

cout<<"Enter a no 0<=no<=1000 :";
cin>>no;
cout<<endl;

for(int i=1;i<=no;i++)
	{
	cout<<sn<<" ";
	tn=fn+sn;
	fn=sn;
	sn=tn;
	}

cout<<endl<<no<<"th Fibonacci no is :"<<fn;
}