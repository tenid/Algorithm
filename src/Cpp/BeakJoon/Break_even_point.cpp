/*

#include<iostream>
using namespace std;

int main(void){
	
	long a=0,b=0,c=0;
	
	long answer=1;
	
	cin>>a>>b>>c;
	
	if(c<=b){
		printf("%d",-1);
		return 0;
	}
	
		// 안에 정리한 식이 목표에 도달하기 전에는 부등식이 false이니깐 !를 붙임 -> true
	// 안에 정리한 식이 목표에 도달하면 하면 부등식이 true 여서 반복문 멈추기 위해 !를 붙임 -> false
	while(!(a/(c-b)<answer)){
		answer++;
	}
	
	
	
	cout<<answer;
	
	
	
	return 0;
}
*/