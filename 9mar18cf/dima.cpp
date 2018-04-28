#include<iostream>
#include<cstdlib>
#include<vector>

using namespace std;


int main()
{

long long int n,q,y,i,e,check,j,mc,sc,maxi,f,ki;
	cin >> n;
	cin >> q;

	maxi = 2*n-1;

	vector<long long int> a;
	for(i=0;i<=maxi;i++)
	{
		a.push_back(0);
	}

	for(i=1;i<=n;i++)
	{
		e = 2*i -1;
		a[e]=i;
	}
	/*for(i=0;i<a.size();i++)
	{
		cout << a[i] << " ";
	}
	cout << endl;*/


	while(check)
	{
		mc = -1;
		sc = -1;

		for(j=a.size()-1;j>0;j--)
		{

			if(a[j]!=0&&mc==-1)
			{
				mc = 1;
				f = a[j];
				//cout << "f isd " << f << endl;
				//a[j]=0;
				ki = j;
				continue;
			}


			if(mc==1&&a[j]==0)
			{
				a[j]=f;
				//cout << "placing at " << j << endl;
				sc = 1;
				a[ki]=0;
				break;

			}

		}
	/*for(i=0;i<a.size();i++)
	{
		cout << a[i] << " ";
	}
	cout << endl;*/

		if(sc==-1)
		{
			check = 0;

		}
	}

	for(i=0;i<a.size();i++)
	{
		cout << a[i] << " ";
	}
	cout << endl;


	for(j=0;j<q;j++)
	{
		cin >> y;
		cout << a[y] << endl;
	}



	return 0;
}
