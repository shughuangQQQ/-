#include<iostream>
#include<queue>


using namespace std;

struct BtreeNode{

	int value;
	BtreeNode* pLeft;
	BtreeNode* pRight;

};

void LevelTravel(BtreeNode*root,queue<BtreeNode*>m_q){
	if(!root)return;
	
	int TobePrint=1;
	int NextPrint=0;

	m_q.push(root);
	while(m_q.size()>0){
		BtreeNode*temp=m_q.front();
		TobePrint--;
		m_q.pop();
		cout<<temp->value;
		if(temp->pLeft){
			NextPrint++;
			m_q.push(temp->pLeft);
		}
		if(temp->pRight){
			NextPrint++;
			cout<<temp->pRight->value;
		}
		if(TobePrint==0){
			cout<<endl;
			TobePrint=NextPrint;
			NextPrint=0;
		}
	}

}


int main(){




	return 0;
}
