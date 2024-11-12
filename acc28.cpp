// #include<iostream>
// #include<bits/stdc++.h>
// using namespace std;
// string oddEve(int arr[],int n){
// 	string ans = "";
// 	for(int i=0;i<n;i++){
// 		if(arr[i]%2 == 0){
// 			ans+="even";
// 		}
// 		else{
// 			ans+="odd";
// 		}
// 	}
// 	return ans;
// }
// int main(){
// 	int n;
// 	cin>>n;
// 	int arr[n];
// 	for(int i=0;i<n;i++){
// 		cin>>arr[i];
// 	}
// 	cout<<oddEve(arr,n);
// 	return 0;
// }

// Q2. find the pair of target sum
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
vector<int>targetSum(vector<int>arr,int n,int target){
	vector<int>ans(2,0);
	reverse(arr.begin(),arr.end());
	int start = 0;
	int end = n-1;
	int prod = 0;
	while(start<end){
		if(arr[start]+arr[end] == target){
			if(prod<arr[start]*arr[end]){
				ans[0]=arr[end];
				ans[1]=arr[start];
			}
			start++;
			end--;
		}
		else if(arr[start]+arr[end] > target){
			end--;
		}
		else{
			start++;
		}
	}
	return ans;
}
int main(){
	// int n=6;
	int target =18;
	vector<int>arr={10,11,15,26,8,7};
	vector<int> result = targetSum(arr, 6, target);
    
    // Output the result
    cout << "Pair: " << result[0] << " " << result[1] << endl;
	return 0;
}