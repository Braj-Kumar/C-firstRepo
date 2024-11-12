// #include<iostream>
// #include<bits/stdc++.h>
// using namespace std;
// int solve(int a, int b){
// 	return ceil((sqrt((a*a)+(b*b))));
// }
// int main(){
// 	int a,b;
// 	cin>>a>>b;
// 	cout<<solve(a,b);
// 	return 0;
// }

// Q2. 
// #include<iostream>
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
// 	int n;
// 	cin>>n;
// 	int sum =0;
// 	int product =1;
// 	if(n%2 == 0){
// 		while(n){
// 			int digit = n%10;
// 			sum =sum+digit;
// 			n = n/10;
// 		}
// 		cout<<sum;
// 	}
// 	else{
// 		while(n){
// 			int digit = n%10;
// 			product=product*digit;
// 			n = n/10;
// 		}
// 		cout<<product;
// 	}
// 	return 0;
// }


// Q3.

#include<iostream>
#include<bits/stdc++.h>
using namespace std;
string odevCount(string s1, string s2){
	int count1 =0;
	int count2 =0;
	for(int i=0;i<s1.length();i++){
		if(s1[i] == ' '){
			count1++;
		}
	}
	for(int j =0;j<s2.length();j++){
		if(s2[j] == ' '){
			count2++;
		}
	}
	int diff = abs(count1-count2);
	if((count1+count2) % 2==0){
		return "Even:"+to_string(diff);
	}
	return "Odd:"+to_string(diff);
}
int main(){
	string s1,s2;
	getline(cin,s1);
	getline(cin,s2);
	cout<<odevCount(s1,s2);
	return 0;
}