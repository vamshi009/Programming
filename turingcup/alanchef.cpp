#include<iostream>
#include<cstdlib>
#include<vector>
#include<algorithm>

using namespace std;


int main()
{
	int t,i,k,x,y,count1,count2,e;
	string ans;
		cin >> t;

	for(k=0;k<t;k++)
	{
		count1=0;
		count2=0;
		cin >> x;
		cin >> y;
		//vector<int> a,b;
		for(i=0;i<11;i++)
		{
			cin >> e;
			if(e%2==1)
				count1++;
		}
		for(i=0;i<11;i++)
		{
			cin >> e;
			if(e%2==1)
				count2++;
		}

		if(count1>count2&&(x>y))
			ans = "alan";

		if(count1>count2&&(x<y))
			ans = "chef";

		if(count1<count2&&(x<y))
			ans = "alan";

		if(count1<count2&&(x>y))
			ans = "chef";

		if(count1==count2)
			ans = "alan";

		cout << ans << endl;


	}



	return 0;
}
