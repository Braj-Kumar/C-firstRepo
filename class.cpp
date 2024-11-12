// class Solutio {
// public:
//     string longestCommonPrefix(vector<string>& strs) {
//        string ans="";
//        sort(strs.begin(),strs.end());
//        string s1=strs[0],s2=strs[strs.size()-1];
//        int i=0;
//         while(i<s1.length()){
//             if(s1[i]==s2[i]){ans+=s1[i];}
//             else{break;}
//             i++;
//         }

//       return ans;

//     }
// };


/*
		Bubble sort

	// method 1


#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
	int n=4;
	int arr[4] = {4,3,2,1};
	for(int i=0;i<n;i++){
		for(int j=0;j<n-i-1;j++){
			if(arr[j]>arr[j+1]){
				swap(arr[j],arr[j+1]);
			}
		}
	}
	for(int i=0;i<n;i++){
		cout<<arr[i];
	}
	return 0;
}


// method 2
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
		int n=4;
	int arr[4] = {4,3,2,1};
	
	for(int i=n-1;i>=0;i--){
		for(int j=0;j<i;j++){
			if(arr[j]>arr[j+1]){
				swap(arr[j],arr[j+1]);
			}
		}
	}
	for(int i =0;i<n;i++){
		cout<<arr[i];
	}

	return 0;
}
*/


