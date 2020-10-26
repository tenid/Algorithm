// 선택 정렬
// 제일 작은 수를 배열에서 찾아 순서대로 정렬한다.

/*
#include<iostream>

using namespace std;

int main(void)
{
	int array[10] = {1,6,5,8,3,9,2,4,7,0};
	int i,j=0;
	int index;
	for(i=0;i<10;i++){
		int min = 999;
		
		for(j=i;j<10;j++){
			if(min>array[j]){
				min = array[j];
				index = j;
			}	
			
		}
		
		int temp = array[index];
		array[index] = array[i];
		array[i] = temp;
		
	}
	
	for(int i=0;i<10;i++)
		cout<<array[i]<<" ";
	
	return 0;
}
*/