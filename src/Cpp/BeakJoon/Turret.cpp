/*
#include<iostream>
#include<cmath>
using namespace std;
//Beakjun No.1002

int main(void){
	int num;
	int x1,x2,y1,y2,r1,r2;
	int distance;
	cin>> num;
	
	while(num--){
		
		cin>> x1>>y1>>r1>>x2>>y2>>r2;
		
		//d^2
		distance = pow(x1-x2,2)+pow(y1-y2,2);


		if(pow(r1+r2,2)>distance && pow(r1-r2,2)< distance){
			cout<<(int)2<<endl;
		}
		else if(x1==x2 && y1 == y2 && r1==r2){
			cout<<(int)-1<<endl;
		
		}
		else if(pow(r1+r2,2) == distance || pow(r1-r2,2)==distance){
			cout<<(int)1<<endl;
		}
		
		else{
			cout<<(int)0<<endl;
		}
		
		
		
		
	}
	
	
	
	return 0;
}
*/