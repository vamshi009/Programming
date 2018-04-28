#include<iostream>
#include<vector>
#include<algorithm>
#include<cstdlib>
#include<cstring>
#include<unordered_map>

using namespace std;


int main()
{
	int t,i,n,ans,j;
	cin >> t;
	for(i=0;i<t;i++)
	{
		ans = -1;
		cin >> n;
		unordered_map<string, string> m;

		for(j=0;j<n;j++)
		{
			string time, user, code, temp;
			cin >> time;
			cin >> user ;
			cin >> code;

			if(m.find(code)==m.end())
				m.insert({code,user});
			else
			{
				temp = m[code];
				if(user==temp)
				{
					ans = 1;
				}

				if(user!=temp)
				{
					ans = 2;
				}

			}
		}

		cout << ans << endl;

	}


	return 0;
}
