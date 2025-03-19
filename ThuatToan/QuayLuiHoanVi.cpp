#include <iostream>

using namespace std;

int a[100] = {0}, b[100] = {0}, n;

void print(){
	for(int i = 1; i <= n; i++){
		cout << a[i];
	}
	cout<<"\n";
}

void Try(int i){
	for(int j = 1; j <= n; j++){
		if(b[j]==0){
			a[i] = j;
			b[j] = 1;
			if(i==n)print();
			else Try(i+1);
			b[j] = 0;
		}
	}
}

int main(){
	cin >> n;
	Try(1);
	return 0;
}