/*
#include<iostream>
#include<cmath>
using namespace std;

#Beakjon No.1929

int main(void){
	int m,n;
	
	cin>>m>>n;
	
	int* array = new int [n+1];
	
	// 1제외
	for(int i=2;i<=n;i++){
		array[i] = i;
	}
	
	for(int i=2;i<=sqrt(n);i++){
		if(array[i]==0){
			continue;
		}
		for(int j=i+i;j<=n;j+=i){
			array[j] =0;
		}
		
	}
	
	for(int i=m;i<=n;i++){
		if(array[i]==0)
			continue;
		printf("%d\n",i);
	}
	
	
	
	return 0;
}
*/