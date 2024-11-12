

// Q1.

// #include<iostream>
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
// 	string s;
// 	getline(cin,s);
// 	string ans;
// 	for(int i=0;i<s.length();i++){
// 		if(s[i]>='a' && s[i]<='z'){
// 			ans += s[i]-32;
// 		}
// 		else if(s[i]>='A' && s[i]<='Z'){
// 			ans += s[i]+32;
// 		}
// 	}
// 	cout<<ans;
// 	return 0;
// }


// Q2.

// #include<iostream>
// #include<bits/stdc++.h>
// using namespace std;
// int required(int arr[],int n, int r, int unit){
// 	int z = r*unit;
// 	int sum =0;
// 	if(n==0){
// 		return -1;
// 	}
// 	for(int i=0;i<n;i++){
// 		sum = sum+arr[i];
// 		if(sum>z){
// 			// return n-i-1;
// 			return i+1;
// 		}
// 	}
// 	return 0;
// }
// int main(){
// 	int arr[8]={2,8,3,5,7,4,1,2};
// 	int r = 7;
// 	int unit = 2;
// 	cout<<required(arr,8,7,2);
// 	return 0;
// }


// Q3.

// #include<iostream>
// using namespace std;
// int countdiff(int arr[],int n, int num, int diff){
// 	int count =0;
// 	for(int i=0;i<n;i++){
// 		if(abs(num-arr[i])<=diff){
// 			count++;
// 		}
// 	}
// 	if(count>0){
// 		return count;
// 	}
// 	return -1;
// }
// int main(){

// 	int n;
// 	cin>>n;
// 	int arr[n];
// 	for(int i=0;i<n;i++){
// 		cin>>arr[i];
// 	}
// 	int num;
// 	cin>>num;
// 	int diff;
// 	cin>>diff;
// 	cout<<countdiff(arr,n,num,diff);
// }

// Q4.

// #include<iostream>
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
// 	int n;
// 	cin>>n;
// 	int m;
// 	cin>>m;
// 	int sum1=0;
// 	int sum2=0;
// 	for(int i=0;i<=m;i++){
// 		if(i%n==0){
// 			sum1+=i;
// 		}
// 		else{
// 			sum2+=i;
// 		}
// 	}
// 	if(n<0 || m<0){
// 		cout<<0;
// 	}
// 	cout<<abs(sum2-sum1);
// 	return 0;
// }

// Q4. 

// #include<iostream>
// #include<bits/stdc++.h>
// using namespace std;
// int summ(int arr[], int n){
// 	int mini = INT_MAX;
// 	int scndmini =INT_MAX;
// 	int maxi=INT_MIN;
// 	int sncdMaxi = INT_MIN;
// 	for(int i=0;i<n;i++){
// 		if(i%2==0){
// 		if(arr[i]>maxi){
// 			maxi = arr[i];
// 		}

// 		}
// 	}
// 	for(int i=0;i<n;i++){
// 		if(i%2==0){
// 		if(arr[i]>sncdMaxi && arr[i] != maxi){
// 			sncdMaxi = arr[i];
// 		}
// 		}
// 	}
// 	for(int i=0;i<n;i++){
// 		if(i%2!=0){
// 			if(arr[i]<mini){
// 				mini=arr[i];
// 			}
// 		}
// 	}
// 	for(int i=0;i<n;i++){
// 		if(i%2!=0){
// 			if(arr[i]<scndmini && arr[i] != mini){
// 				scndmini = arr[i];
// 			}
// 		}
// 	}
// 	return sncdMaxi+scndmini;

// }
// int main(){
// 	int n;
// 	cin>>n;
// 	int arr[n];
// 	for(int i=0;i<n;i++){
// 		cin>>arr[i];
// 	}
// 	cout<<summ(arr,n);
// 	return 0;
// }

//Q5. 

// #include<iostream>
// #include<bits/stdc++.h>
// using namespace std;
// int pairsum(int arr[],int n, int sum){
// 	int mini = INT_MAX;
// 	int scndMini = INT_MAX;
// 	if(n<=3){
// 		return 0;
// 	}
// 	for(int i=0;i<n;i++){
// 		if(arr[i]<mini){
// 			mini = arr[i];
// 		}
// 	}
// 	for(int i=0;i<n;i++){
// 		if(arr[i]<scndMini && arr[i] != mini){
// 			scndMini = arr[i];
// 		}
// 	}
// 	if((mini+scndMini) <= sum){
// 		return mini*scndMini;
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
// 	int sum;
// 	cin>>sum;
// 	cout<<pairsum(arr,n,sum);
// 	return 0;
// }

// Q6 move hyphon

// #include<iostream>
// #include<bits/stdc++.h>
// using namespace std;
// string ans(string s){
// 	int count=0;
// 	for(int i=0;i<s.length();){
// 		if(s[i]=='_'){
// 			count++;
// 			s.erase(i,1);
// 		}
// 		else{
// 			i++;
// 		}
// 	}
// 	while(count !=0){
// 		s = '_'+s;
// 		count--;
// 	}
// 	return s;
// }
// int main(){
// 	string s;
// 	getline(cin,s);
// 	cout<<ans(s);
// 	return 0;
// }

