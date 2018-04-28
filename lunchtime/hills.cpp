#include<iostream>
#include<cstdlib>
#include<algorithm>
#include<vector>

using namespace std;


int main()
{

	int t,i,n,u,d,j,e,count=1,check,para,diff;
	cin >> t;
	for(i=0;i<t;i++)
	{
		cin >> n;
		cin >> u;
		cin >> d;
		vector<int> h;
		for(j=0;j<n;j++)
		{
			cin >> e;
			h.push_back(e);
		}

		para = 1;
		count = 1;
		for(j=1;j<n;j++)
		{
			check =0;
			if(h[j-1]==h[j])
			{
				check=1;
			}

			if(h[j-1]<h[j])
			{
				diff = h[j]-h[j-1];
				if(diff<=u)
					check = 1;
			}

			if(h[j-1]>h[j])
			{
				diff = h[j-1]-h[j];
				if(diff<=d)
					check=1;
			}

			if(check==0&&para==1)
			{
				if(h[j-1]>h[j])
				{
					check = 1;
					para = 0;
				}

			}


			if(check==1)
			{
				count++;
			}
			else
			{
				break;
			}
		
			

		}

		cout << count << endl;


	}



	return 0;
}
