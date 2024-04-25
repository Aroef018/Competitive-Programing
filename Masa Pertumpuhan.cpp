#include <bits/stdc++.h>
using namespace std;


long long cairan[10000000];

int main(){
	long long n,m,k;
	//vector<int> cairan;
	cin>>n>>m>>k;
	/*for(int i=1;i<=n;i++){
		int nilai;
		cin>>nilai;
		cairan.push_back(nilai);
	}
	
	int jumlah=0;
	cairan.sort(cairan.begin(), cairan.end);
	int pohon=m;//tinggi pohon di hari ke 0;
	
	for()*/
	
	for(long long i=1;i<=n;i++){
		cin>>cairan[i];
	}
	
	sort(cairan+1, cairan+1+n);
	
	long long pohon=m;
	long long jumlah=0;
	for(long long i=1;i<=n;i++){
		long long pohon_sementara=pohon+k;
		
		long long posisi=upper_bound(cairan+1, cairan+1+n, pohon_sementara)-cairan;
		if(posisi<=n){
			jumlah++;
			pohon=cairan[posisi];
		}else{
			pohon=pohon_sementara;
		}
	}
	
	/*int posisi=upper_bound(cairan+1, cairan+1+n, 18)-cairan;
	
	for(int i=1;i<=n;i++){
		cout<<cairan[i]<<" ";
	}
	cout<<endl;
	cout<<posisi<<endl;*/
	
	cout<<jumlah;
	
	
}