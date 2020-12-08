/*
#include<iostream>

using namespace std;
//https://www.acmicpc.net/problem/2798
int main(void){
	int num=0;
	int target=0;
	int result=0;
	
	cin>> num >> target;
	
	int data[num];
	
	// 데이터 넣기
	
	for(int i=0;i<num;i++){
		cin>>data[i];
	}

	
	// 5 21
	// 5 6 7 8 9
	
	//10 500
	//36 93 138 181 185 214 216 245 295 315 
	for(int i=0;i<num-2;i++){
		
		for(int j=1;j<num-1;j++){
			
			for(int k=2;k<num;k++){
				if(data[i]==data[j] || data[i]==data[k]||data[j]==data[k] )
					continue;
				
				int temp = data[i]+data[j]+data[k];
				
				if(temp<=target && temp>result){
					result = temp;
				}
				
			}
			
		}
		
	}
	
	printf("%d",result);
	
	
	return 0;
}
*/