#include<iostream>
#include<cstdlib>

using namespace std;

int main()
{

	int l,r,a,d,ans;
	cin >> l;
	cin >> r;
	cin >> a;

	if(l==r)
	{
          ans = l + a/2;
	  ans = ans*2;
	//  cout << ans << endl;
	 // return 0;

	}

	if(l<r)
	{
		d = r-l;

		if(d==a)
		{
			ans = l + a;
			ans = ans*2;
		}

		if(a<d)
		{
			ans = l+a;
			ans = ans*2;
		}


		if(a>d)
		{
			ans = l + d;
			ans = ans + (a-d)/2;
			ans = ans*2;

		}
	}


	if(r<l)
	{
		d = l-r;

		if(d==a)
		{
			ans = r + a;
			ans = ans*2;
		}

		if(a<d)
		{
			ans = r + a;
			ans = ans*2;
		}

		if(a>d)
		{
			ans = r + d;
			ans = ans + (a-d)/2;
			ans = ans*2;
		}

	}



cout << ans << endl;

	return 0;
}
