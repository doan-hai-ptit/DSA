#include <iostream>
#include <algorithm>
using namespace std;

int InterpolationSearch(int a[], int n, int k){
	sort(a, a+n);
	int l = 0, h = n-1, mid;
	while(a[l] <= k && a[h] >= k){
		if(a[h] - a[l] == 0) return (l+h)/2;
		mid = l +((k-a[l]) *(h-l))/(a[h]-a[l]);
		if(a[mid] < k) l = mid+1;
		else if(a[mid] > k) h = mid - 1;
		else return mid;
	}
	if(a[l] == k) return l;
	return -1;
}

int main(){
	int n, k, a[100]; cin >> n >> k;
	for(int i = 0; i < n; i++) cin >> a[i];
	cout<<InterpolationSearch(a, n, k);
}