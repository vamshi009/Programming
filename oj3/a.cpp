#include<iostream>
#include<cstdlib>
#include<vector>
#include<string>
using namespace std;


int  cmp(string temp, string s)
{
	int ans = 1,i,check;

	if(temp.size()!=s.size())
	{
		ans = -1;
	}
	else
	{
		check = 1;
		int si = s.size();
		for(i=0;i<si;i++)
		{
			if(s[i]!=temp[i])
				check = 0;
		}

		if(check==0)
			ans = -1;
	}

	return ans;
}
void get( string s, int pos, vector<string> &sol, vector<char> r)
{
	int j,i,si,ti;

	si = s.size();
	if(pos==si)
	{
		string t;

		t.clear();
		ti = r.size();
		for(j=0;j<ti;j++)
		{
			t = t+ r[j];
		}
		sol.push_back(t);
		return;
	}

	if(s[pos]=='?')
	{
		char c = 'a';

		for(i=0;i<5;i++)
		{
		vector<char> temp;
		temp = r;
		temp.push_back(c);
		get(s,pos+1,sol,temp);
		c++;
 		}

		get(s,pos+1,sol,r);
	}
	else
	{
		r.push_back(s[pos]);
		get(s,pos+1,sol,r);
	}


	return;
}

int main()
{
	int n,q,i,j,count,k;
		string s;

	cin >> n;

	vector<string> m;
	for(i=0;i<n;i++)
	{

		cin >> s;
		m.push_back(s);
	}

	cin >> q;

	for(i=0;i<q;i++)
	{
		cin >> s;
		vector<string> sol;
		vector<char> r;
		get(s,0,sol,r);

  //             cout << "sol.size() is " << sol.size() << endl;

/*	       for(int y=0;y<sol.size();y++)
	       {
		       cout << sol[y] << endl;
	       }*/
			count = 0;
			vector<string> pu;
			pu = sol;
			sol.clear();
			vector<int> ic;
			int pus = pu.size();
			for(int x=0;x<pus;x++)
			{
				ic.push_back(1);
			}

			for(int h=0;h<pus;h++)
			{
				if(ic[h]==1)
				{

				for(int d=0;d<pus;d++)
				{

					if(i!=d)
					{
						int chk = cmp(pu[h],pu[d]);
						if(chk==1)
						{
							ic[d]=0;
						}
					}
				}

					sol.push_back(pu[h]);
				}
			}

//               cout << "sol.size() is 2nd time si " << sol.size() << endl;

			int vi = sol.size();
		for(j=0;j<vi;j++)
		{
			string temp;
			temp = sol[j];
			int mi = m.size();
			for(k=0;k<mi;k++)
			{

			int check = cmp(temp,m[k]);

			if(check==1)
			{
				count++;
				break;
			}

			}

			//cout << "comparing " << temp << " and  ans is " << count << endl; 


		}

                        

		cout << count << endl;

	}


	return 0;
}
