/*
#include <iostream>
using namespace std;xxxxxxxxxxxxxxx
void star(int i,int j,int num){
	// 1,1,1
	// 3,3,9 3,4,9 3,5,9
	// 4,3,9 4,4,9
 	
	// 9,9,27 9,10,27 9,17.27
	//9,9,9 9,10,9 9,17,9
	if((i/num)%3==1 && (j/num)%3 ==1)
		cout<<" ";
	else{
		//1 * 1 로 생각
		// 9 3 0
		if(num/3==0)
			cout<<"*";
		else{
			//3 * 3 크기로 분할 정복
			star(i,j,num/3);
		}
			
	}
}


int main(void){
	int num;
	cin>> num;
	
	for(int i=0;i<num;i++){
		for(int j=0;j<num;j++)
				star(i,j,num);			
		printf("\n");	
	}


	return 0;
}
*/