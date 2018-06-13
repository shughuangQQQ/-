#include<iostream>
#include<stdlib.h>
#include<time.h>


using namespace std;


int Random(int begain,int length){
	srand((unsigned)time(NULL));
	return (rand()%(length-begain+1))+begain;
}
void swap(int *pnum_1,int *pnum_2){
	int temp=*pnum_2;
	*pnum_2=*pnum_1;
	*pnum_1=temp;
	return;

}
void QuickSort(int *arry,int length){
	if(length<=1) return;
	int changePos=-1;
	int comPos=Random(0,length-1);
	swap(&arry[comPos],&arry[length-1]);
	
	for(int i=0;i<length-1;i++){
		if(arry[i]<arry[length-1]){
			changePos++;
			swap(&arry[i],&arry[changePos]);
			
		}
	}

	++changePos;
	swap(&arry[changePos],&arry[length-1]);
	QuickSort(&arry[0],changePos);
	QuickSort(&arry[changePos+1],length-changePos-1);

}


int main()
{	int arry[]={3,6,8,9,2,4,10};
	QuickSort(arry,7);
	for(int i=0;i<7;i++){
		cout<<arry[i];
	
	}

}
