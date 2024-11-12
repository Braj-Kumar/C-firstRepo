//  Q1. print odd and even 


// #include<iostream>
// #include<bits/stdc++.h>
// using namespace std;
// string iseveOdd(int arr[],int n){
// 	string ans = "";
// 	for(int i=0;i<n;i++){
// 		if(arr[i] %2 == 0){
// 			ans += "even ";
// 		}
// 		else{
// 			ans+="odd ";
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
// 	cout<<iseveOdd(arr,n);
// 	return 0;
// }


//  Q2. total number of permutation of consonent character

// #include<iostream>
// #include<bits/stdc++.h>
// using namespace std;
// bool isVowel(char c){
// 	if(c =='a' || c=='e' || c=='i' || c=='o' || c=='u' || c=='A' || c=='E' || c=='I' 
// 	|| c=='O' || c=='U'){
// 		return true;
// 	}
// 	return false;
// }
// int factorial(int n){
// 	// base case
// 	if(n==0 || n==1){
// 		return 1;
// 	}
// 	return n*factorial(n-1);
// }
// int main(){
// 	int count =0;
// 	string s;
// 	getline(cin,s);
// 	for(int i=0;i<s.length();i++){
// 		if(isVowel(s[i])){
// 			continue;
// 		}
// 		else{
// 			count++;
// 		}
// 	}
// 	// cout<<count;
// if(count ==0){
// 	cout<<0;
// }
// 	cout<<factorial(count);
// 	return 0;
// }

// using map

// #include<iostream>
// #include<bits/stdc++.h>
// using namespace std;
// int factorial(int n){
// 	if(n==0 || n==1){
// 		return 1;
// 	}
// 	return n*factorial(n-1);
// }
// int main(){
// 	int count =0;
// 	string s;
// 	getline(cin,s);
// 	unordered_map<char,int>mp;
// 	mp['a']++;
// 	mp['e']++;
// 	mp['i']++;
// 	mp['o']++;
// 	mp['u']++;
// 	mp['A']++;
// 	mp['E']++;
// 	mp['I']++;
// 	mp['O']++;
// 	mp['U']++;

// 	for(int i=0;i<s.length();i++){
// 		if(mp.find(s[i])==mp.end()){
// 			count++;
// 		}
// 	}
// 	// edge case
// 	if(count == 0){
// 		cout<<0;
// 	}
// 	cout<<factorial(count);
// 	return 0;
// }

//  Q3. sum of array that is present at prime indexes

// #include<iostream>
// #include<bits/stdc++.h>
// using namespace std;
// bool isPrime(int n){
// 	if(n<=1){
// 		return false;
// 	}
// 	for(int i=2;i<=sqrt(n);i++){
// 		if(n%i == 0){
// 			return false;
// 		}
// 	}
// 	return true;
// }
// int sumPrime(int arr[],int n){
// 	int sum=0;
// 	for(int i=0;i<n;i++){
// 		if(isPrime(i)){
// 			sum = sum+arr[i];
// 		}
// 	}
// 	return sum;
// }
// int main(){
// 	int n;
// 	cin>>n;
// 	int arr[n];
// 	for(int i=0;i<n;i++){
// 		cin>>arr[i];
// 	}
// 	cout<<sumPrime(arr,n);
// 	return 0;
// }

// Q4. Area of circle
// #include<iostream>
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
// 	int d;
// 	cin>>d;
// 	float area = 3.14*d*d;
// 	if(area - int(area) <= 0.5){
// 		cout<<int(area);
// 	}
// 	else{
// 		int(area)+1;
// 	}
// 	return 0;
// }


// 20th aug

// Q1. Googly prime number

// #include<iostream>
// #include<bits/stdc++.h>
// using namespace std;
// bool isPrime(int n){
// 	for(int i=2;i<=sqrt(n);i++){
// 		if(n%i == 0){
// 			return false;
// 		}
// 	}
// 	return true;
// }
// bool googlePrime(int n){
// 	int sum =0;
// 	while(n != 0){
// 		int digit = n%10;
// 		sum = sum+digit;
// 		n = n/10;
// 	}
// 	if(isPrime(sum)){
// 		return true;
// 	}
// 	return false;
// }
// int main(){
// 	int n;
// 	cin>>n;
// 	cout<<googlePrime(n);
// 	return 0;
// }


// Q2. binary to character
// #include<iostream>
// #include<bits/stdc++.h>
// using namespace std;
// string binaryc(string s){
// 	int count =0;
// 	string ans = "";
// 	for(int i=0;i<s.length();i++){
// 		if(s[i]=='1'){
// 			count++;
// 		}
// 		else{
// 			ans.push_back('A'+count-1);
// 			count = 0;
// 		}
// 	}
// 		ans.push_back('A'+count-1);
// 	return ans;
// }
// int main(){
// 	string s;
// 	getline(cin,s);
// 	cout<<binaryc(s);
// 	return 0;
// }


// 21st Aug

// Q1. decimal to binary
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
string bin(int n){
	string ans ="";
	while(n >0){
		int rem = n%2;
		if(rem == 0){
			ans.push_back('0');
		}
		else{
			ans.push_back('1');
		}
		n=n/2;
	}
	reverse(ans.begin(),ans.end());
	return ans;
}
int main(){
	int n;
	cin>>n;
	cout<<bin(n);
	return 0;
}