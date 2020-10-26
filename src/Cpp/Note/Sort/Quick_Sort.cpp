/*
//퀵 정렬
// 피벗값 기준으로 비교
#include<iostream>

using namespace std;

void QuickSort(int array[],int start,int end){
	
	// 원소가 1개인 경우 그대로 두기
	if(start>= end) return;
	
	int key = start;
	
	int i = start+1;
	int j = end;
	
	// 엇갈릴때까지, 안 얻갈리면 다시 진행
	while(i<=j){
		while(array[key]>=array[i]&& i<=end){
			i++;
		}	
		while(array[key]<=array[j] && j>start)
			j--;

		// 엇갈렸다면 피벗하고 작은 값 교환
		if(i>j){
			int temp = array[key];
			array[key] = array[j];
			array[j] = temp;

		}// 엇갈리지 않았다면 큰 값 작은값 서로교환
		else{
				int temp = array[j];
				array[j] = array[i];
				array[i] = temp;
			}
		
	}
		QuickSort(array,start,j-1);
		QuickSort(array,j+1,end);
	
}

int main(void){
	int array[10] = {1,6,5,8,3,9,2,4,7,0};
	QuickSort(array,0,9);
	
	
	for(int i=0;i<10;i++)
		cout<<array[i]<<" ";
	
	
}
*/