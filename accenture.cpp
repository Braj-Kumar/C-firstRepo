// Q1. Magical number

// #include<iostream>
// int magicalNo(int n){
// 	if(n==0){
// 		return 0;
// 	}
// 	int count=0;
// 	for(int i=1;i<n;i++){
// 		int sum=0;
// 		int j=i;
// 		while(j>0){
// 			if(j&1){
// 				sum = sum+2;
// 			}
// 			else{
// 				sum = sum+1;
// 			}
// 			j=j>>1;
// 		}
// 		if(sum%2==1){
// 			count++;
// 		}
// 	}
// 	return count;
// }
// using namespace std;
// int main(){
// 	int n;
// 	cin>>n;
// 	cout<<magicalNo(n);
// 	return 0;
// }

//  #include<iostream>
// //  #include<bits./stdc++.h>
// //  using namespace std;
// //  bool isPrime(int num){
// // 	if(num == 1 || num == 0){
// // 		return false;
// // 	}
// // 	for(int i=2;i*i <= num;i++){
// // 		if(num%i==0){
// // 			return false;
// // 		}
// // 	}
// // 	return true;
// //  }
// //  int primeSum(int i, int r){
// // 	int sum =0;
// // 	for(int j = r;j >= i;j--){
// // 		bool prime = isPrime(i);
// // 		if(prime){
// // 			sum = sum+i;
// // 		}
// // 	}
// // 	return sum;
// //  }
// //  int main(){
// // 	cout<<primeSum(4,13);
// // 	return 0;
// //  }

//  #include<iostream>
//  #include<string.h>
//  #include<bits./stdc++.h>
//  using namespace std;
//  int StrCount(string s,int k){
// 	int count =0;
// 	for(int i=0;i<s.length();i++){
// 		unordered_set<char> distinct;
// 		for(int j=i;j<s.length();j++){
// 			distinct.insert(s[j]);
// 			if(distinct.size() == k){
// 				count++;
// 			}
// 		}
// 	}
// 	return count;
//  }
//  int main(){
// 	cout<<StrCount("abcabcabc",3);
// 	return 0;
//  }

// #include<iostream>
// #include<bits./stdc++.h>
// #include<string.h>
// using namespace std;
// int main(){
// 	string s = "";
// 	int arr[5] = {1,2,3,4,5};
// 	for(int i=0;i<5;i++){
// 		if(arr[i] % 2==0){
// 			s += "even ";
// 		}
// 		else{
// 			s += "odd ";
// 		}

// 	}
// 	cout<<s;
// 	return 0;
// }

// #include<iostream>
// #include<bits./stdc++.h>
// #include<string.h>
// using namespace std;
// bool palindrome(string s){
// 	int i=0;
// 	int j = s.length()-1;
// 	while(i != j){
// 		if(s[i] != s[j]){
// 			return false;
// 		}
// 		i++;
// 		j--;
// 	}
// 	return true;
// }
// int main(){
// 	cout<<palindrome("apa");
// 	return 0;
// }

// #include<iostream>
// #include<bits./stdc++.h>
// using namespace std;
// int main(){
// 	int n=5;
// 	int arr[n] = {1,2,3,4,5};
// 	int i=0;
// 	int j=n-1;
// 	while(i < j){
// 		swap(arr[i],arr[j]);
// 		i++;
// 		j--;
// 	}
// 	for(int i=0;i<n;i++){
// 		cout<<arr[i];
// 	}
// 	return 0;
// }

// #include<iostream>
// #include<bits./stdc++.h>
// using namespace std;
// void reverString(string str){
// 	int i=0;
// 	int j=str.length()-1;
// 	while(i < j){
// 		swap(str[i],str[j]);
// 		i++;
// 		j--;
// 	}
// }
// int main(){
// 	// reverString("abcd");
// 	// cout<<"hlo";
// 	string str ;
// 	cin>>str;
// 	cout<<"enter your string";
// 	int i=0;
// 	int j=str.length()-1;
// 	while(i!=j){
// 		swap(str[i],str[j]);
// 		i++;
// 		j--;
// 	}
// 	return 0;
// }

// int main(){
// 	int maxi = INT_MIN;
// 	int mini = INT_MAX;
// 	int arr[5] = {1,22,2,5,8};
// 	for(int i=0;i<5;i++){
// 		if(arr[i] > maxi){
// 			maxi = arr[i];
// 		}
// 	}
// 	for(int i=0;i<5;i++){
// 		if(arr[i] < mini){
// 			mini = arr[i];
// 		}
// 	}
// 	cout<<mini<<endl;
// 	cout<<maxi;
// 	return 0;
// }

// #include<iostream>
// #include<bits./stdc++.h>
// using namespace std;
// int maxiMum(int arr[],int n){
// 	int maxi = INT_MIN;
// 	for(int i=0;i<n;i++){
// 		if(arr[i] > maxi){
// 			maxi = arr[i];
// 		}
// 	}
// 	return maxi;
// }
// int miniMum(int arr[], int n){
// 	int mini = INT_MAX;
// 	for(int i=0;i<n;i++){
// 		if(arr[i]<mini){
// 			mini = arr[i];
// 		}
// 	}
// 	return mini;
// }
// int main(){
// 	int arr[5]= {1,2,3,222,4};
// 	cout<<maxiMum(arr,5)<<endl;
// 	cout<<miniMum(arr,5);
// 	return 0;
// }


// convert into small to capital

// #include<iostream>
// #include<bits./stdc++.h>
// using namespace std;
// char convert(char name){
// 	char ans = name - 'a' + 'A';
// 	return ans;
// }
// int main(){
// 	char name;
// 	cin>>name;
// 	cout<<convert(name);
// 	return 0;
// }

