/*
#include<iostream>
using namespace std;

int number = 9;
int heap[9] = {5,7,2,9,1,3,6,4,8};

int main(void){
	// 힙 구조 생성
	for(int i=1;i<number;i++){
		int c = i;	
		do{
			int root = (c-1) /2 ;
			if(heap[c]>heap[root]){
				int temp = heap[c];
				heap[c] = heap[root];
				heap[root] = temp;
			}
			
			c = root;
			
		}while(c!=0);
		
	}
	for(int j=number-1;j>=0;j--){
		int temp = heap[0];
		heap[0] = heap[j];
		heap[j] = temp;
		int root = 0;
		int c = 1;
		do{
			c = (root * 2) +1;
			if(c<j-1 && heap[c] <heap[c+1]){
				c++;
			
			}
			if(c<j && heap[root]<heap[c]){
				temp = heap[c];
				heap[c] = heap[root];
				heap[root] = temp;
			}
			root = c;
			
		}while(c<j);
		
		
	}
	for(int i=0;i<number;i++){
ß		cout<<heap[i]<<" ";
	}
	
	
}
*/