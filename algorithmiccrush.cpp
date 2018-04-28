#include<cmath>
#include<cstdio>
#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main()
{
	long long int N,M,a,b,k, max=0, i, p,r;
	 cin >> N;
	 cin >> M;
	 long long int arr[N];
	 for(r=0;r<(N);r++)
	 {
		 arr[r]=0;
	 }
         //cout << "---"; 
	 //cout << N; //
	// cout << "****"; //
	// cout << M; //
	// cout << '\n'; //

	 for(i=0;i<M;i++)
	 {

	//	 cout << "enterd for loop for ";//
	//	 cout << i;//
	//	 cout << '\n';//
		 cin  >> a;
		 cin >>  b;
		 cin >>  k;

		 for(p=(a-1);p<=(b-1);p++)
		 {
			 arr[p]=arr[p]+k;
			 
			 if(arr[p]>=max)
			 {
				 max=arr[p];

			 }
		 }

		// cout << "max at the end of";  cout << i; cout << " is " ; cout << max ; cout << "\n"; //
	 }

	 cout << max;
	 //cout << "done\n";


	return 0;
}
