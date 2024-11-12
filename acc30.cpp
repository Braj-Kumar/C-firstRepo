#include<bits/stdc++.h>
using namespace std;
int main(){

	// int n;
	// cin>>n;
	// int arr[n];
	// for(int i=0;i<n;i++){
	// 	cin>>arr[i];
	// }
	// sort(arr,arr+n);
	// for(int i=0;i<n;i++){
	// 	cout<<arr[i];
	// }
	// cout<<-100*-98;
	// int a = 50,b=3,c=3,d,e=0;
	// while(c>0){
	// 	d= a%3;
	// 	e = e+d+a;
	// 	c--;
	// }
	// cout<<e;
	int p,q,r;
	p=3;
	q=1;
	r=2;
	if(p+(2&2&2) && (3&3&3) && r+(2^2^2)){
		p=p-2;
		q=p;
	}
	else{
		p=r;
		q=p*p;

	}
	cout<<p+q+r;
	return 0;
}