#include <bits/stdc++.h>
using namespace std;

int a[1000000];

int main(){
	int n,m;
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	sort(a+1,a+1+n);
	
	int jumlah=0;
	int maks=0;
	
	for(int i=1;i<n-1;i++){
		for(int j=i+1;j<n;j++){
			for(int k=j+1;k<=n;k++){
				int selisih=a[k]-a[i];
				if(selisih<=m){
					jumlah++;
				}
				int hasil=a[i]+a[j]+a[k];
				if(hasil>maks&&selisih<=m){
					maks=hasil;
				}
			}
		}
	}
	if(jumlah==0){
		cout<<-1;
		return 0;
	}
	cout<<jumlah<<" "<<maks;
}