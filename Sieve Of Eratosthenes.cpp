/*
WAP to print prime no within given range  (Sieve of Eratosthenes)...
*/
#include"iostream"
#include"dos"
#include"stdlib"

using namespace std;

int main()
{
int no,prime[1001];

cout<<"Enter a no between 1<=no<=1000 :";
cin>>no;

if(no<1||no>1000)		//to check if entered no is in given range or not...
	{
	cout<<"Enter no in given range!!!";
	sleep(1);
	exit(0);
	}

for(int i=2;i<=no;i++)   	//initally assuming all no's are prime...
	prime[i]=1;

for(i=2;i*i<=no;i++)		//mark nonprimes <=no using Sieve of Eratosthenes...
	{
	if(prime[i]==1)
		{
		for(int j=i;j*i<=no;j++)
			prime[j*i]=0;
		}
	}

for(i=2;i<=no;i++)		//printing prime no's...
	{
	if(prime[i])
		cout<<i<<"  ";
	}

return 0;
}