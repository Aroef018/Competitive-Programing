#include <bits/stdc++.h>>
using namespace std;

int cek[1000000];
int input[1000000];

	int jumlah=0;

int main(){
	int n;
	cin>>n;
	for(int i=1;i<=1000;i++){
		cek[i]=0;
	}
	for(int i=1;i<=n;i++){
		cin>>input[i];
		cek[input[i]]=input[i];
		if(cek[abs(input[i])]<1&&input[i]<0){
			jumlah++;
		}
		//cout<<"jumlah = "<<jumlah<<" ";
	}
	//cout<<endl;
	cout<<jumlah;
}