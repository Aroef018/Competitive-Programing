#include <bits/stdc++.h>
using namespace std;

int a[1000000];
int b[1000000];

int main(){
	int t;
	cin>>t;
	int x,y;
	for(int i=1;i<=t;i++){
		cin>>x>>y;
		for(int j=1;j<=x;j++){
			cin>>a[j];
		}
		for(int k=1;k<=y;k++){
			cin>>b[k];
		}
		int jumlah=0;
		sort(a+1, a+1+x);
		sort(b+1, b+1+y);
		
		for(int m=1;m<=x;m++){
			int cek=lower_bound(b+1, b+1+y, a[m])-b-1;
			jumlah=jumlah+cek;
		}
		
		cout<<jumlah<<endl;
	}
}
