#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int maxSubArraySum(int arr[], int n){
	int maxi =INT_MIN;
        for(int i=0;i<n;i++){
            int sum =0;
            for(int j=i;j<n;j++){
                sum = sum + arr[j];
              if(sum>maxi){
				maxi = sum;
			  }
            }
        
        }
        return maxi;
}
int main(){
	// int n;
	// cin>>n;
	// int arr[n];
	// for(int i =0;i<n;i++){
	// 	cin>>arr[i];
	// }
	int arr[9] = {-2,1,-3,4,-1,2,1,-5,4};
	cout<<maxSubArraySum(arr,9);
	return 0;
}