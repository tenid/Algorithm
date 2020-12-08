/*
// Beckjun No.2869
#include<iostream>
#include<vector>

using namespace std;

int main(void){
	
	int up =0;
	int down=0;
	int height =0;
	int day =0;
	cin>>up>>down>>height;

	// 마지막 전날만 계산
	if((height-up)%(up-down)==0){
	    day = (height-up) /(up-down);
	}else{
	     day = (height-up) /(up-down)+1;
	}
	
	// 마지막 올라가기만 하는 날 +1
	cout<<++day<<endl;
    
	return 0;
}
*/