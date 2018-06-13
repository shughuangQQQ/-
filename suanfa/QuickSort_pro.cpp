#include<iostream>
#include<stdlib.h>
#include<time.h>


using namespace std;


int Random(int begain,int length){
	srand((unsigned)time(NULL));
	int renv= (rand()%(length-begain+1))+begain;
	cout<<"random num is"<<renv<<endl;
	return renv;
}
void swap(int *pnum_1,int *pnum_2){
	if(*pnum_1==*pnum_2) return;
	int temp=*pnum_2;
	*pnum_2=*pnum_1;
	*pnum_1=temp;
	return;

}
void PrintArry(int *arry,int length){
	if(arry==nullptr||length<=0)return;
	for(int i=0;i<length;i++){
		cout<<arry[i];
		if(i==length-1) cout<<endl;
	}
}
void QuickSort(int *arry,int length){
	if(length<=1) return;
	int changePos=-1;

	int comPos=Random(0,length-1);
	swap(&arry[comPos],&arry[length-1]);
	int j=-1,k=length-1;
	for(int i=0;i<k;i++){
		if(arry[i]<arry[length-1]){
			j++;
			swap(&arry[i],&arry[j]);
		
		}
		else if(arry[i]>arry[length-1]){
			k--;
			swap(&arry[k],&arry[i]);
			i--;	
		}
	}
	j++;
	swap(&arry[j],&arry[length-1]);
	
	QuickSort(&arry[0],j);
	QuickSort(&arry[k+1],length-k-1);
	return;
}


int main()
{	int arry[]={11,10,9,8,7,6,5,4,3,2,1,0};
	QuickSort(arry,11);
	PrintArry(arry,11);
}
