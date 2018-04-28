#include <iostream>
#include <vector>
#include <stdlib.h>
using namespace std;
typedef long long int LL;

#define MOD 1000000007

long long int powmodm(int a,int x,int flag){
	long long int modi = (flag==0)?MOD:MOD-1;
	if(a == 0)
		return 0;
	if(x==0)
		return 1;
	if(x==1)
		return a%modi;
	long long int ans = powmodm(a,x/2,flag);
	long long int to_ret = ((LL)ans*(LL)ans)%modi; 
	if(x%2==0)
		return to_ret; 
	return ((LL)to_ret*(LL)a)%modi;

}

struct node{

	int data;
	int w;
	struct node* next;
};


void checknode(int val, vector<struct node*> s, vector<int> &sol, int e, vector<int> &visit)
{

	if(sol[0]==1)
	{
		struct node* temp;
		temp = s[val];
		while(temp!=NULL)
		{

			if((temp->w==e)&&(visit[temp->data]==0))
			{
				sol[0]=0;
				//cout << "becvoming 0 for " << e << "at " << temp->data  << "in " << val << endl;
				return;
				break;
			}

			temp = temp->next;
		}

		if(sol[0]==1)
		{
			temp = s[val];

			while(temp!=NULL)
			{
				if(visit[temp->data]==0)
				{
					vector<int> naya;
					naya = visit;
					naya[val]=1;
				checknode(temp->data,s,sol,temp->w,naya);
				}


				temp = temp->next;
			}


		}

		


	}
	else
		return;


}

int simplepath(int i, vector<struct node*> s, int n)
{
	//cout << "enterd simplepath" << endl;

	int imp = i;
	struct node* temp;
	temp = s[i];
	//int h=1;
	vector<int> sol;
	sol.push_back(1);
	vector<int> visit;
	for(i=0;i<=n;i++)
	{
		visit.push_back(0);
	}
	visit[imp]=1;

	while(temp!=NULL)
	{
		checknode(temp->data,s,sol,temp->w,visit);
		temp = temp->next;
	}

	return sol[0];
		
}

int main()
{
	int n,i,a,b,c,h=0;
	cin >> n;
vector<struct node*> s;
//vector<struct node*> m;
struct node* tu=NULL;
for(i=0;i<=n;i++)
{
	s.push_back(tu);
	//m.push_back(tu);
}
	for(i=1;i<n;i++)
	{
		//cout << "enterd for test case" << i << endl;
		cin >> a;
		cin >> b;
		cin >> c;
		struct node* temp = (struct node*)malloc(sizeof(struct node));
		temp->data = b;
		temp->w = c;
		temp->next = NULL;
           //   cout << "a is" << a << " b is " << b << endl;
		
	      if(s[a]==NULL)
		{
			s[a]=temp;
			//cout << "enterd null" << endl;
		}
		else
		{
			if(s[a]!=NULL)
			{
			struct node* temp2;
			 temp2=s[a];

			while(temp2->next!=NULL)
			{
				temp2 = temp2->next;

			}

			temp2->next = temp;
			}
			//cout << "done extreemes" << endl;
		}
/*
		struct node* cemp = (struct node*)malloc(sizeof(struct node));
		cemp->data = b;
		cemp->w = c;
		cemp->next=NULL;


		if(m[a]==NULL)
		{
			m[a]=cemp;
			//cout << "enterd nulli m " << endl;
		}
		else
		{
			if(m[a]!=NULL)
			{
			struct node* cemp2;
			 cemp2=m[a];
			// cout << "enmted not null" << endl;

			while(cemp2->next!=NULL)
			{
				cemp2 = cemp2->next;

			}

			cemp2->next = cemp;
			}
			//cout << "done extreemes m " << endl;
		}
*/
         //cout << "done temp " << endl;
		/*
		struct node* bemp = (struct node*)malloc(sizeof(struct node));
		bemp->data = a;
		bemp->w = c;
		bemp->next = NULL;

		if(m[b]==NULL)
		{
			m[b]=bemp;
		}
		else
		{

			struct node* bemp2;
			bemp2 = m[b];
			while(bemp2->next!=NULL)
			{
				bemp2 = bemp2->next;
			}

			bemp2->next = bemp;
		}

*/
		struct node* kemp = (struct node*)malloc(sizeof(struct node));
		kemp->data = a;
                kemp->w = c;
                kemp->next = NULL;
		if(s[b]==NULL)
		{
			s[b]=kemp;
		}
		else
		{

			struct node* kemp2;
			kemp2 = s[b];
			while(kemp2->next!=NULL)
			{
				kemp2 = kemp2->next;
			}

			kemp2->next = kemp;
		}


		//cout << "done " << i << endl; 

	}

//vector<int> sv,mvi;
vector<int> sv;
for(int j=0;j<=n;j++)
{
	//cout << "push";
	sv.push_back(0);
	//mv.push_back(0);
}

int count=0;
for(i=1;i<=n;i++)
{
	if(s[i]!=NULL)
	{
		//cout << "calling sp" << endl;
	h = simplepath(i,s,n);
	//cout << "h is" << h << "for " << i << endl;
	if(h==1)
	{
		sv[i]=1;
		count++;
	}
	}
}
/*
cout << "the array " << endl;
for(i=0;i<=n;i++)
{
	cout << sv[i] << " ";

}
cout << endl;
*/
/*
for(i=1;i<=n;i++)
{
	if(sv[i]==1&&m[i]!=NULL)
	{
		h = simplepath(i,m,n);
		if(h==1)
			mv[i]=1;

	}

}
int count=0;
for(int j=1;j<=n;j++)
{
	if(sv[j]==1&&mv[j]==1)
	{
		count++;
	}

}

*/
int ans1 = powmodm(count,count,1);
int ans2 = powmodm(count,ans1,0);
cout << ans2 << endl;
return 0;
}
