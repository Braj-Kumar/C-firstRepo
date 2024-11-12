// #include<iostream>
// #include<bits./stdc++.h>
// using namespace std;
// int nonRepeat(int arr[], int n){
// 	map<int, int> mp;
// 	// first task to store the frequency 
// 	for(int i=0;i<n;i++){
// 		// increment to every seen
// 		mp[arr[i]]++;
// 	}
// 	for(int i=0;i<n;i++){
// 		if(mp[arr[i]] == 1){
// 			return arr[i];
// 		}
// 	}
// 	return 0;
// }
// int main(){
// 	int n;
// 	cin>>n;
// 	int arr[n];
// 	for(int i=0;i<n;i++){
// 		cin>>arr[i];
// 	}
// 	cout<<nonRepeat(arr,n);
// }


// array subset of another array

// #include<iostream>
// #include<bits./stdc++.h>
// using namespace std;
// string isSubset(int arr1[], int n, int arr2[], int m){
// 	map<int , int>mp;
// 	// insert key value pair of arr1
// 	for(int i=0;i<n;i++){
// 		mp[arr1[i]]++;
// 	}
// 	// To check arr2 value is present or not in arr1
// 	for(int i=0;i<m;i++){
// 		if(mp[arr2[i]]>0){
// 			mp[arr2[i]]--;
// 		}
// 		else{
// 			return "No";
// 		}
// 	}
// 	return "Yes";
// }
// int main(){
// 	int arr1[6] = {11,1,13,21,3,7};
// 	int arr2[4] = {11,3,7,1};

// 	cout<<isSubset(arr1,6,arr2,4);
// 	return 0;
// }

// #include<iostream>
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
// 	string a,b;
// 	cin>>a>>b;
// 	unordered_map<char,int> m;
// 	for(int i=0;i<a.size();i++){
// 		m[a[i]]++;
// 	}
// 	for(int i=0;i<b.size();i++){
// 		if(m.find(b[i]) != m.end()){
// 			m[b[i]]=0;
// 		}
// 	}
// 	string ans = "";
// 	for(int i=0;i<a.size();i++){
// 		if(m[a[i]] != 0){
// 			ans = ans + a[i];
// 		}
// 	}
// 	cout<<ans;
// 	return 0;
// }


// #include<iostream>
// #include<bits/stdc++.h>
// using namespace std;
// void frequency(int arr[], int n){
// 	unordered_map<int, int> mp;
// 	for(int i=0;i<n;i++){
// 		mp[arr[i]]++;
// 	}
// 	for(int i=0;i<n;i++){
// 		arr[i] = mp[i+1];
// 	}
// }
// int main(){
// 	int arr[5]= {2,3,2,3,5};
// 	// cout<<arr[0];
// 	frequency(arr,5);
// 	for(int i=0;i<5;i++){
// 		cout<<arr[i]<<" ";
// 	}
// 	return 0;
// }

#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	int count=0;
	int maxi=INT_MIN;
	for(int i=0;i<n;i++){
		if(arr[i]>maxi){
			maxi=arr[i];
			count++;
		}
	}
	cout<<count;
	return 0;
}