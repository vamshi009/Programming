

int main()`
{
	string s;
int flag,j,k,h,d,q,g;
unordered_map<int, int> t;
vector<vector<int>> sol;
vector<unordered_map<int,int>> a;
for(int i=0;i<A.size();i++)
{
	flag =0;
	unordered_map<int, int> f;
	for(d=0;d<A[i].size();d++)
	{
		if(f.find(A[i][d])==f.end())
		{
			g = A[i][d];
			f.insert(g, 1);
		}
		else
		{
			g = A[i][d];
			q = f[g];
			f.erase(g);
			f.insert(g, q+1);
		}
	}
	for(j=0;j<a.size();j++)
	{
		t = a[j];
		flag = 1;
		for(k=0;k<A[i].size();k++)
		{
			if(t.find(A[i][k])==t.end())
			{
				flag = 0;
				break;
			}
			else
			{
				g = A[i][k];

				if(f[g]!=t[g])
				{
					flag = 0;
					break;
				}
			}
		}
		if(flag==1)
		{
			//vector<int> temp;
			//temp = sol[j];
			//  cout << "old inser" << endl;
			sol[j].push_back(i+1);
			break;
		}
	}
	if(flag==0)
	{
		//cout << "new insert" << endl;
		vector<int> b;
		b.push_back(i+1);
		sol.push_back(b);

		a.push_back(f);
	}

}

return sol;
}
