#include<iostream>
#include<cstdlib>

using namespace std;


void  SendArray(int arr[], int n)
{
	int p;
	for(p=0;p<n;p++)
	{
		arr[p]=p+10;
	}

	return;


	

}


int main()
{
	int n = 10,i;

	int arr[n];
	int* ans;
	for(int i=0;i<n;i++)
	{
		arr[i]=0;
	}

	SendArray(arr,n);
	
	for(int i=0;i<n;i++)
	{
		cout << arr[i] << endl;
	}
	


	return 0;
}
