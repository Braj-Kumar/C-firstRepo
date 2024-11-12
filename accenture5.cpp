// #include<iostream>
// #include<bits./stdc++.h>
// using namespace std;
// int main(){
// 	string s1;
// 	string s2;
// 	cin>>s1>>s2;
// 	int i=0;
// 	int j=0;
// 	while(i<s1.length() && j<s2.length()){
// 		char c1 = tolower(s1[i]);
// 		char c2 = tolower(s2[j]);
// 		if(c1>c2){
// 			cout<<1;
// 		}
// 		else if(c2>c1){
// 			cout<<-1;
// 		}
// 		i++;
// 		j++;
// 	}
// 	return 0;
// }

// #include<bits/stdc++.h>
// using namespace std;
// int ruturnCount(int arr[],int n){
// 	int count=0;
// 	if(n<=1){
// 		return 0;
// 	}
// 	for(int i=0;i<n-1;i++){
// 		if(arr[i] > arr[i+1]){
// 			count++;
// 		}
// 	}
// 	return count;
// }
// int main(){
// 	int arr[6] = {2,3,1,4,5,2};
// 	cout<<ruturnCount(arr,6);
// 	return 0;
// }

// #include<iostream>
// using namespace std;
// int countStairs(int arr[],int n){
// 	int count = 0;
// 	for(int i=0;i<n;i++){
// 		if(arr[i] % 3 == 0){
// 			count++;
// 		}
// 	}
// 	return count;
// }
// int main(){
// 	int arr[4] = {12,16,21,20};
// 	cout<<countStairs(arr,4);
// 	return 0;
// }

#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int countA(string s, int k){
	int maxi = INT_MAX;
	int count = 0;
	int i=0;
	for(i=0;i<k;i++){
		if(s[i]=='a'){
			count++;
		}

	}
	maxi = count;
		int j =k;
		while(j<s.length()-1){
			if(s[i++] == 'a'){
				count--;
			}
			if(s[++j] == 'a'){
				count++;
			}
			maxi = max(maxi,count);
		}
	
	return maxi;
}
int main(){
	string s = "acdabaaca";
	int k = 3;
	cout<<countA(s,k);
	return 0;
}