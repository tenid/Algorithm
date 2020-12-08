/*
// beakjoon NO.1193
#include<iostream>
#include<vector>

using namespace std;

int main(void){
	int n;
	cin>> n;
	
	int i = 1;
	int temp =0;
	
	while(true){
		if(n - i <=0){
			break;
		}
		
		n-=i;
		i++;
	
	}
	n--;
	
	if(i % 2 ==  0){
		cout<< 1+n<<"/"<<i-n;
	}
	else{
		cout << i-n <<"/"<<n+1;
	
	}
		
	return 0;
}

*/