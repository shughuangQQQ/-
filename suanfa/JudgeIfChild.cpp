#include<iostream>

using namespace std;

struct BTreeNode{
	int value;
	BTreeNode*pLeft;
	BTreeNode*pRight;
};
typedef enum{FALSE,TRUE}BOOL;
BOOL IfChild(BTreeNode*root,BTreeNode*JudgeNode){
	if(!JudgeNode)return TRUE;
	if(!root) return FALSE;
	if(root->value!=JudgeNode->value)return FALSE;
	if(IfChild(root->pLeft,JudgeNode->pLeft)
	   &&IfChild(root->pRight,JudgeNode->pRight))
		return TRUE;
	return FALSE;


}
BOOL ISChild(BTreeNode*root,BTreeNode*JudgeNode){
	if(root==NULL||JudgeNode==NULL)return FALSE;
	if(IfChild(root,JudgeNode)!=TRUE){
		if(TRUE== ISChild(root->pLeft,JudgeNode)||
			TRUE== ISChild(root->pRight,JudgeNode))
			return TRUE;
		else return FALSE;
	}
	return TRUE;

}
int main(){

return 0;
}
