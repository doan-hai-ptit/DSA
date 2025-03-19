#include <iostream>

using namespace std;

int n, k, final = 0;
int a[100] = {0};

void khoitao(){
	for(int i = 1; i <= n; i++){
		a[i] = i;
	}
}

void sinh(){
	int i = n-1;
	while(i >=1 && a[i] > a[i+1]){
		i--;
	}
	if(i==0)final = 1;
	else{
		int j = n;
		while(a[i] > a[j]) j--;
		swap(a[i], a[j]);
		int l = i+ 1, r = n;
		while(l < r){
//			cout<<"ss";
			swap(a[l], a[r]);
			l++, r--;
		}
	}
}

int main(){
	cin >> n;
	khoitao();
	while(!final){
		for(int i = 1; i <= n; i++){
			cout << a[i];
		}
		cout<<"\n";
		sinh();
	}
	return 0;
}