/*
#include<iostream>
using namespace std;
// Beckjun No.1978

int main(void){
	
	int num;
	int count=0;
	//int* array = new int[num];
	cin >> num;
	
	int target;
	while(num--){
		cin>> target;
		
		for(int i=2;i<=target;i++){	
			
			if(target % i == 0 && i<target){
				break;
			}
			else if(i==target){
				count++;
				break;
			}
			
			
		}
			
		
		
	}
	cout<<count<<endl;
	
	
	
	return 0;
}
*/