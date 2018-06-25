#include<iostream>

using namespace std;
struct ListNode{
	int value;
	ListNode*pnext;
};
void swap(int *a1,int *a2){
	if(!a1||!a2||*a1==*a2)return;
	int temp=*a1;
	*a1=*a2;
	*a2=temp;
	return;
}
void combineList(ListNode**List1,ListNode**List2){
	if(!*List1||!*List2||!List1||List2)
		return;
	ListNode*jptr1=*List1,*jptr2=*List2;
	while(1){
		jptr2=*List2;
		if(jptr1&&jptr2){
			if(jptr1->value<=jptr2->value){
				jptr1=jptr1->pnext;
				continue;
			}
			else{
				ListNode*tempNode=jptr1->pnext;
				jptr1->pnext=jptr2;
				*List2=jptr2->pnext;
				jptr1->pnext->pnext=tempNode;
			}
		
		}
		if(jptr1==NULL){
			jptr1->pnext=*List2;
			return;
		}
		if(jptr2==NULL){
			return;
		}
	}
	return;


	return;
}


int main(){

return 0;
}
