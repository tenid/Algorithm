/*
#include<iostream>
#include<string>
#include<vector>
using namespace std;

int main(void){
	
	vector<int> index;
	int answer = 0;
	vector<int> razorlist;
	vector<vector<int>> ironbarlist;
	string data;
	
	cin>>data;
	
	for(int i=0;i<data.size();i++){
		if(data[i]=='(')
			index.push_back(i);
		else if(i>0 && data[i]==')'){
			// 레이저
			if(data[i-1] == '('){
				razorlist.push_back(i);
				index.pop_back();
			}
			// 막대기의 끝
			else{
				vector<int> ironbar;
				ironbar.push_back(index.back());
				index.pop_back();
				ironbar.push_back(i);
				
				ironbarlist.push_back(ironbar);
				
			}
	
		}
		
	}
	
	
	// 레이저, 쇠막대기 탐색 종료
	for(int i=0; i<ironbarlist.size();i++){
		int start = ironbarlist[i][0];
		int end = ironbarlist[i][1];
		int razorcount =0;
		
		for(int j=0; j<razorlist.size();j++){
			if(razorlist[j]>start && razorlist[j]<end)
				razorcount++;
		}
		answer+=razorcount+1;
		
		
	}
	

	cout<<answer<<endl;
	return 0;
}
*/