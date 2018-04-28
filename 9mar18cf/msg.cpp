#include<iostream>
#include<cstdlib>
#include<vector>
#include<algorithm>

using namespace std;

int main()
{
	int n,m,xsum,ysum,count,i,j,e,check=1;
	cin >> n;
	cin >> m;

	vector<int> a;
	vector<int> b;
	for(int i=0;i<n;i++)
	{
		cin >> e;
           a.push_back(e);
	}

	for(int i=0;i<m;i++)
	{
		cin >> e;
		b.push_back(e);
	}

	xsum = a[0];
	ysum = b[0];
	count = 0;
	i =0;
	j = 0;
	while(check)
	{

		if(xsum==ysum)
		{
			count++;
			i++;
			j++;
			if(i==n&&j==m)
			{
				check = 0;
				continue;
			}

			xsum = a[i];
			ysum = b[j];
			continue;

		}

		if(xsum<ysum)
		{
			i++;
			xsum = xsum + a[i];
		       continue;	

		}

		if(xsum>ysum)
		{
			j++;
			ysum = ysum + b[j];
			continue;

		}


	}

	cout << count << endl;


	return 0;
}
