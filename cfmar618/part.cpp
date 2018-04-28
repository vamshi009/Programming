#include<iostream>
#include<cstdlib>

using namespace std;

int main()
{
	int n,i,e,ans=0;
	cin >> n;
	for(i=0;i<n;i++)
	{
		cin >> e;
		if(e>=0)
			ans = ans + e;
		else
			ans = ans + e*-1;
	}

	cout << ans << endl;
	return 0;
}
