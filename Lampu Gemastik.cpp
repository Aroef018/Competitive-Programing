#include <bits/stdc++.h>

using namespace std;

int lampu[10000000];

int main(){
	int n;
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>lampu[i];
	}
	int jumlah=0;
	for(int i=1;i<n;i++){
		if(lampu[i]!=lampu[i+1]){
			jumlah++;
		}
	}
	if(lampu[n]==1){
		jumlah++;
	}
	cout<<jumlah;
}
