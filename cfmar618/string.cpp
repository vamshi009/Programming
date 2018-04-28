#include<iostream>
#include<cstdlib>
#include<vector>
using namespace std;


int main()
{
	string s;
	cin >> s;
	int count,m,i,o,l;
	int check2=0, check1=0;
	if(s.size()<26)
	{
		cout <<"-1"<< endl;
		//cout << "from 1 " << endl;
		return 0;
	}


	if(s.size()==26)
	{
		check1 = 0;
		char c = 'a';

		for(i=0;i<26;i++)
		{
			if(s[i]==c||s[i]==c-1)
			{
				c = c+1;
				if(c=='z'+1)
					check1 = 1;
			}
			else
			{
				cout << "-1" << endl;
		//cout << "from 2 " << endl;
				
				return 0;
				break;
			}

		}
	}
	vector<char> ans;

	if(s.size()>26)
	{
		check2 = 0;
		m = s.size()-26;
		count = 0;
		char f = 'a';

		for(i=0;i<s.size();i++)
		{
			if(count<=m)
			{

				if(s[i]==f||s[i]==f-1)
				{
					f = f + 1;
					ans.push_back(f);
				}
				else
				{
					count++;
				}

				if(count>m)
				{
					cout << "-1" << endl;
					return 0;
					break;
				}


				if(f=='z'+1)
				{
					check2 == 1;
					for(l=i+1;l<s.size();l++)
					{
						ans.push_back(s[l]);
					}
					break;
				}
			}
			else
			{
				check2 = 0;
				cout << "-1" << endl;
		//cout << "from 3 " << endl;
				return 0;
				break;
			}
		}





	}

	if(check1==1)
	{
		//cout << "print success" << endl;
		char d = 'a';
		for(i=0;i<26;i++)
		{
			cout << d ;
			d = d+1;

		}

		cout << endl;

	}

	if(check2==1)
	{
		for(o=0;o<ans.size();o++)
		{
			cout << ans[o] ;
		}
		cout << endl;
	}

	
	return 0;
}
