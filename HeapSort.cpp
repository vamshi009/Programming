// code to implement the heapsort algorithm and heaps using arrays , here it is minheap!!!!!!!!!!!! :p
#include<algorithm>
#include<cstdlib>
#include<iostream>

using namespace std;


int*  HeapInsy(int arr[], int n)
{
	int* s;
	int m, parent, sibli, x;
	if(n>0)
	{


	if(n%2==0)
	{
		m = n-2;
		parent = m/2;
		sibli = n-1;
		if(arr[parent]>arr[n])
		{
			x = arr[n];
			arr[n]=arr[parent];
			arr[parent] = x;
			s = HeapInsy(arr, parent);
			
		}
	}
	if(n%2==1)
	{

		m = n-1;
		parent = m/2;
		if(arr[parent]>arr[n])
		{
			x = arr[n];
			arr[n]=arr[parent];
			arr[parent] = x;
			s = HeapInsy(arr, parent);
			
		}
	}
	}
	else
	{
		s = arr;
	}

	return s;

}


int*  HeapInsertion(int p, int arr[], int count)
{
	int* s;
	s = HeapInsy(arr, count);
	return s;


}


int* HeapyDel(int x, int arr[])
{

	int sib1, sib2, y, f;
	int* s;


	sib1 = (2*x) + 1;
	sib2 = sib1 + 1;

	if(arr[sib1]>=arr[sib2])
	{
		y = sib2;
	}
	else
	{
		y = sib1;
	}

	if(arr[y]<arr[x])
	{
		f = arr[y];
		arr[y]=arr[x];
		arr[x]=f;
		s = HeapyDel(y, arr);

	}

	return s;

}

void ShowHeap(int arr[], int count)
{
	cout << "following are the elements of the heap\n";

	for(int x = 0;x<=count;x++)
	{
		cout << arr[x] << "\n";
	}

	return;
}	


int*  DeleteFromHeap(int q, int arr[], int count)
{
	int* s;
	int x,z;

	for(int i=0;i<count;i++)
	{
		if(arr[i]==q)
		{
			x = i;
			cout << "element to be deleted is present in the array\n";
			break;
		}
	}

	z = arr[count];
	arr[x]=z;
	s = HeapyDel(x,arr);
	return s;
}

int* ExtractMin(int arr[], int count)
{

	int* s;
	int p=0;
	cout << arr[0] << endl;
	arr[0]=arr[count];
	s = HeapyDel(p, arr);

	return s;
}


void HeapSort(int arr[], int count)
{
	int* s;
	s=arr;
	int c  = count;

	for(int r=0;r<=count;r++)
	{
		s=ExtractMin(s,c);
		c = c - 1;
	}

	return;
}

int main()
{
	int arr[100];
	int *pi;
	pi = arr;
	int count = -1,n,p,q;

	cout << "welcome to heaps and heapsort\n"; 
	while(1)
	{

		cout << "enter 1 to enter an element into heap,\n 2 to delete an element from heap,\n 3 to show the heap,\n 4 for heapsort,\n 5 to ExtractMin and 6 to exit";
		cin >> n;

		if(n==6)
		{
			break;
		}

		if(n==1)
		{

			cout << "enter the element you want to enter into heap\n " ;
			cin >> p;
			count = count + 1;
			arr[count]=p;
			pi= HeapInsertion(p,pi,count);
		}

		if(n==2)
		{

			cout << "enter the element you want to delete from heap\n";
			cin >> q;
			pi = DeleteFromHeap(q, pi, count);
			count = count - 1;
		}
		if(n==3)
		{
			ShowHeap(pi, count);
		}
		if(n==4)
		{
			HeapSort(pi, count);
		}
		if(n==5)
		{
			pi  = ExtractMin(pi, count);
			count = count - 1;
		}


	}


	return 0;
}
