// #include<iostream>
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
// 	int r;
// 	cin>>r;
// 	float area = 3.14 * r*r;
// 	if(area-((int)area) <= 0.5){
// 		cout<<(int) area;
// 	}
// 	else{
// 		(int) area+1;
// 	}
// 	return 0;
// }

// Q2. maximum drop temprature

// #include<iostream>
// #include<bits/stdc++.h>
// using namespace std;
// int maxDrop(int arr[],int n){
// 	int count=0;
// 	int maxCount=0;
// 	for(int i=1;i<n;i++){
// 		if(arr[i]<arr[i-1]){
// 			count++;
// 		}
// 		else{
// 			maxCount = max(count,maxCount);
// 		}
// 	}
// 	maxCount = max(count,maxCount);
// 	return maxCount;
// }
// int main(){
// 	int n;
// 	cin>>n;
// 	int arr[n];
// 	for(int i=0;i<n;i++){
// 		cin>>arr[i];
// 	}
// 	cout<<maxDrop(arr,n);
// 	return 0;
// }

// Q3. count the permutation of string

#include<iostream>
#include<bits/stdc++.h>
using namespace std;
bool isVowel(char ch){
	if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u'){
		return true;
	}
	return false;
}
int factorial(int n){
	// base case 
	if(n==0 || n==1){
		return 1;
	}
	return n*factorial(n-1);
}
int permutation(string s){
	int count=0;
	unordered_map<char,int> mp;
	for(int i=0;i<s.length();i++){
		if(!isVowel(s[i])){
			count++;
			mp[s[i]]++;
		}
	}
	if(count==0){
		return 0;
	}
	int denominator = 1;
	for(auto x:mp){
		denominator = denominator*factorial(x.second);
	}
	return factorial(count)/denominator;
}
int main(){
	string s;
	getline(cin,s);
	cout<<permutation(s);
	return 0;
}