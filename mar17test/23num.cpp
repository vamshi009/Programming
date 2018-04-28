#include<iostream>
#include<cstdlib>
#include<vector>
#include<algorithm>
using namespace std;


void get(int &h, int s)
{
	int check = 1;
	while(check)
	{
		int flag1 = 0, flag2 = 0;

		if(s==1)
		{
			check = 0;
			continue;
		}

		if(s%2==0)
		{
			s = s/2;
			flag1 = 1;
		}
		else
		{
			if(s%3==0)
			{
				s = s/3;
				flag2 = 1;
			}
		}

		if(flag1==1||flag2==1)
		{
			check = 1;
		}
		else
		{
			h = 0;
			check = 0;
		}


	}
}
int main()
{
	long long int l,r;
	cin >> l;
	cin >> r;
	int count = 0;
	for(int j=l;j<=r;j++)
	{
		int h=1;

		get(h,j);

                


		if(h==1)
			count++;

	/*	if(h==0)
		{
			int temp = j;
			int bill = 1;
			int naya = temp;
			while(naya<=r)
			{
			
				 naya = temp*bill;
				if(naya<=r)
				{
					sol[naya]=0;
				}
				bill++;

			}

		}**/

	}

	cout << count << endl;

	return 0;



	
}
