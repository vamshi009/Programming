// attempt to implement the BFS traversal in trees, //need to add visited nodes list, and improve code to detect  cycles :p
#include<iostream>
#include<cstdlib>
#include<algorithm>

using namespace std;

struct node
{
	int vertex;
	struct node* next;

};

void DFS(struct node* arr[], int z)
{

	cout << z << "\n";
	check = arr[z];

	while(check!=NULL)
	{
		DFS(arr,check->vertex);
		 check = check->next;
	}

	return;
}


void BFS(struct node* arr[], int s[], int n, int size)
{
	int d[n];
	int count = 0;
	struct node* check;
	if(size==0)
	{
		//no children
		return;

	}
	else{


	for(int f=0;f<n;f++)
	{
		if(s[f]!=-1)
		{
			cout << s[f] << "\n";

			check = arr[s[f]];

			while(check!=NULL)
			{
				d[count]=check->vertex;
				count = count + 1;
				check = check->next;
			}
		}
		
	}

	for(int a=count;a<n;a++)
	{
		d[a]=-1;
	}

	BFS(arr, d, n, count);
	}


	return;
}


int main()
{
	int n,p,u,v,b;
	struct node* check;

	cout << "Welcome to the BFS for directed graphs using Adjacency lists\n";
	cout << "enter the no of vertices in the graph\n";

	cin >> n;

	struct node* arr[n];

	for(int i=0;i<n;i++)
	{
		arr[i]=NULL;
	}

	cout << "enter the no of edges for the graph!! \n";
	

	cin >> p;

	cout << "enter the two numbers source followed by vertex\n ";

	for(int i=0;i<p;i++)
	{
		cin >> u;
		cin >> v;
		struct node* naya;
		naya = (struct node*)malloc(sizeof(struct node));

		naya->vertex = v;
	   	naya->next = NULL;

		if(arr[u]==NULL)
		{
			arr[u]=naya;
		}
		else
		{
			check = arr[u];

			while(check->next!=NULL)
			{
				check = check->next;
			}

			check->next = naya;
                       
		}
		
	}

	while(1)
	{

	cout << "Press 1 for BFS and 2 for DFS and any other to exit\n";
	cin >> h;
	if((h!=1)||(h!=2))
	{
		break;
	}


	if(h==1)
	{

	cout << "enter the no for which you want BFS for\n ";

	cin >> b;
	int s[n];
	s[0]=b;
	for(int x=1;x<n;x++)
	{
		s[x]=-1;
	}
	int c=1;
	BFS(arr,s,n,c);
	}
	else
	{

	cout << "enter the no for which you want DFS  traversal\n"
		cin >> z;
	DFS(arr,z);
	}

	}

	return 0;
}

