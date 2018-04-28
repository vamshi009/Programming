#include<iostream>
#include<cstdlib>
#include<algorithm>
#include<vector>
#include<map>

using namespace std;

int main()
{

	int t,n,k,i,j,e,sum,start,end,l,temp,vali,posi,total,no;

	cin >> t;

	for(i=0;i<t;i++)
	{
		vector<int> A,D,B,sol;
		cin >> n;
		cin >> k;
		for(j=0;j<n;j++)
		{
			cin >> e;
			A.push_back(e);

		}
		total = 0;

		for(j=0;j<n;j++)
		{
			cin >> e;
			D.push_back(e);
			total = total + e;
		}

		for(j=0;j<k;j++)
		{
			cin >> e;
			B.push_back(e);
		}

		/*for(j=0;j<n;j++)
		{
			temp = A[j];
			for(l=0;l<D[j];l++)
			{
				sol.push_back(temp);

			}

		}*/

		map<int,int> m;
		for(j=0;j<n;j++)
		{
			if(m.find(A[j])==m.end())
			{
				m.insert(pair<int, int>(A[j],D[j]));
			}
			else
			{
				int kim = m[A[j]];
				kim = kim + D[j];
				m.erase(A[j]);
				m.insert(pair<int, int>(A[j],kim));
			
			}


		}

	//	sort(m.begin(),m.end());
		//sort(sol.begin(), sol.end());
		start = 0, end = total-1;

		for(j=1;j<=k;j++)
		{
			if(j%2==1)
			{
				start = end - B[j-1]+1;


			}

			if(j%2==0)
			{
				end = start + B[j-1] -1 ;

			}
				


		}
		sum = 0;
		/*for(l=start;l<=end;l++)
		{
			sum = sum + sol[l];
		}*/
		start = start + 1;
		end = end + 1;
		posi = start;
		vali = 0;
		//cout << "start is " << start  << "end is " << end << endl;

		for(auto it=m.begin();it!=m.end();it++)
		{
			if(posi<=end)
			{
			vali = vali+it->second;
			if(vali==posi&&vali<=end)
			{
				sum = sum + it->first;
				posi = posi + 1;
			}
			else
			{

				if(vali>posi&&vali<=end)
				{
					no = vali - posi + 1;
					sum = sum + no*it->first;
					posi = posi + no;

				}
			}

			if(vali>end)
			{
				sum = sum + (end-posi+1)*it->first;
				posi = posi + (end-start+1);

			}
			}
			else
				break;




		}
		cout << sum << endl;
	}



	return 0;
}
