// #include<iostream>
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
// 	// Ascii value

// 	char ch = 'a';
// 	cout<<int(ch)<<endl;

// 	char c = 'A';
// 	cout<<int(c)<<endl;

// 	int a = 0;
// 	cout<<char('0')<<endl;
// 	string str = "hello";
// 	reverse(str.begin(),str.end());
// 	cout<<str;
// 	return 0;
// }


#include<iostream>
#include<bits/stdc++.h>
using namespace std;
string sortString(string s){
	vector<int> alpha(26,0);
	for(int i=0;i<s.length();i++){
		// store the frequency of character of string
		int index = s[i] - 'a';
		alpha[index]++;
	}
	string ans;
	for(int i=0;i<26;i++){
		char c = 'a'+i;
		while(alpha[i]){
			ans = ans + c;
			alpha[i]--;
		}
	}
	return ans;
}
int main(){
	string s;
	getline(cin,s);
	cout<<sortString(s);
	return 0;
}