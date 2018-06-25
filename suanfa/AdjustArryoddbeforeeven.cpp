#include<iostream>


using namespace std;
void swap(int *a1,int *a2){
	int temp=*a1;
	*a1=*a2;
	*a2=temp;
}
void adjustarry(int *arry,int length){
	if(!arry||length<=0)return;
	int j=0,k=length-1;
	while(j<k){
		while(arry[j]%2!=0&&j<k)
			j++;
		while(arry[k]%2==0&&j<k)
			k--;
		if(arry[k]!=arry[j]){
			swap(&arry[k],&arry[j]);
			j++;
			k--;
		}
		
	}

	return;
}
void checkArry(int *arry,int length){
	if(!arry||length<=0)return;
	for(int i=0;i<length;i++){
		cout<<arry[i];
	}


	return;

}
int main(){
	int arry[]={1,2,3,4,5,6,7,8,9};
	adjustarry(arry,9);
	checkArry(arry,9);

	return 0;
}

