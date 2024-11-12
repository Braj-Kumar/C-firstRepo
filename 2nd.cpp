// #include<iostream>
// using namespace std;
// int main(){
// 	int num = 81;
// 	int start = 0;
// 	int end = num;
// 	int n = num;
// 	while(n!=0){
// 		int mid = start+end/2;
// 		if(mid==num){
// 			cout<<mid;
// 		}
// 		// else if(mid*mid == )
// 		 while(n!=0)
//         {
//              mid=start+(end-start)/2;
//             if((mid*mid)==num)
//             {
//                 return mid;
//             } else if (mid*mid > num) {
//                 end=mid;
//             }
//             else {
//                 start=mid;
//             }
//             n--;
//         }
//         return mid;
//     }
// 	}
// 	return 0;
// }
// public static int getDiff(int m,int n)
//     {
//         int evenSum=0;
//         int oddSum=0;
//         for(int i=m;i<=n;i++)
//         {
//             if(i%2==0)
//             {
//                 evenSum+=getSquareRoot(i);
//             }
//             else
//             {
//                 oddSum+=getSquareRoot(i);
//             }
//         }
//         return evenSum-oddSum;
//     }
// public static int getSquareRoot(int num)
//     {
//         int n=num;
//         int start=1;
//         int end=num;
//         int mid=-1;
//         while(n!=0)
//         {
//              mid=start+(end-start)/2;
//             if((mid*mid)==num)
//             {
//                 return mid;
//             } else if (mid*mid > num) {
//                 end=mid;
//             }
//             else {
//                 start=mid;
//             }
//             n--;
//         }
      
// #include<iostream>
// #include<bits./stdc++.h>
// using namespace std;
// int main(){
// 	int a=6,b=84;
// 	int c;
// 	while(b>0){
// 		b = b/2;
// 		a = a+6;
// 		c = a+b;
// 		while(c>40){
// 			if(c%2 == 0){
// 				cout<<"a= "<<a<<endl;
// 			}
// 			else{
// 				cout<<"b = "<<b<<endl;
// 			}
// 			c=c/10;
// 		}
// 	}
// 	cout<<"c= "<<c;
// 	return 0;
// }

#include<iostream>
#include<bits/stdc++.h>
using namespace std;
string reverseStr(string s,int k){
	for(int i=0;i<s.length(); i=i+(2*k)){
		int start=i;
	// int j=s.length()-1;
	int j = i+k-1;
	if(j >= s.length()){
		j = s.size()-1;
	}
	while(start<=j){
		swap(s[start],s[j]);
		start++;
		j--;
	}
	}
	
	return s;
}
int main(){
	string s;
	cin>>s;
	int k;
	cin>>k;
	cout<<reverseStr(s,k);
	return 0;
}