/*
#include<iostream>

using namespace std;
//Beakjon No.1085
int main(void){
	int x,y,w,h;
	int result = 10001;
	
	cin>> x >> y>> w>>h;
	
	int* distance = new int[4];
	
	
	distance[0] = w-x;
	distance[1] = x-0;
	distance[2] = h-y;
	distance[3] = y-0;
	

	for(int i=0;i<4;i++){
		if(result>distance[i])
			result=distance[i];
	}
	
	
	printf("%d \n",result);
	
	
	
	
	return 0;
}
*/