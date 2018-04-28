#include<iostream>
#include<cstdlib>
#include<vector>
#include<algorithm>
#include<cmath>
#include<cstring>

using namespace std;

int main()
{
	int t,i,candy,n,c,e,j;

	cin >> t;

	for(i=0;i<t;i++)
	{
		cin >> n;
		cin >> c;
		candy = 0;

		for(j=1;j<=c;j++)
		{
			cin >> e;
			if(e==j)
				candy++;
			else
				candy--;
		}

		if(c<n)
			candy = candy - (n-c);

		if(candy<=0)
			candy = 1;

		cout << candy << endl;
	}


	return 0;
}
