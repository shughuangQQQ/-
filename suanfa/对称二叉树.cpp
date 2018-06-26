#include<iostream>
#include<vector>
using namespace std;
struct BTreeNode{
	int value;
	BTreeNode* pLeft;
	BTreeNode* pRight;
};
void GetBtreeFirstOrder(BTreeNode*root,vector<int>&vec){
	if(!root)vec.push_back(-1);
	GetBtreeFirstOrder(root->pLeft,vec);
	vec.push_back(root->value);
	GetBtreeFirstOrder(root->pRight,vec);
	return;
}


bool IsSymmetry(BTreeNode*root){
	vector<int>vec;
	bool isSy=true;
	GetBtreeFirstOrder(root,vec);
	vector<int>::iterator ite=vec.begin();
	for(int i=0,j=vec.size()-1;i<j;i++,j--){
		if(vec[i]!=vec[j]){
			isSy=false;
			break;
		}
	
	}
	





	return isSy;
}



int main(){




	return 0;
}
