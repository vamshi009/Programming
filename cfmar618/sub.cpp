#include<iostream>
#include<cstdlib>

using namespace std;

int main()
{
	long long int a,b;
	cin >> a;
	cin >> b;
	int check = 1;
	while(check)
	{
		if(a==0||b==0)
		{
			check = 0;
			continue;
		}

		if(a>=2*b)
		{
			a = a%(2*b);
			continue; 
		}

		if(b>=2*a)
		{
			b = b%(2*a);
			continue;
		}
		else
			check = 0;
	}

	cout << a << " " << b << endl;

	return 0;
}
