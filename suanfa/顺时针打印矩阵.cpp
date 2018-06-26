#include<iostream>


using namespace std;
typedef enum{add,minuss}m_ru;
void rule(int *num,m_ru ru){
	if(ru==add)
		*num=*num+1;
	else if(ru==minuss)
		*num=*num-1;
	return;

}
int minqurry(int a,int b)
{
	if(a<b){
		if(a%2==0)
			return a/2;
		else return (a+1)/2;

	}
	else {
		if(b%2==0)
			return b/2;
		else return (b+1)/2;

		
	}
}
void PrintArry(int *arry,int n,int m,int qurry=0){
	if(qurry>=minqurry(n,m))return;
	int i=qurry,j=qurry;
	int *ptr=&j;	
	m_ru ru=add;
	while(1){
		cout<<arry[i*m+j]<<endl;
		rule(ptr,ru);
		if(j==m-1-qurry&&i==qurry){
			ptr=&i;
			ru=add;
		}
		else if(j==m-1-qurry&&i==n-1-qurry){
			ptr=&j;
			ru=minuss;
		}
		else if(j==qurry&&i==n-1-qurry){
			ptr=&i;
			ru=minuss;		
		}
		else if(j==qurry&&i==qurry){
			PrintArry(arry,n,m,qurry+1);
			break;
		}
	
	
	}

}


int main(){
	int arry[]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16};
	PrintArry(arry,4,4);
	return 0;
}
