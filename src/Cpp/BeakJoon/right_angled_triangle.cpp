/*
#include<iostream>
#include<cmath>

using namespace std;
#Beakjon No.4153
int main(void){
	int x,y,z;
	
	while(true){
		cin>> x>>y>>z;
		
		if(x == 0 && y == 0 && z == 0)
			return 0;

		if(x>y && x>z){
			if(pow(x,2)== pow(y,2) + pow(z,2))
				cout<<"right"<<endl;
			else
				cout<<"wrong"<<endl;

		}		
		else if(y>x && y>z){
			if(pow(y,2)== pow(x,2) + pow(z,2))
				cout<<"right"<<endl;
			else
				cout<<"wrong"<<endl;
		}
		else{
			if(pow(z,2)== pow(x,2) + pow(y,2))
				cout<<"right"<<endl;
			else
				cout<<"wrong"<<endl;

		}
	}
	
	return 0;
}
*/