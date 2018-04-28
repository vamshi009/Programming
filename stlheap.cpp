#include<iostream>
#include<algorithm>
#include<cstdlib>
#include<vector>
#include<bits/stdc++.h>

using namespace std;

int main()
{

	vector<int> v;
	vector<int>::const_iterator it;
	v.push_back(10);
	v.push_back(20);
	v.push_back(30);
	cout << "front is " << endl;
	cout << v.front() << endl;
	cout << "size is " << endl;
	cout << v.size() << endl;

	make_heap(v.begin(), v.end());
	cout << "top  is " << endl;
	cout << v.front() << endl;
	for(it = v.begin();it!=v.end();it++)
	{
		cout << *it << endl;
	}
	pop_heap(v.begin(), v.end());
	v.pop_back();
	cout << "top after pop  is " << endl;
	cout << v.front() << endl;
	cout << "size is " << endl;
	cout << v.size() << endl;

	for(it = v.begin();it!=v.end();it++)
	{
		cout << *it << endl;
	}

	v.push_back(50);

	push_heap(v.begin(), v.end());
	cout << "top after insert   is " << endl;
	cout << v.front() << endl;
	cout << "nps are " << endl;
	for(it = v.begin();it!=v.end();it++)
	{
		cout << *it << endl;
	}

	pop_heap(v.begin(), v.end());
	v.pop_back();
	cout << "top after pop  is " << endl;
	cout << v.front() << endl;
	cout << "nps are " << endl;
	for(it = v.begin();it!=v.end();it++)
	{
		cout << *it << endl;
	}

	

	sort_heap(v.begin(), v.end());
	cout << "nps are " << endl;
	for(it = v.begin();it!=v.end();it++)
	{
		cout << *it << endl;
	}
	cout << "is_heap check " << endl;

	bool i =  is_heap(v.begin(), v.end());

		if(i==1)
		{
			cout << "is heap" << endl;
		}
		else
		{
			cout << "not heap " << endl;
		}

		v.resize(10,57);
	cout << "nps are " << endl;
	for(it = v.begin();it!=v.end();it++)
	{
		cout << *it << endl;
	}
		v.resize(1,57);
	cout << "nps are " << endl;
	for(it = v.begin();it!=v.end();it++)
	{
		cout << *it << endl;
	}







	return 0;
}
