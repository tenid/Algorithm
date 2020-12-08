/*
#include<iostream>
using namespace std;
// Beckjun No.2581
int main(void){
	int n,m;
	int sum=0;
	int min=0;
	cin>> n>>m;
	
	for(int i=n;i<=m;i++){
		
		for(int j=2;j<=i;j++){
			
			if(i%j==0 && j<i){
				break;
			}
			else if(i==j){
				sum+=i;
				if(min ==0){
					min =i;
				}
			}
				
		}
	
	}
	if(sum==0){
		cout<<(int)-1<<endl;
		return 0;
	}
	
	cout<<sum<<endl;
	cout<<min<<endl;
	
	
	
	
	return 0;
}
*/