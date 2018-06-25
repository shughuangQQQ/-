#include<iostream>

using name spacestd;

char *printBig(char *pnum,int length){
	if (length<=0) return NULL;
	if(length<10){
		int printTimes=0;
		for (int i=length-1,wei=1;i>=0;i--,wei*=10){
			printTimes+=wei*(pnum[length-1-i]-'0');
		}
	for(int i=0;i<printTimes;i++){
		cout<<i;
	}
	
	}


}



int main(){


}
