// #include<iostream>
// using namespace std;
// int main(){
// 	int x =10;
// 	int y = 2;
// 	int z =5; 
// 	if(x>y && x>z){
// 		cout<<x;
// 	}
// 	else if(y>x && y>z){
// 		cout<<y;
// 	}
// 	else{
// 		cout<<z;
// 	}
// }


// reverse an array in new array

// #include<iostream>
// using namespace std;
// int main(){
// 	int n;
// 	cin>>n;
// 	int arr[n];
// 	for(int i=0;i<n;i++){
// 		cin>>arr[i];
// 	}
// 	int rev[n];
// 	int j=0;
// 	for(int i=n-1;i>=0;i--){
// 		rev[j]=arr[i];
// 		j++;
// 	}
// 	for(int i=0;i<n;i++){
// 		cout<<rev[i];
// 	}
// 	return 0;
// }

// check palindrome

// #include<iostream>
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
// 	int n; cin>>n;
// 	int arr[n];
// 	int newarr[n];
// 	for(int i=0;i<n;i++){
// 		cin>>arr[i];
// 		newarr[i] = arr[i];
// 	}
// 	reverse(arr,arr+n);
// 	for(int i=0;i<n;i++){
// 		if(arr[i]==newarr[i]){
// 			cout<<"palindrome";
// 			return 0;
// 		}
// 	}
// 	cout<<"not palindrrome";
// 	return 0;
// }


// #include<iostream>
// using namespace std;
// void whoWins(int n, int score[]){
// 	int even =0;
// 	int odd=0;
// 	for(int i=0;i<n;i++){
// 		if(i%2==0){
// 			even = even + score[i];
// 		}
// 		else{
// 			odd = odd + score[i];
// 		}
// 	}
// 	if(odd>even){
// 		cout<<"ODD "<<odd-even;
// 	}
// 	else if(even > odd){
// 		cout<<"EVEN"<<even-odd;
// 	}
// 	else{
// 		cout<<"DRAW";
// 	}
// }
// int main(){
// 	int n; cin>>n;
// 	int arr[n];
// 	for(int i=0;i<n;i++){
// 		cin>>arr[i];
// 	}
// 	whoWins(n,arr);
// }

// #include<iostream>
// #include<bits./stdc++.h>
// using namespace std;
// int main(){
// 	int arr[6] = {11,29,21,3,5,9};
// 	sort(arr,arr+5);
// 	for(int i=0;i<6;i++){
// 		// if(arr[i]>arr[i+1]){
// 		// 	cout<<arr[i];
// 		// 	return 0;
// 		// }
// 		if(arr[i]<arr[i+1]){
// 			cout<<arr[i];
// 			return 0;
// 		}
// 	}
// 	return 0;
// }

// #include<iostream>
// #include<bits./stdc++.h>
// using namespace std;
// void seprateEvenOdd(int arr[],int size){
// 	for(int i=0;i<size;i++){
// 		if(arr[i]%2==0){
// 			cout<<arr[i]<<endl;
// 		}
// 	}
// 	for(int i=0;i<size;i++){
// 		if(arr[i]%2 !=0){
// 			cout<<arr[i]<<endl;
// 		}
// 	}
// }
// int main(){
// 	int arr[9]={8,29,293,2,1,3,45,95,10};
// 	seprateEvenOdd(arr,9);
// 	return 0;
// }

// #include<iostream>
// #include<bits./stdc++.h>
// using namespace std;
// int sockmarket(int n, int arr[]){
// 	int pair = 0;
// 	sort(arr,arr+n);
// 	int count =1;
// 	for(int i=0;i<n-1;i++){
// 		if(arr[i] == arr[i+1]){
// 			count++;
// 			pair += count/2;
// 			count = 1;
// 			i++;
// 		}
// 	}
// 	return pair;
// }
// int main(){
// 	int arr[7] = {1,2,3,1,2,1,2};
// 	cout<<sockmarket(7,arr);
// }

// print first k word in a string

// #include<iostream>
// using namespace std;
// int main(){
// 	string s;
// 	getline(cin,s);
// 	int k ;cin>>k;
// 	for(char ch : s){
// 		if(ch ==' '){
// 			k--;
// 		}
// 		if(k==0){
// 			break;
// 		}
// 		cout<<ch;
// 	}
// 	return 0;
// }

// #include<iostream>
// using namespace std;
// int main(){
// 	int n; cin>>n;
// 	int arr[n];
// 	for(int i=0;i<n;i++){
// 		cin>>arr[i];
// 	}
// 	int count =0;
// 	for(int i=0;i<n;i++){
// 		if(arr[i]==1){
// 			for(int j=i+1; j<n;j++){
// 				arr[i] = !arr[i];
// 			}
// 			count++;
// 			arr[i]=1;
// 		}
// 	}
// 		cout<<count;
// 	return 0;
// }


#include<iostream>
#include<algorithm>
#include<bits./stdc++.h>
using namespace std;
int main(){
	int n; cin>>n;
	int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	
	int r;
	int unit;
	cin>>r>>unit;
	int total = r*unit;
	int count =0;
	sort(arr,arr+n);
	for(int i=n-1;i>=0;i++){
		total = total - arr[i];
		count++;
		if(total <= 0){
			break;
		}
	}
	cout<<count;
	return 0;
}