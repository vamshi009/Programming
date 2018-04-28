#include <iostream>
#include<vector>
#include<algorithm>
#include<cmath>
#include<unordered_map>
using namespace std;

void get(vector<char> &f, int pos, vector<vector<char>> &sol, int n)
{
	int j;
	if(pos==n+1)
	{
		sol.push_back(f);
		return;
	}
	for(int i=0;i<f.size();i++)
	{
		vector<char> b;
		for(j=0;j<f.size();j++)
		{
			if(j!=i)
				b.push_back(f[j]);

		}

		get(b,pos+1,sol,n);

	}


}
int main() {
	//code
	int t,i,j,k,n,h,d,u;
	char c;
	vector<int> b;
	vector<char> f;
	vector<vector<char>> sol;
	unordered_map<int,char> m;
	for(i=0;i<t;i++)
	{
		sol.clear();
		m.clear();
		b.clear();
		f.clear();
		string s;
		cin >> s;
		n = s.size();
		for(j=0;j<s.size();j++)
		{
			c = s[j];
			d = c;
			b.push_back(d);
			m.insert({d,c});
		}
		sort(b.begin(),b.end());
		for(k=0;k<b.size();k++)
		{
			u = b[k];
			c = m[u];
			cout << "c is " << c << endl;
			f.push_back(c);

		}

		get(f,0,sol,n);
		//	    cout << "size is " << sol.size() << endl;

		for(h=0;h<sol.size();h++)
		{
			vector<char> temp;
			temp = sol[h];
			string w;
			w.clear();
			for(int r=0;r<temp.size();r++)
			{
				w = w + temp[r];
			}
			cout << w << " ";
		}

		cout << endl;  
	}
	return 0;
}
