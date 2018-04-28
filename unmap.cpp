#include<iostream>
#include<cstdlib>
#include<vector>
#include<algorithm>
#include<unordered_map> 
using namespace std;


int main()
{
	unordered_map<char, int> m;
	string s;
	s = "Hello";
		for(int i=0;i<s.size();i++)
		{
			m.insert({s[i], 1});
		}
cout << m.size() << endl;
return 0;

}
