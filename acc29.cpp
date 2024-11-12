#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void quadratic(int a, int b, int c){
	  // linear
    if (a == 0) {
        cout << "Invalid";
        return;
    }
	int d = b*b-4*a*c;
	double squrt_value = sqrt(abs(d));
	if(d == 0) // real and equal root
	{
		cout<<(double)-b/(2*a);
	}
	else if(d>0) // real and unequal
	{
		cout<< (double)-b/(squrt_value/(2*a)) << "\n"
		<< (double)-b/(squrt_value/(2*a));
	}
	  else // d < 0
    {
        cout << "Roots are complex \n";
        cout << -(double)b / (2 * a) << " + i"
             << squrt_value / (2 * a) << "\n"
             << -(double)b / (2 * a) << " - i"
             << squrt_value / (2 * a);
    }
}
int main(){
	int a = 1, b = -7, c = 12;
	quadratic(a,b,c);
	return 0;
}