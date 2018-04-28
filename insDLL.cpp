//insert Node in a doubly sorted linked list 
//After each insertion, the list should be sorted
//Node is defined as

#include<cstdio>
#include<cstdlib>
#include<iostream>
#include<cmath>
#include<algorithm>
#include<vector>

using namespace std;
struct Node
{
	int data;
	Node *next;
	Node *prev;
};





Node* SortedInsert(Node *head,int data)
{

	cout << "eneterd for data as ";
	cout << data;
	// Complete this function
	// Do not write the main method. 
	struct Node *nu, *pres, *fur;
	nu = (struct Node*)malloc(sizeof(struct Node));
	if(head==NULL)
	{
		nu->data = data;
		nu->next = NULL;
		nu->prev = NULL;
		head = nu;
	}
	else
	{

		if(head->next==NULL)
		{
			if((head->data)>=(data))
			{
				nu->data = data;
				nu->next = head;
				nu->prev = NULL;
				head->prev = nu;
				head = nu;
			}
			else
			{
				nu->data = data;
				nu->next = NULL;
				head->next = nu;
				nu->prev = head;

			}
		}
		else
		{
			pres=head;
			while(pres!=NULL)
			{
				if((pres->data)>(data))
				{
					nu->data = data;
					nu->next = pres;
					nu->prev = NULL;
					pres->prev = nu;
					head  = nu;
					break;

				}
				else
				{

					if(pres->next==NULL)
					{
						nu->data = data;
						nu->next = NULL;
						nu->prev = pres;
						pres->next = nu;
						break;

					}
					else
					{
						fur = pres->next;
						if((fur->data)>=(data))
						{
							nu->data = data;
							nu->next = fur;
							nu->prev = pres;
							pres->next = nu;
							fur->prev = nu;
							break;
						}
						else
						{


							pres = pres->next;



						}
					}
				}


			}

		}


	}

	return head;
}

int main()
{

	cout << "welcome-------";
	int h,p,q,i,n;
	struct Node *head, *headf;
	head = (struct Node*)malloc(sizeof(struct Node));
	//head=NULL;
	head->data = 0;
	head->prev=NULL;
	head->next = NULL;
         

	cin >> q;
	cout << "----";
	cout << q;
	for(p=0;p<q;p++)
	{
		cout << "enetred first for lop\n";
		cin >> n;
		for(i=0;i<n;i++)
		{
			cout << "enterd the inner most for loop\n";

			cin >> h;
		headf = SortedInsert(head,h);
		head = headf;



		}

		while(head!=NULL)
		{
			cout << head->data;
			cout << " ";
			head=head->next;
		}

		cout << "-----------\n";

	}

	return 0;

}
