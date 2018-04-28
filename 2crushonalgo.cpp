#include<iostream>
#include<algorithm>
#include<vector>
#include<cmath>
#include<list>

using namespace std;

struct box
{
	int value;
	int low;
	int high;

};

int main()
{
        int x,i;
	list<box> arr;
	struct box first, second, third;
	third.value = 222;
	third.low = 4;
	third.high = 56;
	first.value = 5;
	first.low = 0;
	first.high = 7;
	arr.emplace_back(first);

	list<box>::iterator it =  arr.begin();
	cout << "hi";
	x = it->value;
	cout << x;
	cout << "\n";
	struct box* ptr;
	ptr = (struct box*)malloc(sizeof(struct box));
	ptr->value = 9;
	ptr->low = 3;
	ptr->high = 3;
	second.value = ptr->value;
	second.low = ptr->low;
	second.high = ptr->high;
	arr.emplace(it, second);
	arr.emplace_back(third);
	it = arr.begin();
	cout << it->value;
	cout << "\n";
	list<box>::const_iterator ct;

	for(i=0;i<5;i++)
	{
		second.value = second.value + 1;
		arr.emplace(it, second);
	}

	for(ct = arr.begin(); ct!= arr.end(); ++ct)
	{
		cout << ct->value;
		cout << "lala\n";
	}




	return 0;
}
