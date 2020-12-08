/*
#include <iostream>
#include <cmath>
using namespace std;
//Beakjun No.9020
int main() {
	int num;
	int even;
	
	cin>> num;
	
	
	while(num--){
		// 짝수 입력받기
		cin>> even;
		
		// 짝수 숫자까지의 소수 구하기
		int * prime = new int[even+1];
		
		
		for(int i=2;i<=even;i++){
			prime[i] =i;
		}
		
		prime[0] = 0;
		prime[1] = 0;
		
		for(int i=2;i<=sqrt(even);i++){
			if(prime[i] == 0)
				continue;
			for(int j=i*i;j<=even;j+=i)
				prime[j] = 0;
		}
		
		for(int i=(even/2);i>0;i--){
			
			if(prime[i]&&prime[even-i]){
				printf("%d %d\n",prime[i],prime[even-i]);
				break;
			}
			
		}
		
		
		
		
	}
	
    
}
*/