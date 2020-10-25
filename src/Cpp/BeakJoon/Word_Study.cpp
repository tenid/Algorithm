/*
#include<iostream>
#include<string>
#include<stdio.h>

using namespace std;
// 소문자 = 대문자 +32
// a=97 , A= 65
// z=122, Z =90

void HeapSort(int heap[],int n){
	
	for(int i=1; i<n;i++ ){
		int c=i;
		
		do{
			int root = (c-1)/2;
			if(heap[c]>heap[root]){
				int temp = heap[c];
				heap[c] = heap[root];
				heap[root] = temp;
			}
			
			c = root;
		}while(c!=0);
		
	}
	
	for(int j=n-1;j>=0;j--){
		int temp = heap[0];
		heap[0] = heap[j];
		heap[j] = temp;
		int c = 1;
		int root = 0;
		do{
			c = (root*2)+1;
			
			if(c<j-1 &&heap[c]<heap[c+1]){
				c++;
			}
			
			if(c<j && heap[c]>heap[root]){
				temp = heap[c];
				heap[c] = heap[root];
				heap[root] = temp;
			}
			root = c;
		}while(c<j);
		
		
	}
	
}


int main(void){
	int maxalphabet = 0;
	int maxindex= 0;
	int alphabet[26]={0,};
	string s;
	cin>> s;
	
	
	for(int i=0;i<26;i++){
		int target = i;
		
		for(int j=0;j<s.length();j++){
			if((int)s[j]=='A'+i or (int)s[j]=='a'+i){
				alphabet[i]++;
			}
				
				
			
		}
		
		
	}
	
	for(int j=0;j<26;j++){
		if(alphabet[maxindex]<alphabet[j])
			maxindex = j;
	}
	maxalphabet = maxindex+65;
	
	HeapSort(alphabet,26);
	if(alphabet[24]== alphabet[25])
		printf("%c",'?');
	else
		printf("%c",maxalphabet);

	
	return 0;
}
*/