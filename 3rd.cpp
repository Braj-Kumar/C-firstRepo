#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void winner(int arr[],int n){
	int even =0;
	int odd = 0;
	for(int i=0;i<n;i++){
		if((i+1) % 2==0){
			even  = even+arr[i];
		}
		else{
			odd = odd+arr[i];
		}
	}
	if(even>odd){
		cout<<"green "<<even - odd<<endl;
	}
	else if(odd>even){
		cout<<"blue "<<odd-even<<endl;
	}
	else{
		cout<<"draw";
	}
}
int main(){
	int n = 9;
	int arr[n] = {1,2,3,4,5,6,7,8,9};
	winner(arr,n);
}