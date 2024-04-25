#include <bits/stdc++.h>
using namespace std;

int a[1000000];
int b[1000000];

int main(){
	int n;
	cin>>n;
	long long jumlah=0;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		jumlah=jumlah+(a[i]*n);
	}
	for(int i=1;i<=n;i++){
		cin>>b[i];
		jumlah=jumlah+(b[i]*n);
	}
	cout<<jumlah;
}