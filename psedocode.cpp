// #include<iostream>
// using namespace std;
// int main(){
// 	int x=1;
// 	int y=-1;	
// 	if(x==50 || ++y){
// 		cout<<"1st"<<y;
// 	}
// 	else{
		// ans
// 		cout<<"2nd"<<y;
// 	}
// 	return 0;
// }

// 2.
// #include<iostream>
// using namespace std;
// int main(){
// 	int a=10;
// 	if(a == 010){
// 		cout<<"a";
// 	}
// 	else{
// 		// ans
// 		cout<<"b";
// 	}
// 	return 0;
// }

// 3.
// #include<iostream>
// using namespace std;
// int main(){
// 	for(int i=1;i<5;i++){
// 		if(i<=3){
// 			// hii1hii2hii3 output
// 			cout<<"hii"<<i;
// 			continue;
// 		}
// 	}
// 	cout<<endl;
// 	float a = 587.671%2;
// 	// error
// 	cout<<a;
// 	return 0;
// }

// 4.

// #include<iostream>
// using namespace std;
// int main(){
// 	// int x =91;
// 	// x = x>>2;
// 	// // 22
// 	// cout<<x;

// 	// int k=12, n=30;
// 	// k= (k>5 && n=4 ? 100:200);
// 	// // error
// 	// cout<<k;

	
// 	return 0;
// }

// #include<iostream>
// #include<bits./stdc++.h>
// using namespace std;
// int fun(int a,int b){
// 	if((b^a) > (a-b) && (b^a) > (7-b)){
// 		a = b+3;
// 		b=(a+1)+b;
// 		a=b+2;
// 		return a-fun(b,b);
// 	}
// 	a=a+2;
// 	return a-b;
// }
// int main(){
// 	cout<<fun(9,5);
// 	return 0;
// }

// #include<iostream>
// using namespace std;
// int main(){
// 	int i=0;
// 	int sum =0;
// 	while(i<5){
// 		sum = i*i;
// 		// cout<<sum;
// 		i++;
// 	}
// 	cout<<sum;
// 	return 0;
// }

// #include<iostream>
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
// 	string s;
// 	int a=0;
// 	int b=0;
// 	getline(cin,s);
// 	for(int i=0;i<s.length();i++){
// 		if(s[i]=='#'){
// 			a++;
// 		}
// 		else{
// 			b++;
// 		}
// 	}
// 	cout<<a-b;
// 	return 0;
// }

// #include<iostream>
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
// 	int x=4,y,z;
// 	y=--x;
// 	z=x--;
// 	cout<<x<<y<<z;
	// char c ,a,b;
	// c = 'f';
	// a = 's';
	// b = 'x';
	// int sum = a+b+c;
	// cout<<sum;
// 	return 0;
// }

// #include<iostream>
// using namespace std;
// int main(){
// 	int i = 1;
// 	cout<<i++;
// 	cout<<i;
// 	cout<<++i;
// 	return 0;
// }

#include<iostream>
#include<bits/stdc++.h>
#include<map>
using namespace std;
int main(){
	string s = "welcometocampusmonk";
	map<char,int>mp;
	for(int i=0;i<s.length();i++){
		mp[s[i]]++;
	}
	for(auto x: mp){
		cout<<x.first<<" "<<x.second<<endl;
	}
	return 0;
}