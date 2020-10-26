/*
// 삽입 정렬
// 1번째 원소는 정렬되어 있다고 가정하고 2번째 원소부터 아래로 내려가면서 자신의 위치 확인
#include<iostream>

using namespace std;

int main(void){
	int array[10] = {1,6,5,8,3,9,2,4,7,0};
	for(int i=1;i<10;i++){
		
		for(int j=i;j<10;j++){
			
			while(j>0 && array[j]<array[j-1]){
				int temp = array[j];
				array[j] = array[j-1];
				array[j-1] = temp;
				j--;
			}
			
			
		}
		
		
	}
	
	for(int i=0;i<10;i++)
		cout<<array[i]<<" ";
	
	
	
	return 0;
}
*/