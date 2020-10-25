/*
#include<iostream>
using namespace std;

int main(void){
	int size =10001;
	int data[10001];
	for(int i=1;i<size;i++)
		data[i] = i;
	
	for(int i=1;i<size;i++){
		int sum = i;
		int temp = i;
		while(temp){
		int digit = temp % 10;
		sum += digit;
		temp /= 10;
		};
		
		if(sum<size)
			data[sum] = 0;
		
	};
	
	
	for(int i=1;i<size;i++){
		if(data[i]!=0)
			cout<<data[i]<<endl;
	}
	
	
	
	
	return 0;
}
*/