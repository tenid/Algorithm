/*
#include<iostream>
#include<string>
using namespace std;


int main(void){
	string s;
	int num= 0;
	int pos;
	getline(cin,s);
	//문자열이 있으면
	if(!s.empty()){
		
		// 앞 공백 제거
		if(s.front() ==' ')
			s.erase(s.begin());
		if(!s.empty()){
			
			//뒷공백제거
			if(s.back() == ' ')
				s.erase(s.end()-1);
			
			//공백이 찾기
			pos = s.find(' ');
			
			// 공백이 있으면
			while(pos != s.npos){
				num++;
				//다음 공백 찾기
				pos = s.find(' ',pos+1);
				
			}
			// 단어의 갯수는 공백+1;
			num++;
			
		}
		
	}
	
	cout<<num<<endl;
	
	return 0;
}
*/