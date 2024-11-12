#include<bits/stdc++.h>
using namespace std;
int main(){
	int n=6;
	int arr[n]= {1,0,1,0,1,1};
	int pair = 0;
	int count1 = 0;
	for(int i=n-1;i>=0;i--){
		if(arr[i] == 1){
			count1++;
		}
		else{
			pair = pair+count1;
		}
		
	}
	cout<<pair;

	return 0;
}