#include<iostream>
#include<cstdlib>
#include<algorithm>
#include<vector>

using namespace std;

int main()
{
	int n,q,count=0,max=-1,maxi=-9,x,p;
	
	cin >> n;
	int a[n];
	int arr[n], dep[n];
	for(int qi=0;qi<n;qi++)
	{
		arr[qi]=0;
		dep[qi]=0;
	}

	for(int p=0;p<n;p++)
	{
		cin >> q;
		a[p]=q;

		if(a[p]==0)
		{
			arr[p]=0;
			dep[p]=n;
		}
		else
		{

			if((p+1)==(n))
			{
				arr[p]=0;
			}
			else
			{
			arr[p]=p+1;
			}
			x = p - a[p];
			if(x>0)
			{
				dep[p]=x;
			}
			else
			{

			
			if(x<0)
			{

				x =  x + (1);
				if(x==0)
				{
					dep[p]=n;
				}
				if(x<0)
				{
					x = x + n;
					dep[p]=x;
				}
			}
			}

		}

	}
	/*for(p=0;p<n;p++)
	{
		cout << arr[p] << endl;
	}

	cout << "-----********" << endl;

	for(p=0;p<n;p++)
	{
		cout << dep[p] << endl;
	}
	
	cout << "-----***********" << endl;*/


	sort(arr, arr+n);
	sort(dep, dep+n);

	int ap=0, dp = 0;

	while((ap!=(n))&&(dp!=(n)))
	{


		if((dp==(n))&&(ap!=(n)))
		{
			count++;
			if(count>max)
			{
				max = count;
				maxi = arr[ap];
			}

			ap++;
		}

		if((ap==(n))&&(dp!=n))
		{
			count--;
			dp++;

		}

		if((ap!=(n))&&(dp!=(n)))
		{

		if(arr[ap]<=dep[dp])
		{
			count++;
			if(count>max)
			{
				max = count;
				maxi = arr[ap];
			}
			ap++;
		}
		else
		{
			count--;
			dp++;
		}
		}

	}


	/*for(p=0;p<n;p++)
	{
		cout << arr[p] << endl;
	}

	cout << "-----" << endl;

	for(p=0;p<n;p++)
	{
		cout << dep[p] << endl;
	}
	
	cout << "-----" << endl;*/

	

	cout << (maxi+1) << endl;



	return 0;
}

