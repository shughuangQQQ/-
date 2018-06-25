#include<iostream>

using namespace std;
struct ListNode{
	int value;
	ListNode*pnext;
};

ListNode* FindLoopPos(ListNode*root,int *loopLength){

	if(!root||!loopLength)return NULL;
	ListNode*pfront=root,*pback=root->pnext;
	while(pback!=NULL&&pfront!=pback){
		pfront=pfront->pnext;
		pback=pback->pnext;
		if(pback->pnext!=NULL)
			pback=pback->pnext;
		else
			return NULL;
	}
	if(!pback)return NULL;
	ListNode*jpback=pback->pnext;
	*loopLength=1;
	while(jpback!=pback){
		jpback=jpback->pnext;
		*loopLength=*loopLength+1;
	}
	return pback;


}
ListNode*FindEntry(ListNode*root){
	int *length;
	*length=0;
	ListNode*meetPos=FindLoopPos(root,length);
	if(!meetPos)return NULL;
	ListNode*pfront=root,*pback=root;
	for(int i=0;i<*length;i++){
		pback=pback->pnext;
	}
	while(pfront!=pback){
	pfront=pfront->pnext;
	pback=pback->pnext;
	}
	return pfront;
	
}
int main(){


	return 0;
}
