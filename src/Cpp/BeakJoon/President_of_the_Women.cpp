/*
#include<iostream>

using namespace std;

//Beakjun No.2775
int main(void){
	
	int k = 0;
	int n = 0;
	
	int appart[15][15];
	
	for(int i=0;i<15;i++){
		
		for(int j=0;j<15;j++){
			// 0층 1...15
			if(i==0){
				appart[i][j] = j+1;
			}
			// 1층 부터
			else {
				// 1호실 무조건 1
				if(j==0){
					appart[i][j]=1;
				}
				else{
					appart[i][j] = appart[i-1][j]+appart[i][j-1];
				}
				
				
			}
			
		}
		
	}
	
	
	int num;
	cin>> num;
	
	
	for(int i=0;i<num;i++){
		cin>>k;
		cin>>n;
	
		cout<<appart[k][n-1]<<endl;
		
	
	}
	

}
*/