#include<iostream>
#include<cstdlib>
#include<algorithm>
#include<vector>
#include<list>
#include<cmath>

using namespace std;


struct box
{
	long long int value;
	long long int low;
	long long int high;
};


int main()
{
	long long int n, m, a, b, k, start, end, h;
	list<box> arr;
	struct box first, second, third;
	list<box>::iterator ct,pt;
	long long int max=0;
	cin >> n;
	cin >> m;
	first.value = 0;
	first.low  = 1;
	first.high = n;
	arr.push_back(first);
	for(h=0;h<m;h++)
	{
		cin >> a;
		cin >> b;
		cin >> k;

		for(ct=arr.begin();ct!=arr.end();++ct)
		{
			start = ct->low;
			end = ct->high;
			if((a<=start)&&(b>=end))
			{
				//all effect, nothing doing
				ct->value = ct-> value + k;
				if((ct->value)>max)
				{
					max = ct->value;
				}

				continue;

			}
			if((a<=start)&&(b>=start)&&(b<end))
			{
				//left wala bhai, split shuru

				second.value = ct->value;
				second.low = b+1;
				second.high = ct->high;
				ct->value = ct->value + k;
				if((ct->value)>max)
				{
					max = ct->value;
				}
				ct->high = b;
				pt = ct;
				++pt;
				arr.emplace(pt, second);
				

					continue;

			}

			if((b>=end)&&(a>start)&&(a<=end))
			{

				//right wala, split abhi bhi shuru
				second.value = ct->value;
			        second.low = ct->low;
				second.high = a-1;

				ct->value = ct->value + k;
				if((ct->value)>max)
				{
					max = ct->value;
				}
				ct->low = a;
				arr.emplace(ct, second);
					continue;


			}

			if((a>start)&&(b<end))
			{
				//max split condition
				second.value = ct->value;
				second.low = ct->low;
				second.high = a-1;

				third.value = ct->value;
				third.low = b+1;
				third.high = ct->high;

				ct->value = ct->value + k;
				if((ct->value)>max)
				{
					max = ct->value;
				}
				ct->low = a;
				ct->high = b;
				arr.emplace(ct, second);
					pt = ct;
				++pt;
				arr.emplace(pt, third);
					continue;


			}



		}
	//	cout << "\n";
	//	cout << max;
	//	cout  << "----- "   << a << "  a   " << b << "   b   " << "  k   ";
	}

	cout << max;



	return 0;
}

