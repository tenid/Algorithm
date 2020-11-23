/*
#include<iostream>
#include<vector>
#include<string>
using namespace std;

int main (void){
	
	int num =0;
	int count =0;
	char temp =' ';
	int index = 0;
	bool check = false;
	
	cin>> num;
	
	for(int i=0;i<num;i++){
		string s;
		cin>> s;
		
		//비어 있지 않을 때 까지
		while(!s.empty()){
			//cout<<"검사 시작"<<endl;
			//첫번째 문자
			temp = s[0];
			
			//첫번째 문자와 일치하는 문자의 위치 찾기
			index = s.find(temp);
			
			//일치하는 문자가 없을 때까지
			for(;index != s.npos;index = s.find(temp)){
				//cout<<"temp: "<<temp<<endl;
				//cout<<"index: " <<index <<endl;
				//cout<<"npos: "<<s.npos<<endl;
				if(check ==false && index>0){
					check = true;
					break;	
				}
				s.replace(index,1,"");
			//	cout<<s<<endl;
			}
			
		}
			if(check ==false){
				count++;
				
			}
			else{
				check = false;
			}
			
	}
	cout<<count<<endl;
	
	
	
	
	return 0;
}
*/