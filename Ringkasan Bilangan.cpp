#include <bits/stdc++.h>
using namespace std;

int a[1000000];
int b[1000000];

int main(){
	int n;
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	sort(a+1, a+1+n);
	/*for(int i=1;i<=n;i++){
		cout<<a[i]<<" ";
	}
	cout<<endl;*/
	int beda=1;
	b[1]=a[1];
	for(int i=2;i<=n;i++){
		if(a[i]!=a[i-1]){
			beda++;
			b[beda]=a[i];
		}
	}
	/*for(int i=1;i<=beda;i++){
		cout<<b[i]<<" ";
	}
	cout<<endl;*/
	//bool cek=0;
	bool bersambung=0;
	//cout<<"beda= "<<beda<<endl;
	for(int i=1;i<=beda;i++){
		if(beda==1){
			cout<<b[i];
			return 0;
		}
		if(i==1&&b[i+1]-b[i]==1){
			cout<<b[i];
			bersambung=1;
			continue;
		}else if(i==1&&b[i+1]-b[i]>1){
			cout<<b[i]<<",";
			bersambung=0;
			continue;
		}
		if(b[i+1]-b[i]==1&&bersambung==0){
			cout<<b[i];
			bersambung=1;
			continue;
		}
		if(b[i+1]-b[i]==1&&bersambung==1){
			bersambung=1;
			continue;
		}
		if(bersambung==1&&b[i+1]-b[i]>1&&i!=beda){
			cout<<"-"<<b[i]<<",";
			bersambung=0;
			continue;
		}else if(bersambung==1&&i==beda){
			cout<<"-"<<b[i];
			continue;
		}
		if(bersambung==0&&b[i+1]-b[i]>1&&i!=beda){
			cout<<b[i]<<",";
			continue;
		}else if(bersambung==0&&i==beda){
			cout<<b[i];
			continue;
		}
	}
}
