// #include<iostream>
// #include<bits./stdc++.h>
// using namespace std;
// int main(){
// 	int arr1[5]={1,2,3,4,5};
// 	int arr2[5]={1,2,3,4,5};
// 	for(int i=0;i<5;i++){
// 		if(arr1[i] != arr2[i]){
// 			cout<<"false";
// 		}
// 	}
// 	cout<<"true";
// 	return 0;
// }


// #include<iostream>
// #include<bits./stdc++.h>
// using namespace std;
// int main(){
// 	int findMissing(int arr[] , int n){
//     int x=0;
//     for(int i=0;i<n;i++){
//         x=x^i;
//     }
//     for(int i=0;i<n;i++){
//         x=x^arr[i];
//     }
//     return x;
// }

// int main(){
//     int arr[5] = {1,4,5,6,8};
//     int cnt =0;

//     for(int i=1; i<5; i++){
//         if(arr[i] != arr[i-1] +1){
//             cout<<arr[i-1]+1<<" ";
//             cnt +=1;
//         }
//     }

//     if(cnt == 0){
//         cout<<arr[4] + 1<<" ";
//     }
// 	return 0;
// }


// void ff(int arr[], int low, int high){
//         //.HashSet<Integer> num = new HashSet<>();
//         set<int> num;
//         bool iHit = true;
//         for (int i = 0; i<5;i++){
//             num.insert(arr[i]);
//         }
//         for (int i = low;i<=high;i++){
//             if (num.find(i) == num.end()){
//                 cout << i;
//                 iHit = false;
//             }
//         }
//         if (iHit){
//             cout <<high+1;
//         }
// }

// #include<iostream>
// #include<bits./stdc++.h>
// using namespace std;
// bool isPal(string s){
// 	int start =0;
// 	int end = s.length()-1;
// 	while(start < end){
// 		if(s[start] != s[end]){
// 			return false;
// 		}
// 		start++;
// 		end--;
// 	}
// 	return true;
// }
// void longestFun(string arr[], int n){
// 	string res = "";
// 	int maxLen =0;
// 	for(int i=0;i<n;i++){
// 		if(isPal(arr[i])){
// 			// check the length of palindromic element and upadte it
// 			if(arr[i].length()>maxLen){
// 				res = arr[i];  // update result with longest palindrome
// 				maxLen = arr[i].length();   // update the maximum length
// 			}
// 		}
// 	}
// 	cout<<res<<"  "<<res.length();
// }
// int main(){
// 	string arr[5] = {"naman","racecar","krrk","kgk","hdgdh"};
// 	longestFun(arr,5);
// 	return 0;
// }


// majority element

// #include<iostream>
// #include<bits/stdc++.h>
// using namespace std;
// void majority(int arr[],int brr[], int n){
// 	vector<pair<int, char>> v;
// 	for(int i=0;i<n;i++){
// 		v.push_back({arr[i],brr[i]});
// 	}
// 	sort(v.begin(),v.end());
// 	for(int i=0;i<n;i++){
// 		cout<<v[i].second;
// 	}
// }
// int main(){
// 	int arr[3]={2,1,3};
// 	int brr[3]={'B','f','K'};
// 	majority(arr,brr,3);
// 	return 0;
// }


#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
	string s;
	getline(cin,s);
	int key;
	cin>>key;

	if(key==0){
		cout<<"invalid String";
	}
	else if(key >=1 && key<=25){
		for(int i=0;i<s.length();i++){
			if(s[i] >= '0' && s[i] <= '9'){
				if(s[i] + key <= '9'){
					s[i]= s[i]+key;
				}
				else{
					int left = (s[i] + key -'9');
					s[i]= '0'+left-1;
				}
			}
			
			// for lower case alphabet
			if(s[i] >= 'a' && s[i]<='z'){
				if(s[i] + key<='z'){
					s[i]= s[i]+key;
				}
				else{
					int left = (s[i]+key-'z');
					s[i] = 'a'+left-1;
				}
			}
			// for upper case 
			if(s[i] >= 'A' && s[i] <= 'Z'){
				if(s[i]+key <= 'Z'){
					s[i] = s[i] + key;
				}
				else{
					int left = (s[i] + key-'Z');
					s[i] = 'A'+left-1;
				}
			}
		}
		cout<<s;
	}

	return 0;
}