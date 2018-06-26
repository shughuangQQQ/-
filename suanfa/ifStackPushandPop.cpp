#include<iostream>
using namespace std;
int findPosinPush(int *push,int *pop,int pos,int length){
	if(!push||!pop||length<=0)return -1;
	for(int i=0;i<length;i++)
		if(pop[pos]==push[i])
			return i;
	cout<<"error arry"<<endl;
	return -1;
}
void DeletePos(int *arry,int pos,int &length){
	if (!arry||pos<0||length<0)return;
	cout<<"delete::"<<pos<<endl;
	for (int i=pos;i<length-1;i++){
		arry[i]=arry[i+1];
	
	}




}
bool isStack(int *push,int *pop,int length){
	if(!push||!pop||length<=0)return false;
	int tempLength=length;

	for(int i=0;i<length-1;i++){
		int pos=findPosinPush(push,pop,i,tempLength);
		if(pos==0){
			if(push[pos+1]!=pop[i+1])
				return false;
		}
		else if(pos==tempLength-1){
			if(push[pos-1]!=pop[i+1]){
				return false;
			}
		}
		else{
			if(push[pos-1]!=pop[i+1]&&push[pos+1]!=pop[i+1]){
				cout<<"nooooo"<<"pos-1="<<push[pos-1]<<"  pos+1="<<push[pos+1]<<"popis=="<<pop[i+1];
				return false;
			}
		}
		DeletePos(push,pos,tempLength);
	}
		

	return true;
}


int main(){
	int push[]={1,2,3,4,5};
	int pop[]={4,3,5,1,2};
	if(false==isStack(push,pop,5))
		cout<<"false"<<endl;
	else cout<<"true"<<endl;

	return 0;
}
