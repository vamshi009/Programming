#include<iostream>
#include<cstdlib>
#include<vector>
#include<algorithm>
#include<cmath>

using namespace std;


int main()
{
	int sum,n,s,temp,flag,i,pos,p,count,j,r;
       vector<int> help;	
	cin >> n;

	sum = -1;
	for(r=0;r<n;r++)
	{
		flag = 1;
		sum++;
		temp  = sum;
		while(temp!=0)
		{
			s = temp%10;
			if(s==5)
			{
				flag = 0;
				break;
			}
			temp = temp/10;
		}


		while(flag==0)
		{

			//cout << "enerd main whike" << endl;
		if(flag==0)
		{
			temp = sum;
			help.clear();

			while(temp!=0)
			{
				//vector<int> help;
				help.push_back(temp%10);
				temp = temp/10;

			}

			for(i=help.size()-1;i>=0;i--)
			{
				if(help[i]==5)
				{
					pos = i;
					break;
				}
			
			}
                        p=0;
			count = 0;
			for(j=0;j<=pos;j++)
			{
				p = p+ pow(10,count)*help[j];
				count++;

			}
			//cout << "pc bceame" << p << endl;

			sum = sum + p;
			//cout << "sum is " << sum << endl;
			temp = sum;
			flag = 1;
		while(temp!=0)
		{
			s = temp%10;
			if(s==5)
			{
				flag = 0;
				break;
			}
			temp = temp/10;
		}
		}
		//cout << "flag is " << flag << endl;


		}

	}

cout << sum << endl;

	return 0;

}
