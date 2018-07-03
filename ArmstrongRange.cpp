/*
Print Armstrong Numbers between a given range
*/
#include<iostream>

using namespace std;

int main()
{
long first,second,num,sum;
long checkarms(long);

cout<<"Enter first number(between 0 to 100):";
cin>>first;
cout<<"\nEnter second number(between first to 10000):";
cin>>second;

for(long i=first;i<=second;i++)
	{
	num=i;
	sum=checkarms(num);
	if(sum==i)
		cout<<i<<"\t";
	sum=0;
	}
return 0;
}

long checkarms(long num)
{
long sum=0,rem;
while(num)
	{
	rem=num%10;
	sum=sum+rem*rem*rem;
	num/=10;
	}
return sum;
}
