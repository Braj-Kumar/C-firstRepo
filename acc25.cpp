// Q1. find the total number of permutation
// #include<iostream>
// #include<bits/stdc++.h>
// using namespace std;
// bool isVowel(char ch){
// 	if(ch =='a' || ch =='e' || ch =='i' || ch=='o' || ch=='u' || ch == 'A'
// 	|| ch=='E' || ch=='I' || ch=='O' || ch=='U' ){
// 		return true;
// 	}
// 	return false;
// }
// int factorial(int n){
// 	// base case
// 	if(n==0 || n==1){
// 		return 1;
// 	}
// 	return n*factorial(n-1);
// }
// int main(){
// 	string s;
// 	getline(cin, s);
// 	int count =0;
// 	for(int i=0;i<s.length();i++){
// 		if(!isVowel(s[i])){
// 			count++;
// 		}
// 	}
// 	cout<<factorial(count);
// 	return 0;
// }


//  Q2. sum of even index after revrsing the array

// #include<iostream>
// #include<bits/stdc++.h>
// using namespace std;
// int sumRevidx(int arr[],int n){
// 	int sum=0;
// 	for(int i=0;i<n;i++){
// 		int rdx = n-i-1;
// 		if(rdx %2 == 0){
// 			sum =sum+arr[i];
// 		}
// 	}
// 	return sum;
// }
// int main(){
// 	int n;
// 	cin>>n;
// 	int arr[n];
// 	for(int i=0;i<n;i++){
// 		cin>>arr[i];
// 	}
// 	cout<<sumRevidx(arr,n);
// 	return 0;
// }

// Q3. return the longest size of word

// #include<iostream>
// #include<bits/stdc++.h>
// using namespace std;
// int lengthword(string s){
// 	int maxlength =0;
// 	int currentlength =0;
// 	for(int i=0;i<s.length();i++){
// 		if(s[i]==' '){
// 			if(currentlength > maxlength){
// 				maxlength = currentlength;
// 			}
// 			currentlength = 0;
// 		}
// 		else{
// 			currentlength++;
// 		}
// 	}
// 	// for last word in string
// 	if(currentlength > maxlength){
// 		maxlength = currentlength;
// 	}
// 	return maxlength;
// }
// int main(){
// 	string s;
// 	getline(cin,s);
// 	cout<<lengthword(s);
// 	return 0;
// }

// 

#include<iostream>
#include<bits/stdc++.h>
using namespace std;
string longWord(string s){
	string currenWord="";
	string largestWord="";
	int largest =0;

	for(int i=0;i<s.length();i++){
		if(s[i] == ' '){
			if(largest < currenWord.length()){
				largest = currenWord.length();
				largestWord = currenWord; 
			}
			currenWord ="";
		}
		else{
			currenWord += s[i];
		}
	}
	// for last word
			if(largest < currenWord.length()){
				largest = currenWord.length();
				largestWord = currenWord; 
			}
	return largestWord + to_string(largest);
}
int main(){
	string s;
	getline(cin,s);
	cout<<longWord(s);
}


// #include <iostream>
// #include <sstream>
// #include <map>

// using namespace std;

// int main() {
//     string input = "apple banana orange grape";
    
//     // Split the string into words
//     stringstream ss(input);
//     string word;
    
//     // Create a map to store the words and their lengths
//     map<string, int> wordMap;
    
//     // Variable to keep track of the longest word length
//     int longestLength = 0;
    
//     // Loop to process each word
//     while (ss >> word) {
//         // Add the word to the map with its length
//         wordMap[word] = word.length();
        
//         // Update the longestLength if the current word is longer
//         if (word.length() > longestLength) {
//             longestLength = word.length();
//         }
//     }
    
//     // Output the map
//     cout << "Word Map: " << endl;
//     for (const auto& entry : wordMap) {
//         cout << entry.first << " : " << entry.second << endl;
//     }
    
//     // Output the length of the longest word
//     cout << "Length of Longest Word: " << longestLength << endl;
    
//     return 0;
// }
