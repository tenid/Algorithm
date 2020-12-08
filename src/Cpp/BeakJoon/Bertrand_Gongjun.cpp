/*
#include<iostream>
#include<cmath>

using namespace std;
//Beckjun No.4948
int main(void){
	int t=1;
	
	
	while(true){
		cin>>t;
		if(t==0)
			return 0;
		
		int count=0;
		int section = 2*t+1;
		int* prime = new int[section];

		for(int i=2; i<section; i++){
			prime[i] = i;
		}


		for(int i=2; i<sqrt(section);i++){
			if(prime[i] ==0)
				continue;

			for(int j=i+i;j<section;j+=i)
				prime[j] = 0;
		}

		for(int i=t+1;i<section;i++){
			if(prime[i]==0 || i==1){
				continue;
			}
			count++;
		}	

		printf("%d\n",count);

	}
	
	return 0;
}

*/