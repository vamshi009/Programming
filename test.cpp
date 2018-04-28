#include<iostream>
#include<cstdlib>
#include<algorithm>
#include<vector>


using namespace std;
int main()
{
	int a[3];
	a[0]=9;
	a[1]=6;
	a[2]=1;
	sort(a,a+3);
	for(int p=0;p<3;p++)
	{
		cout << a[p] << endl;
	}


	return 0;


}
