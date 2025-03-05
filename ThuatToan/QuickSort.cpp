#include <iostream>

using namespace std;

void QuickSort(int a[], int l, int r){
	int i = l;
	int j = r;
	int p = a[(i + j)/2];
	while(i < j){
		while(a[i] < p) i++;
		while (a[j] > p) j--;
		if(i <= j){
			swap(a[i], a[j]);
			i++;
			j--;
		}
	}
	if(i < r) QuickSort(a, i, r);
	if(l < j) QuickSort(a, l, j);
}

int main(){
	int n; cin >> n;
	int a[100];
	for(int i = 0; i < n; i++){
		cin >> a[i];
	}
	QuickSort(a, 0, n-1);
	for(int i = 0; i < n; i++) cout << a[i] <<" ";
	return 0;
}