#include<iostream>
#include<cstdlib>
#include<cmath>

using namespace std;


int main()
{
	int ans;
	auto p = pow(2, 0.5);
	auto s = pow(18, 0.5);
	ans = s/p;
	cout << s << endl;
	cout << p << endl;

	cout << ans << endl;

	return 0;
}
