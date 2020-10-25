/*
#include<iostream>

using namespace std;

int main(void){
	int count=0;
	int num;
	int digit[3];
	
	
	cin>> num;

	
	
	for(int i=1; i<=num;i++){
	   // 두자리 수 일 경우
		if(i<100){
			count++;
		}
		// 세자리수
		else if(i<1000){
			int k =0;
			int target = i;
			while(target){
				digit[k++] =target%10;
				target /= 10;
			}
			
			if(digit[0]-digit[1] ==  digit[1]- digit[2])
				count++;
		}
	
	};
	
	cout<<count;
	
	
	return 0;
}
*/