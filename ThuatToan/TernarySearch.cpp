#include <iostream>
#include <algorithm>
using namespace std;

int TernarySearch(int a[], int start, int end, int k){
	if(start>end) return -1;
	int mid1 = start +(end-start)/3;
	int mid2 = start +2*(end-start)/3;
	if(a[mid1] == k) return mid1;
	if(a[mid2] == k) return mid2;
	if(k < a[mid1]) return TernarySearch(a, start, mid1-1, k);
	if(k > a[mid2]) return TernarySearch(a, start, mid2+1, k);
	return TernarySearch(a, mid1, mid2, k);
}

int main(){
	int n, k, a[100]; cin >> n >> k;
	for(int i = 0; i < n; i++) cin >> a[i];
	sort(a, a+n);
	cout<<TernarySearch(a, 0, n, k);
}