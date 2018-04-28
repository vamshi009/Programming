#include<iostream>
#include<cstdlib>
#include<algorithm>
#include<vector>
#include<cmath>
using namespace std;

int main()
{
	long long int n,m,a,b,k,max=0, sum=0,i;
	cin >> n;
	cin >> m;
	vector<long long int> v(10000000);
        vector<long long int>::iterator it;

	for(it=v.begin();it!=v.end();++it)
	{
		*it = 0;
		
	}


	for(i=0;i<m;i++)
	{

		cin >> a;
		cin >> b;
		cin >> k;
		v[a-1]=v[a-1]+k;
		v[b]=v[b]-k;


	}

	for(i=0;i<n;i++)
	{
		sum = sum + v[i];
		if(sum>max)
		{
			max = sum;
		}

	}

	cout << sum;


	return 0;
}
