#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
	/* Enter your code here. Read input from STDIN. Print output to STDOUT */   

	int n,  mini, i, c, k, h, t, p;
	int min = 1000;
	cin >> n;
	int a[n], b[n];

	for( i=0;i<n;i++)
	{
		cin >> p;
		a[i]=p;
		b[i]=0;
	}

	for(i=0;i<n;i++)
	{
		t =0;
		for(c=i;c<n;c++)
		{
			if(a[c]<=t)
			{
				b[i]++;
			}
			t++;

		}

		for(k=0;k<i;k++)
		{
			if(a[k]<=t)
			{
				b[i]++;
			}
			t++;
		}
	}

	for(h=0;h<n;h++)
	{
		if(b[h]<min)
		{
			min = b[h];
			mini = h;
		}
	}

	cout << (mini + 1) << endl;
	return 0;
}

