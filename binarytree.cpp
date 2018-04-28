#include<iostream>   //implemented a binary tree with Inorder and deletion also ;), you can also work on diffrent traversal mechanisms by adding few lines 
#include<algorithm>    // to the code :P! Happy Coding!!
#include<cmath>

using namespace std;


struct node{

	int data;
	struct node* left;
	struct node* right;


};

struct node* InsertElement(int p, struct node* root)
{
	struct node *check, *insert;
	int flag = 0,left = 0, right = 0;
	if(root==NULL)
	{
		 root = (struct node*)malloc(sizeof(struct node));
		 root->data = p;
		 root->left = NULL;
		 root->right=NULL;
	}
	else
	{
		check = root;

		while(check!=NULL&&(check->data!=-1))
		{
		if((p)>=(check->data))
		{
			if(check->right!=NULL)
			{
			check = check->right;
			}
			else
			{
				insert = check;
				flag = 1;
				right = 1;
				break;
			}
		}
		else
		{
			if(check->left!=NULL)
			{
			check = check->left;
			}
			else
			{
				insert = check;
				flag = 1;
				left = 1;
				break;
			}
		}
		}
		if(flag==1)
		{
			struct node* naya = (struct node*)malloc(sizeof(struct node)); 

			naya->data = p;
			naya->left = NULL;
			naya->right = NULL;
			if(left==1)
			{
				insert->left = naya;
			}
			if(right==1)
			{
				insert->right = naya;
			}

		}
		if((flag==0)&&(check->data==-1))
		{
			check->data = p;

		}

	}
	return root;
}

struct node* CheckElement(int m, struct node* root)
{
	struct node *check, *ans;
	int flag = 0;

	if(root==NULL)
	{
		cout << "empty tree\n";
		ans = NULL;
	}
	else
	{
		check = root;
		while(check!=NULL)
		{

                 if(check->data==m)
		{
			cout << "found data, element present\n";
			flag = 1;
			ans = check;
			break;
		}
		 else
		 {
			 if(m>=(check->data))
			 {
				 check = check->right;
			 }
			 else
			 {
				 check = check->left;
			 }
		 }

		}
		if((check==NULL)&&(flag==0))
		{
			cout << "element doesn't exist" ;
			ans = NULL;
		}
	}
	return ans;
}
int*  InorderTravel(struct node* ele, int count, int arr[100])
{
	if(ele!=NULL)
	{
	if(ele->left!=NULL)
	{
		InorderTravel(ele->left, count, arr);
	}
	cout << ele->data << "\n";
	arr[count]=ele->data;
	count=count+1;

	if(ele->right!=NULL)
	{
		InorderTravel(ele->right, count, arr);
	}
	}
	else
	{
		cout << "NULL pointer, cant help :/ \n";
	}
	return arr;
		
}


struct node*  DeleteElement(int q, struct node* root)
{
	struct node *ele, *wer;
	int x;
	int* t;
	cout << "welcome to deletion\n";
	int a[100];
	for(int i=0;i<100;i++)
	{
		a[i]=-1;
	}


	int count =0,value, insert;
	ele = CheckElement(q,root);
	if(ele!=NULL)
	{
		cout << "element present to be deleted\n";
	}
	t=InorderTravel(ele, count,a);
		value = ele->data;
	for(int i=0;i<100;i++)
	{
		if(t[i]==value)
		{
			x = i;
			break;
		}
	}
	insert = t[x+1];
	wer = CheckElement(insert, root);
	wer->data = -1;
	ele->data = insert;
	cout << "Deletion completed successfully";
	return root;

}


void ShowBTree(struct node* root)
{
	if(root!=NULL)
	{
		cout << root->data << "\n";
		cout << "\n";
		if(root->left!=NULL)
		{
			ShowBTree(root->left);
		}
		if(root->right!=NULL)
		{
			ShowBTree(root->right);
		}
	}
	return;
}	


int main()
{
	int n,p,q,m,i,v;
	struct node* root;
	struct node* rit;
	struct node* ret;
	root = NULL;
	while(1)
	{
	cout << "Enter\n 1 for Insertion into Binary tree,\n 2 for Deleting an element from Binary tree,\n 3 to show the Binary tree\n, 4 check if an element is present in an array\n, 5 for Inorder traversal\n, 9 to exit the program\n" ;
	cin >> n;
	if(n==9)
	{
		break;
	}

	if(n==1)
	{
		cout << "Enter the element to be inserted\n";
		cin >> p;
		root = InsertElement(p, root);
	}

	if(n==2)
	{
		cout << "Enter the element to delete\n";
		cin >> q;
	        root = DeleteElement(q, root);
	}

	if(n==3)
	{
		ShowBTree(root);
	}
	if(n==4)
	{
		cout << "enter element to check\n";
		cin >> m;
		rit = CheckElement(m, root);
	}
	if(n==5)
	{
		int s[100];
		int* z;
		cout << "enter the elemnet you want Inorder traversal for\n";
		cin >> v;
		ret = CheckElement(v,root);
		z = InorderTravel(ret,0,s);

		
	}

	}
	return 0;
}
