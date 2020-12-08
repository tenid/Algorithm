/*
#include <iostream>
using namespace std;

//https://www.acmicpc.net/problem/11729

void hanoi(int n,int start, int bypass, int to){
	// 종료 조건
	if(n==1){
		printf("%d %d\n",start,to);
	}
	else{
		// 나머지를 먼저 다른 곳으로 옮긴다.
		hanoi(n-1,start,to, bypass);
		printf("%d %d\n",start,to);
		// 다른 곳으로 이동했던 것들을  목표지점으로
		hanoi(n-1,bypass,start,to);
		
		
	}
	
	
}


int main() {
    int num;
    cin >> num;
    cout << (1<<num) -1 << "\n";
    hanoi(num,1,2,3);
}

*/