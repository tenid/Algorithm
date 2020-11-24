/*
#include<iostream>
using namespace std;


int main(void){
	int target =0, layer =0;
	// 목표 숫자
	cin>> target;
	
	// 처음 start는 2번레이어의 가장 작은 방 번호 이므로
	// 첫 순환 때는 start는 변하면 안된다.  1번방 방문
	// start = 2 일때 layer = 0  2 += 6 * 0;
	// layer++ => 0에서 1이 되고
	// for문 조건은 타겟과 2번레이어의 가장 작은 방 번호를 체크
	// start += 6  * 1 = 8 => 3번 레이어 가장 작은 번호 조건 설정
	// layer++ -> 2
	
	//   가장 작은 방 번호 ; 다음레이어 방문 체크 ; 실제로 방문하는 행위
	for(int start =2; start<=target; layer++){
		
		start += 6 * layer;
	}
	
	
	
	if(target==1)
		layer =1;
	
	cout<<layer<<endl;
	
	return 0;
}
*/