// #include<iostream>
// #include<bits./stdc++.h>
// #include<cmath>
// using namespace std;
// int countDigit(int n){
// 	int count = 0;
// 	while(n){
// 		count++;
// 		n = n/10;
// 	}
// 	return count;
// }
// void armstrong(int num, int digit){
// 	int n = num;
// 	int ans =0;
// 	while(n){
// 		int rem = n%10;
// 		n = n/10;
// 		ans += pow(rem,digit);
// 	}
// 	if(ans == num){
// 		cout<<"yes";
// 	}
// 	cout<<"no";
// }
// int main(){
// 	int n;
// 	cin>>n;
// 	int digit = countDigit(n);
// 	// cout<<digit;
// 	armstrong(n,digit);
// 	return 0;
// }

// reverse the string

// #include<iostream>
// #include<bits./stdc++.h>
// using namespace std;
// int main(){
// 	string s = "abcde";
// 	int start = 0;
// 	int end = s.length()-1;
// 	while(start<end){
// 		swap(s[start],s[end]);
// 		start++;
// 		end--;
// 	}
// 	cout<<s;
// 	return 0;
// }

// #include<iostream>
// #include<bits./stdc++.h>
// using namespace std;
// int main(){
// 	string s = "namanss";
// 	int start = 0;
// 	int end = s.length()-1;
// 	while(start<end){
// 		if(s[start] != s[end]){
// 			cout<<"false";
// 			return 0;
// 		}
// 		start++;
// 		end--;
// 	}
// 	cout<<"true";
// 	return 0;
// }

// #include<iostream>
// #include<bits./stdc++.h>
// using namespace std;
// int giveIndex(int arr[],int n,int d,int q,int r){

// 	for(int i=0;i<n-1;i++){
// 		if(arr[i]==((d*q)+r)){
// 			return i;
// 		}
// 	}
// 	return -1;
// }
// int main(){
// 	int arr[5] = {5,6,7,9,10};
// 	// int d=2,q=3,r=1;
// 	// for(int i=0;i<4;i++){
// 	// 	if(arr[i]==((d*q)+r)){
// 	// 		cout<<i;
// 	// 		return 0;
// 	// 	}
// 	// }
// 	// 	cout<<-1;
// 	cout<<giveIndex(arr,5,2,3,1);
// 	return 0;
// }


// #include<iostream>
// #include<bits./stdc++.h>
// using namespace std;
// int main(){
// 	int n;
// 	cin>>n;
// 	int arr[n];
// 	for(int i=0;i<n;i++){
// 		cin>>arr[i];
// 	}
// 	int m;
// 	cin>>m;
// 	int ans=0;
// 	sort(arr,arr+n);
// 	for(int i=0;i<n;i++){
// 		if(arr[i]%5==0){
// 			ans++;
// 		}
// 		else if(m>=arr[i]){
// 			ans++;
// 			m = m-arr[i];
// 		}
// 	}
// 	cout<<ans;
// 	return 0;
// }


// #include<iostream>
// #include<bits./stdc++.h>
// using namespace std;
// int main(){
// 	int n;
// 	cin>>n;
// 	int arr[n];
// 	for(int i=0;i<n;i++){
// 		cin>>arr[i];
// 	}
// 	int sum =0;
// 	reverse(arr,arr+n);
// 	for(int i=0;i<n;i++){
// 		if(i%2==0){
// 			sum = sum+arr[i];
// 		}
// 	}
// 	cout<<sum;
// 	return 0;
// }

// #include<iostream>
// #include<bits./stdc++.h>
// using namespace std;
// int main(){
// 	int weight;
// 	cin>>weight;
// 	float height;
// 	cin>>height;
// 	float BMI = weight/(height*height);
// 	if(BMI < 18){
// 		cout<<0;
// 	}
// 	else if(BMI >= 18 && BMI <25){
// 		cout<<1;
// 	}
// 	else if(BMI >= 25 && BMI <30){
// 		cout<<2;
// 	}
// 	else if(BMI >= 30 && BMI < 40){
// 		cout<<3;
// 	}
// 	else{
// 		cout<<4;
// 	}
// 	return 0;
// }

// #include<iostream>
// #include<bits./stdc++.h>
// using namespace std;
// int evenXorSum(int arr[],int n){
// 	if(n==0){
// 		return 0;
// 	}
// 	if(n==1){
// 		return arr[0];
// 	}
// 	int sum =0;
// 	int xorr=0;
// 	sum = arr[0];
// 	xorr = arr[1];
// 	for(int i=2;i<n;i++){
// 		if(i%2==0){
// 			sum = sum + arr[i];
// 		}
// 		else{
// 			xorr = xorr^arr[i];
// 		}
// 	}
// 	return sum + xorr;

// }
// int main(){
// 	int n;
// 	cin>>n;
// 	int arr[n];
// 	for(int i=0;i<n;i++){
// 		cin>>arr[i];
// 	}
// 	cout<<evenXorSum(arr,n);
// 	return 0;
// }

// bool checkTwoChessboards(string coordinate1, string coordinate2) {
//         int x1,y1,x2,y2;
//         x1 = coordinate1[0] - 'a';
//         x2 = coordinate2[0] - 'a';
//         y1 = coordinate1[1] - '1';
//         y2 = coordinate2[1] - '1';

//         int sum1 = x1 + y1;
//         int sum2 = x2 + y2;

//         if((sum1 % 2 == 0 && sum2 % 2 == 0) || (sum1 % 2 != 0 && sum2 % 2 != 0)) return true;

//         return false;
//     }


#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int round(int c, int n){
	int r = n/c;
	if(n%c != 0){
		return r+1;
	}
	return r;
}
int main(){
	cout<<round(50,278);
	return 0;
}