/*

// find the second maximum element in array

#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int SecondMaxi(int arr[],int n){

int maxi= INT_MIN;
int sMaxi = INT_MIN;
if(n==0){
	return -1;
}
if(n<2){
	maxi=arr[0];
	sMaxi=-1;
}
for(int i=0;i<n;i++){
	if(arr[i] > maxi){
		maxi = arr[i];
	}
}
for(int i=0;i<n;i++){
	if(arr[i] > sMaxi && arr[i] != maxi){
		sMaxi = arr[i];
	}
}
return sMaxi;
}

int main(){
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	cout<<SecondMaxi(arr,n);
	return 0;
}

*/



/*

// -------------------------------     Remove vowel from string -------------


#include<iostream>
#include<bits/stdc++.h>
using namespace std;
bool isVowel(char ch){
	if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' || ch == 'A' || ch == 'E' || ch =='I' || ch == 'O' || ch == 'U'){
		return true;
	}
	return false;
}
string removeVowel(string s){
	string ans;
	ans = ans+s[0];
	for(int i=1;i<s.size()-1;i++){
		if(isVowel(s[i]) && !isVowel(s[i+1]) && !isVowel(s[i-1])){
			continue;
		}
		else{
			ans = ans+s[i];
		}
		ans = ans+s[s.size()-1];
	}
	return ans;
}
int main(){
	string s;
	// getline(cin,s);
	cin>>s;
	cout<<removeVowel(s);
	return 0;
}

*/


/*
// Sum of odd integer from array

#include<iostream>
using namespace std;
int oddSum(int arr[],int n){
	int sum=0;
	for(int i=0;i<n;i++){
		if(arr[i] %2 !=0){
			sum = sum+arr[i];
		}
	}
	return sum;
}
int main(){
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	cout<<oddSum(arr,n);
	return 0;
}


*/


/*

// find single digit number

#include<iostream>
using namespace std;
int singleDigit(int n){
	// int N = n;
	while(n>9){
		if(n%2 == 0){
			n = (n-2)/2;
		}
		else if(n%2 != 0){
			n = n/2;
		}
	}
	return n;
}
int main(){
	int n;
	cin>>n;
	cout<<singleDigit(n);
	return 0;
}

*/




// Superior elemnet


#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;
int superiorElement(int arr[],int n){
	// vector<int>
	int count = 1;
	
	int maxi = arr[n-1];  // take the maxi of last element

	
	for(int i=n-2;i>=0;i--){
		if(arr[i] > maxi){
			// v.push_back(arr[i]);
			count++;
			// update maxi 
			maxi = arr[i];
		}
	}
	// return count;
	// return v;

}

int main(){
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	cout<<superiorElement(arr,n);
	return 0;
}




/*
// both have same logic 


// Maximum region

// Maximum cut in cake

#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	cout<<"maximum cut "<<(n*(n+1)/2)+1;
}

*/


/*
//Rock, Paper and Sessior

#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
	string s;
	cin>>s;

	if(s=="rock"){
		cout<<"paper";
	}
	else if(s=="paper"){
		cout<<"scissor";
	}
	else{
		"rock";
	}
	return 0;
}
*/

/*
// find first k word in string


#include<iostream>
using namespace std;
string solve(string s, int k){
	int count =0;
	for(int i=0;i<s.length();i++){
		if(s[i] == ' '){
			count++;
			if(count == k){
				return s.substr(0,i);
			}
		}
	}
	return "";
}
int main(){
	string s;
	getline(cin,s);
	int k;
	cin>>k;
	cout<<solve(s,k);
	return 0;
}
*/

/*

------------------------------   maximum press one ---------

#include<iostream>
#include<bits/stdc++.h>
int pressButton(int arr[],int n){
	int count = 0;
	for(int i=0;i<n;i++){
		if(count % 2 == 0){
			if(arr[i] == 0){
				count++;
			}
		}
		else{
				if(arr[i] == 1){
					count++;
				}
			}
	}
	return count;
}
using namespace std;
int main(){
	int arr[7]= {0,1,0,1,1,0,0};
	cout<<pressButton(arr,7);
	return 0;
}
*/

// sum of all prime number till n

// #include<iostream>
// #include<bits/stdc++.h>
// #include<cmath>
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
// 	if(n<2){
// 		return 0;
// 	}
// 	int sum =0;
// 	for(int i=2;i<=n;i++){
// 		if(isPrime(i)){
// 			sum = sum + i;
// 		}
// 	}
// 	return sum;
// }
// int main(){
// 	cout<<sumPrime(5);
// 	return 0;
// }