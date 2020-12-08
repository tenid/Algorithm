/*
#include<iostream>
using namespace std;

// https://www.acmicpc.net/problem/10250

int main(void){
	
	int t,xx,yy;
	cin>> t;
	
	int *h = new int[t];
	int *w = new int[t];
	int *n = new int[t];

	
	for(int i=0;i<t;i++){
		//호실 계산 
		cin>> h[i]>> w[i]>> n[i];
		
		xx = n[i] / h[i] +1;
		
		// 층 계산
		yy = n[i] % h[i];
		
		// 높이와 같은 층으로 배정 받는 경우
		if(n[i] % h[i] == 0){
			// 높이와 같은 층으로 배정
			yy = h[i];
			// 몫이 1로 나와 2호실로 배정받는 것을 보정
			xx--;
			
		}
		
		if(xx<10){
			cout<< yy <<"0"<< xx<< '\n';
		}
		else{
			cout<< yy << xx <<'\n';
		}
		
	}

	
	return 0;
}
*/