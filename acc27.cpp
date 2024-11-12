// #include<iostream>
// #include<bits/stdc++.h>
// using namespace std;
// int secondSmall(int arr[],int n){
// 	int min = INT_MAX;
// 	int secondMin = INT_MAX;
// 	for(int i=0;i<n;i++){
// 		if(arr[i]<min){
// 			min = arr[i];
// 		}
// 	}
// 	for(int i=0;i<n;i++){
// 		if(arr[i]<secondMin && arr[i] != min){
// 			secondMin = arr[i];
// 		}
// 	}
// 	// return secondMin;
// 	return min;
// }
// int main(){
// 	int arr[5]={5,4,2,1,3};
// 	cout<<secondSmall(arr,5);
// 	return 0;
// }


// Q2. count number of setbit 

// #include<iostream>
// #include<bits/stdc++.h>
// using namespace std;
// int countSetBit(int n){
// 	int count =0;
// 	while(n!=0){
// 		if(n&1){
// 			count++;
// 		}
// 		n=n>>1;
// 	}
// 	return count;
// }
// int main (){
// 	int n;
// 	cin>>n;
// 	cout<<countSetBit(n);
// 	return 0;
// }

// #include<iostream>
// #include<bits/stdc++.h>
// using namespace std;
// string winner(string s){
// 	int countA=0;
// 	int countB=0;
// 	for(int i=0;i<s.length();i++){
// 		if(s[i]=='A'){
// 			countA++;
// 		}
// 		else if(s[i]=='B'){
// 			countB++;
// 		}
// 	}
// 	if(countA>countB){
// 		return "teamA";
// 	}
// 	return "teamB";
// }
// int main(){
// 	string s;
// 	getline(cin,s);
// 	cout<<winner(s);
// 	return 0;
// }

// Q3. if string contain spaces
// #include<iostream>
// #include<bits/stdc++.h>
// using namespace std;
// string winner(string s){
// 	int countA=0;
// 	int countB=0;
// 	for(int i=4;i<s.length();i=i+6){
// 		if(s[i]=='A'){
// 			countA++;
// 		}
// 		if(s[i]=='B'){
// 			countB++;
// 		}
// 	}
// 	if(countA>countB){
// 		return "teamA";
// 	}
// 	return "teamB";
// }
// int main(){
// 	string s;
// 	getline(cin,s);
// 	cout<<winner(s);
// 	return 0;
// }

// #include<iostream>
// #include<bits/stdc++.h>
// using namespace std;
// int gcd(int a, int b){
// 	while(a!=0){
// 		int rem = b%a;
// 		b = a;
// 		a = rem;
// 	}
// 	return b;
// }
// int main(){
// 	cout<<gcd(18,24);
// 	return 0;
// }

// #include<iostream>
// #include<bits/stdc++.h>
// using namespace std;
// bool isAlpha(char ch){
// 	if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' 
// 	|| ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U'){
// 		return true;
// 	}
// 	return false;
// }
// int factorial(int n){
// 	// base case 
// 	if(n== 0 || n == 1){
// 		return 1;
// 	}
// 	return n * factorial(n-1);
// }
// int permutation(string s){
// 	int count =0;
// 	unordered_map<char,int> mp;
// 	for(int i=0;i<s.length();i++){
// 		if(!isAlpha(s[i])){
// 			count++;
// 			mp[s[i]]++;
// 		}
// 	}
// 	if(count == 0){
// 		return 0;
// 	}
// 	int denm=1;
// 	for(auto x:mp){
// 		denm = denm * factorial(x.second);
// 	}
// 	return factorial(count)/denm;
// }
// int main(){
// 	string s;
// 	getline(cin,s);
// 	cout<<permutation(s);
// 	return 0;
// }

// circle
// #include<iostream>
// #include<bits/stdc++.h>
// using namespace std;
// int area(int n){
// 	float A = 3.14*n*n;
// 	if((A - (int) A) <= 0.5){
// 		return (int) A;
// 	}
// 	return (int)A+1;
// }
// int main(){
// 	cout<<area(5);
// 	return 0;
// }

// convert uppercase
// #include<bits/stdc++.h>
// using namespace std;
// string upper(string s){
// 	string ans ="";
	// uppercase Convert
	// for(int i=0;i<s.length();i++){
	// 	if(s[i]>='a' && s[i]<='z'){
	// 		ans += s[i]-32;
	// 	}
	// 	else{
	// 		ans += s[i];
	// 	}
	// }

	// LowerCase
// 	for(int i=0;i<s.length();i++){
// 		if(s[i]>='A' && s[i]<='Z'){
// 			ans += s[i]+32;
// 		}
// 		else{
// 			ans += s[i];
// 		}
// 	}
// 	return ans;
// }
// int main(){
// 	string s;
// 	getline(cin,s);
// 	cout<<upper(s);
// 	return 0;
// }

// sum of prime number
// #include<iostream>
// #include<bits/stdc++.h>
// using namespace std;
// bool isPrime(int n){
// 	for(int i=2;i<=sqrt(n);i++){
// 		if(n % i == 0){
// 			return false;
// 		}
// 	}
// 	return true;
// }
// int sumPrime(int n){
// 	int sum =0;
// 	for(int i=2;i<=n;i++){
// 		if(isPrime(i)){
// 			sum = sum+i;
// 		}
// 	}
// 	return sum;
// }
// int main(){
// 	int n;
// 	cin>>n;
// 	cout<<sumPrime(n);
// 	return 0;
// }

// gcd
// #include<iostream>
// #include<bits/stdc++.h>
// using namespace std;
// int gcd(int a, int b){
// 	int num1 = a;
// 	int num2 = b;
// 	while(num1 !=0){
// 		int rem = num2%num1;
// 		num2=num1;
// 		num1=rem;
// 	}
// 	int lcm = (a*b)/num2;
// 	return {lcm};
// }
// int main(){
// 	cout<<gcd(14,8);
// 	return 0;
// }

// factorial 
// #include<iostream>
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
// 	int n;
// 	cin>>n;
// 	int fact = 1;
// 	// // int i=1;
// 	// while(n>0){
// 	// 	fact = fact*n;
// 	// 	n--;
// 	// }
// 	// cout<<fact;

// 	for(int i=1;i<=n;i++){
// 		fact=fact*i;
// 	}
// 	cout<<fact;
// 	return 0;
// }

#include<iostream>
#include<bits/stdc++.h>
using namespace std;
bool isVowel(char ch){
	if(ch=='a' || ch == 'e' || ch=='i' || ch =='o' || ch =='u'){
		return true;
	}
	return false;
}
int fact(int n){
	// base case
	if(n==0 || n==1){
		return 1;
	}
	return n*fact(n-1);
}
int permu(string s){
	int count=0;
	unordered_map<char, int> mp;
	for(int i=0;i<s.length();i++){
		if(!isVowel(s[i])){
			count++;
			mp[s[i]]++;
		}
	}
	if(count ==0){
		return 0;
	}
	int deno = 1;
	for(auto x:mp){
		deno = deno * x.second;
	}
	return fact(count)/deno;
}
int main(){
	string s;
	getline(cin,s);
	cout<<permu(s);
	return 0;
}