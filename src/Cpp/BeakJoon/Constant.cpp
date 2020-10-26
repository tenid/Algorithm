/*
#include<iostream>
using namespace std;

int main(void){
	int a,b;
	int digit=100;
	cin>> a>> b;
	int revA=0;
	int revB=0;
	
	while(a){
		revA+=a%10 * digit;
		digit/=10;
		a/=10;
	} 
	digit= 100;
	
	while(b){
		revB+=b%10 * digit;
		digit/=10;
		b/=10;
	}
	
	int result = (revA<revB)? revB:revA;
	cout<<result;	
	
	return 0;
}
*/