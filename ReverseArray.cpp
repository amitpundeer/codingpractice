/*
WAP to reverse elements of an array...
*/

#include<iostream>
#include<cstdlib>
#include<dos>

using namespace std;

int main()
{
void condition(int);
void reverse(int [],int);
int arr[100],size;

cout<<"Enter size of array <99 :";
cin>>size;

condition(size);         //to check if entered size is in given range or not

cout<<"\nEnter array elements:\n";
for(int i=0;i<size;i++)
	cin>>arr[i];

reverse(arr,size);       //function call

return 0;;
}

void condition(int size)
{
if(size<=0||size>99)
	{
	cout<<"Enter in given range only!!!";
	sleep(1);
	exit(0);
	}
}

void reverse(int arr[],int size)
{
int swap[100],t;
for(int i=0,j=size-1;i<size,j>=0;i++,j--)
	swap[j]=arr[i];

cout<<"\nReversed array is:\n";
for(i=0;i<size;i++)
	cout<<swap[i]<<"\t";
}
