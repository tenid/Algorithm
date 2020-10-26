#include<iostream>
#include<string>
using namespace std;

int main(void){
	string word;
	int time= 0;
	cin>> word;
	
	for(int i=0; i<word.length();i++){
		
		if(word[i]>='A' && word[i]<='C')
			time+=3;
		else if(word[i]>='D' && word[i]<='F')
			time+=4;
		else if(word[i]>='G' && word[i]<='I')
			time+=5;
		else if(word[i]>='J' && word[i]<='L')
			time+=6;
		else if(word[i]>='M' && word[i]<='O')
			time+=7;
		else if(word[i]>='P' && word[i]<='S')
			time+=8;
		else if(word[i]>='T' && word[i] <='V')
			time+=9;
		else
			time+=10;
		
		
	}
	
	cout<<time;
	
	return 0;
}
