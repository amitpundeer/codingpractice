/*
WAP to check prime no...
*/

#include<iostream>
#include<cstdlib>
#include<dos>

using namespace std;

int main()
{
long no;
int counter=0;

cout<<"Enter a no between 2<no<1000000000 :";
cin>>no;
cout<<endl;

if(no<=2||no>1000000000)
	{
	if(no==2)
		cout<<"Prime Number.";
	cout<<"\nEnter no in given range!!!";
	sleep(1);
	}
else
{
for(int i=2;i<=no/2;i++)
	{
	if(no%i==0)
		{
		counter=1;
		break;
		}
	}
}
if(counter==0)
	cout<<"\nPrime Number.";
	else
		cout<<"\nNot a Prime  Number.";
	
return 0;
}
