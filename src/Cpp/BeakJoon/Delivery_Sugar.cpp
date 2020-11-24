/*
#include<iostream>
#include<string>
#include<vector>

#define BIG 5
#define SMALL 3
using namespace std;

int main(void){
	
	int kg =0;
	int count =0;
	int result =0;
	cin>> kg;
	
	// 가장 큰 것을 최대한 많이 들어본다.
	int bigcount = kg/BIG;
	
	
	while(bigcount>=0){
		
		int temp = kg - (bigcount * BIG);
		
		if(temp % 3==0){
			
			cout<<bigcount + (temp/ SMALL)<<endl;
			return 0;
			
		}
		
		//무게가 남아 있는 경우
		//큰 것의 갯수를 하나  줄여보고 다시 체
		bigcount--;
	
	}
		
	cout<<(int)-1<<endl;
	
	
	return 0;
}

*/