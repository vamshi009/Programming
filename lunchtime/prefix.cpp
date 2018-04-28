#include<iostream>
#include<cstdlib>
#include<algorithm>
#include<vector>
#include<string>

using namespace std;


int main()
{

	int t,i,n,q,j,p,k,ans,len,start,end,mid,check,count,eind,m,l;
	string s;
	cin >> t;
	for(i=0;i<t;i++)
	{
		cin >> n;
		cin >> q;
		cin >> s;
		for(j=0;j<q;j++)
		{

			cin >> p;
			cin >> k;
			start = 0;
			end = p-1;
			if(end%2==0)
			{
				mid = (end/2) -1;
			}
			else
				mid = end/2;

			if(end==0)
				mid = 0;
                     
			count = 0;
                       for(l=0;l<=mid;l++)
		       {
			       check = 1;
			       eind =  end;
			       for(m=l;m>=0;m--)
			       {
				       if(s[m]!=s[eind])
				       {
					       check = 0;
				       }
				       eind--;

			       }
			       if(check==1)
			       {
				       count++;
			       }
			       if(count==k)
			       {
				       len = l;
				       break;
			       }


		       }

		       if(count==k)
		       {
			       ans = len+1;
		       }

		       if(k==count+1)
		       {
			       ans = end + 1;
		       }

		       if(k>count+1)
		       {
			       ans = -1;
		       }

		       cout << ans << endl;



		}




	}
	
	return 0;
}
