#include<cstdlib>
#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int getnumber(vector<int> a, vector<int> b)
{

	//cout << "enterd " << endl;
	int min = -999999,diff,sum,ele,pos,val;
	vector<int> c;
	vector<int> d;
	for(int i=0;i<a.size();i++)
	{
		diff = b[i]-a[i];
		if(diff>min)
		{
			min = diff;
			pos = i;
		}
	}

	if(diff==0)
	{
		sum = 0;
		for(int j=0;j<b.size();j++)
		{
			sum = sum + b[j]+1;
		}
		return sum;
	}
	else
	{
		ele = a[pos];
		val = b[pos]+1;
		sum = 0;

		for(int k=0;k<a.size();k++)
		{
			if(a[k]>=ele)
			{
				sum = sum + val;

			}
			else
			{
				c.push_back(a[k]);
				d.push_back(b[k]);
			}


		}

		
	}
	//cout << "calculated sum " << sum << endl;

	if(c.size()>0)
	return sum + getnumber(c,d);
	else
		return sum;


}


int main()
{
	int n,i,q,w,s;
	cin >> n;
	vector<int> a;
	vector<int> b;
	
	for(i=0;i<n;i++)
	{
		cin >> q;
		a.push_back(q);
		cin >> w;
		b.push_back(w);

	}

	s = getnumber(a,b);
	cout << s << endl;

	return 0;
}
