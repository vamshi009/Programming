#include<iostream>
#include<cstdlib>
#include<cmath>
#include<vector>
#include<algorithm>

using namespace std;


int main()
{
	long long int t,i,e,k,l,j,count,n,small;
	cin >> t;

	for(i=0;i<t;i++)
	{
		vector<int> a;
		cin >> n;
		count =0;

		for(j=0;j<n;j++)
		{
			cin >> e;
			a.push_back(e);
			count = count + e;
		}

		for(k=0;k<n;k++)
		{
			for(l=k+1;l<n;l++)
			{
				if(a[k]<=a[l])
				{
					small = a[k];
				}
				else
					small = a[l];

				if((a[k]&a[l])>=small)
				{
					//cout << "ading small " << small << endl;
					count = count + small;
				}
			}
		}

		cout << count << endl;
	}


	return 0;
}