// Q7 replace charcter

// #include<iostream>
// #include<bits/stdc++.h>
// using namespace std;
// string replace(string s,char ch1, char ch2){
// 	for(int i=0;i<s.length();i++){
// 		if(s[i]==ch1){
// 			s[i]=ch2;
// 		}
// 		else if(s[i]==ch2){
// 			s[i]=ch1;
// 		}
// 	}
// 	return s;
// }
// int main(){
// 	cout<<replace("apple",'a','p');
// 	return 0;
// }

// Q8

// #include<iostream>
// #include<bits/stdc++.h>
// using namespace std;
// int result(int a,int b, int c){
// 	if(c==1){
// 		return a+b;
// 	}
// 	if(c==2){
// 		return a-b;
// 	}
// 	if(c==3){
// 		return a*b;
// 	}
// 	if(c==4){
// 		return a/b;
// 	}
// 	return 0;
// }
// int main(){
// 	int a,b,c;
// 	cin>>c>>a>>b;
// 	cout<<result(a,b,c);
// 	return 0;
// }


// Q 9 ye smjh nhi aya h 

// #include<iostream>
// #include<bits/stdc++.h>
// using namespace std;
// int po(int n){
// 	int count =0;
// 	while(n%2==0 && n!=0){
// 			count++;
// 			n=n/2;
		
// 	}
// 	return count;
// }
// int range(int a,int b){
// 	int max =0;
// 	int num=0;
// 	for(int i=a;i<b;i++){
// 		int temp = po(i);
// 		if(temp>max){
// 			max = temp;
// 			num = i;
// 		}
		
// 	}
// 	return num;
// }
// int main(){
// 	cout<<range(7,12);
// 	return 0;
// }

// Q10.

// #include<iostream>
// #include<bits/stdc++.h>
// using namespace std;
// int summ(int a, int b){
// 	int sum =0 ;
// 	for(int i=a;i<=b;i++){
// 		if((i%3== 0) && (i%5 == 0)){
// 			sum = sum+i;
// 		}
// 	}
// 	return sum;
// }
// int main(){
// 	int a,b;
// 	cin>>a>>b;
// 	cout<<summ(a,b);

// 	return 0;
// }

// Q11

// #include<iostream>
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
// 	int n;
// 	cin>>n;
// 	int sum =0;
// 	for(int i=1;i<=10;i++){
// 		cout<<n*i<<",";
// 		sum += n*i; 
// 	}
// 	cout<<endl;
// 	cout<<sum;
// 	return 0;
// }

// Q12

// #include<iostream>
// #include<bits/stdc++.h>
// using namespace std;
// bool isPalindrome(int n){
// 	int op = n;
// 	int num=0;
// 	while(op){
// 		int digit = op%10;
// 		num = (num*10)+digit;
// 		op=op/10;
// 	}
// 	if(n == num){
// 		return true;
// 	}
// 	return false;
// }
// void number(int a, int b){
// 	for(int i=a;i<=b;i++){
// 		if(isPalindrome(i)){
//                 cout <<i<< ",";  // Add a comma before subsequent palindromes
			
// 		}
// 	}
	
// }
// int main(){
// 	int a,b;
// 	cin>>a>>b;
// 	number(a,b);
// 	return 0;
// }

// Q13

// #include<iostream>
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
// 	int x1,y1,x2,y2,x3,y3;
// 	cin>>x1>>y1;
// 	cin>>x2>>y2;
// 	cin>>x3>>y3;
// 	int first = sqrt((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1));
// 	int snd = sqrt((x3-x2)*(x3-x2)+ (y3-y2)*(y3-y2));
// 	int trd = sqrt((x3-x1)*(x3-x1)+(y3-y1)*(y3-y1));

// 	cout<<first+snd+trd;
// }

// Q14

// #include<iostream>
// #include<bits/stdc++.h>
// using namespace std;

// int main(){
// 	int n;
// 	cin>>n;
// 	int arr[n];
// 	for(int i=0;i<n;i++){
// 		cin>>arr[i];
// 	}
// 	int index = -1;
// 	int maxi = INT_MIN;
// 	for(int i=0;i<n;i++){
// 		if(arr[i]>maxi){
// 			maxi = arr[i];
// 			index = i;
// 		}
		
// 	}
// 	cout<<maxi<<endl<<index;
// 	return 0;
// }

// Q15 permutation of string
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
bool isVowel(char ch){
	if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch =='u' 
	|| ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U'){
		return true;
	}
	return false;
}

int factorial(int n){
	// base case 
	if(n==0 || n==1 ){
		return 1;
	}
	return n * factorial(n-1);
}
int permuatation(string s){
	int count =0;
	unordered_map<char, int> mp;
	for(int i=0;i<s.length();i++){
		if(!isVowel(s[i])){
			count++;
			mp[s[i]]++;
		}

	}
	if(count ==0 ){
		return 0;
	}
	int deno = 1;
	for(auto x: mp){
		deno = deno *factorial(x.second);

	}
	return factorial(count)/deno;
}
int main(){
	string s;
	getline(cin,s);
	cout<<permuatation(s);
	return 0;
}
