/*
#include <iostream>
#include <string>
using namespace std;
// 백준 9012번 https://www.acmicpc.net/problem/9012


-문제-
괄호 문자열(Parenthesis String, PS)은 두 개의 괄호 기호인 ‘(’ 와 ‘)’ 만으로 구성되어 있는 문자열이다. 그 중에서 괄호의 모양이 바르게 구성된 문자열을 올바른 괄호 문자열(Valid PS, VPS)이라고 부른다. 한 쌍의 괄호 기호로 된 “( )” 문자열은 기본 VPS 이라고 부른다. 만일 x 가 VPS 라면 이것을 하나의 괄호에 넣은 새로운 문자열 “(x)”도 VPS 가 된다. 그리고 두 VPS x 와 y를 접합(concatenation)시킨 새로운 문자열 xy도 VPS 가 된다. 예를 들어 “(())()”와 “((()))” 는 VPS 이지만 “(()(”, “(())()))” , 그리고 “(()” 는 모두 VPS 가 아닌 문자열이다. 

여러분은 입력으로 주어진 괄호 문자열이 VPS 인지 아닌지를 판단해서 그 결과를 YES 와 NO 로 나타내어야 한다. 


//출력은 표준 출력을 사용한다. 만일 입력 괄호 문자열이 올바른 괄호 문자열(VPS)이면 “YES”, 아니면 “NO”를 한 줄에 하나씩 차례대로 출력해야 한다. 

 입력 예시
6
(())())
(((()())()
(()())((()))
((()()(()))(((())))()
()()()()(()()())()
(()((())()(


 출력 예시
NO
NO
YES
NO
YES
NO




int main() {
	int num; // 입력 받는 문자열 수
	string data;
	
	cin>> num;
	string answer[num];
	for(int i=0;i<num;i++){
		int left=0;
		cin>> data;
		
		//'('일 때는 카운트 증가 ')' 카운트 감소 하여 갯수가 맞으면 0으로 종료
		for(int j=0;j<data.size();j++){
			if(data[j]=='(') 
				left++;
			else
				left--;
			
		// 예외상황으로 ')'가 먼저 나올 경우 카운트가 -1로 뒤에 문자열 비교 없이 종료		
			if(left<0)
				break;
			
			
		}

	// '(',')'의 갯수가 같을 경우
	if(left == 0)
		answer[i] = "YES";
	else // 한쪽의 문자가 더 많은 경우
		answer[i] = "NO";
	}
	
	for(int k=0;k<num;k++)
		cout<<answer[k]<<endl;
	
    return 0;
}
*/