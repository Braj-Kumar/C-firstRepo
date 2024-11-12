// Q1. change the character

// #include<iostream>
// #include<bits/stdc++.h>
// using namespace std;
// string solve(string s, char c1, char c2){
// 	// string ans="";
// 	for(int i=0;i<s.length();i++){
// 		if(s[i]==c1){
// 			s[i]=c2;
// 		}
// 		else if(s[i]==c2){
// 			s[i]=c1;
// 		}
// 	}
// 	return s;
// }
// int main(){
// 	string s;
// 	char c1,c2;
// 	cin>>s;
// 	cin>>c1>>c2;
// 	cout<<solve(s,c1,c2);
// 	return 0;
// }

//Q2. count the 2nd largest element in array

// #include<iostream>
// #include<bits/stdc++.h>
// using namespace std;
// int count2ndmaxi(int arr[], int n){
// 	int maxi = INT_MIN;
// 	int secondMaxi = INT_MIN;
// 	for(int i=0;i<n;i++){
// 		if(arr[i]>maxi){
// 			maxi = arr[i];
// 		}
// 	}
// 	for(int i=0;i<n;i++){
// 		if(arr[i]>secondMaxi && arr[i] != maxi){
// 			secondMaxi = arr[i];
// 		}
// 	}
// 	int count =0;
// 	for(int i=0;i<n;i++){
// 		if(arr[i]==secondMaxi){
// 			count++;
// 		}
// 	}
// 	return count;
// }
// int main(){
// 	int n;
// 	cin>>n;
// 	int arr[n];
// 	for(int i=0;i<n;i++){
// 		cin>>arr[i];
// 	}
// 	cout<<count2ndmaxi(arr,n);
// 	return 0;
// }

//  Q1. sum of negative numbers

// #include<iostream>
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
// 	int a,b,c,d;
// 	cin>>a>>b>>c>>d;
// 	int sum = 0;
// 	if(a<0){
// 		sum = sum+a;
// 	}
// 	if(b<0){
// 		sum = sum+b;
// 	}
// 	if(c<0){
// 		sum=sum+c;
// 	}
// 	if(d<0){
// 		sum =sum+d;
// 	}
// 	cout<<sum;
// 	return 0;
// }

//  Q3. mid index

#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int midindex(int arr[],int n){
	int size =0;
	for(int i=0;i<n;i++){
		if(arr[i]<0){
			continue;
		}
		else{
			size++;
		}
	}
	int mid = (size-1)/2;
	return mid;
}
int main(){
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	cout<<midindex(arr,n);
	return 0;
}