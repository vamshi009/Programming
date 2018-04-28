/*
   Merge two sorted lists A and B as one linked list
   Node is defined as 
   struct Node
   {
   int data;
   struct Node *next;
   }
 */
Node* MergeLists(Node *headA, Node* headB)
{

	struct Node *one, *x, *y, *z;
	if((headA==NULL)&&(headB!=NULL))
	{
		return headB;
	}
	if((headB==NULL)&&(headA!=NULL))
	{
		return headA;
	}

	if((headA!=NULL)&&(headB!=NULL))
	{
		one = headA;
		// This is a "method-only" submission. 
		// You only need to complete this method 
		while((headA!=NULL)&&(headB!=NULL))
		{
			if((headA->next==NULL)&&((headA->data)<=(headB->data)))
			{
				headA->next = headB;
				brea

			}


			if((headA->data)<=(headB->data))
			{
				x = headA->next;
				if((x->data)>=(headB->data))
				{
					headA->next=headB;
					y = headB->next;
					headB->next=x;
					headB = y;
					headA = headB;


				}
				else
				{
					headA = headA->next;
				}

			}
			else
			{
				z = headB->next;
				headB->next = headA;
				one = headB;
				headA = headB;
				headB = z;
			}




		}


	}
	return one;



}

