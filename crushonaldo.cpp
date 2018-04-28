#include<iostream>
#include<cstdlib>
#include<algorithm>
#include<cmath>
#include<vector>
using namespace std;

int main()
{
	long long int n, m, a, b, k, max, h, i;
	max = 0;
	vector<long long int> v(10000000);
	for(i=0;i<10000000;i++)
	{
		v[i]=0;
	}
	cin >> n;
	cin >> m;
	
	for(h=0;h<m;h++)
	{
		cin >> a;
		cin >> b;
		cin >> k;
		for(i=(a-1);i++;i<b)
		{
			v[i]=v[i]+k;
			if(v[i]>=max)
			{
				max=v[i];
			}


		}

		cout << max;
		cout << "\n";


	}

	cout << max;





	return 0;
}

