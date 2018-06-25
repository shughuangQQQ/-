#include<iostream>

using namespace std;
struct ListNode{
	int value;
	ListNode* pnext;
};

ListNode* findbehindk(ListNode*root,int k){
	if(k<1||root==NULL)
		return NULL;
	ListNode*ptr1=root,*ptr2=root;
	int i=0;
	for(;i<k&&root!=NULL;i++)
		ptr2=ptr2->pnext;
	if(i!=k)
		return NULL;
	while(ptr2!=NULL){
		ptr1=ptr1->pnext;
		ptr2=ptr2->pnext;
	
	}
	return ptr1;
}

int main(){



return 0;
}
