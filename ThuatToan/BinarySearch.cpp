#include <iostream>
#include <algorithm>
using namespace std;

string BinarySearch(int a[], int n, int k){
	sort(a, a+n);
	int l = 0, h = n-1;
	int mid = (l+h)/2;
	while(l < h && k != a[mid]){
		if(k < mid) h = mid - 1;
		else l = mid+1;
		mid = (l+h)/2;
	}
	if(k == a[mid]) return "YES";
	else return "NO";
}

int main(){
	int n, k, a[100]; cin >> n >> k;
	for(int i = 0; i < n; i++) cin >> a[i];
	cout<<BinarySearch(a, n, k);
}