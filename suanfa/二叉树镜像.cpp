#include<iostream>

using namespace std;
struct BtreeNode{
	int value;
	BtreeNode* pLeft;
	BtreeNode* pRight;


};

void GetRevBtree(BtreeNode** root){
	if(!root)return;

	BtreeNode*TempNodeLeft=(*root)->pLeft;
	BtreeNode*TempNodeRight=(*root)->pRight;
	(*root)->pLeft=TempNodeRight;
	(*root)->pRight=TempNodeLeft;

	if((*root)->pLeft)
		GetRevBtree(&((*root)->pLeft));
	if((*root)->pRight)
		GetRevBtree(&((*root)->pRight));
	return;


}


int main(){


return 0;
}
