#include<iostream>

using namespace std;
struct ListNode{
	int value;
	ListNode*pnext;
};
void revList(ListNode**root){
	if(root==NULL||*root==NULL)return;
	ListNode*j1=*root,*j2=*root,*j3=*root;
	while(j1!=NULL){
		if(j1->pnext!=NULL){
			j2=j1->pnext;
			j3=j2->pnext;
			j2->pnext=j1;
			if(j3!=NULL){
				j1=j3;
			}
			else{
				*root=j2;
				return;
			}
		}
		else{
			*root=j1;
			return;
		}
		
		
	
	}
	 


}
int main(){

	return 0;
}
