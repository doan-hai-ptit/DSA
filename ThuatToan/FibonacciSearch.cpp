#include <iostream>
#include <algorithm>
using namespace std;

int FibonacciSearch(int a[], int n, int k){
	
}

int main(){
	int n, k, a[100]; cin >> n >> k;
	for(int i = 0; i < n; i++) cin >> a[i];
	sort(a, a+n);
	cout<<FibonacciSearch(a, 0, n, k);
}