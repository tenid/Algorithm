/*
#include<iostream>
#include<string>
#include<vector>
using namespace std;

int main(void){
	string word;
	cin>> word;
	
	int index = 0;
	
	vector<string> croatia;
	
	croatia.push_back("c=");
	croatia.push_back("c-");
	croatia.push_back("dz=");
	croatia.push_back("d-");
	croatia.push_back("lj");
	croatia.push_back("nj");
	croatia.push_back("s=");
	croatia.push_back("z=");
	

	for(int i=0;i<croatia.size();i++){
		
		index = word.find(croatia[i]);
		
		for(;index != word.npos; index = word.find(croatia[i])){
			//cout<<croatia[i];
			word.replace(index,croatia[i].length(),"@");
		
		}
	}
	cout<<word.length();
	
	
	
	return 0;
}
*/