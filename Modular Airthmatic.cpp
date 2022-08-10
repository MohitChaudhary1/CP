#include <bits/stdc++.h>
using namespace std;
// 0<N<100
// Given number N. Print its Factorial
// where M=47

int main() {
	// Your code goes here;
    int n;
	cin>>n;
	int M=47;
	long long fact=1;
	for(int i=2;i<n;i++){
		fact=(fact*i)%M;
	}
	cout<<fact;

	return 0;
}