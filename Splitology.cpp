#include <bits/stdc++.h>
using namespace std;

bool cek(string s){
	int nilai=0;
	for(int i=0;i<s.size()-1;i++){
		if(s[i]!=s[s.size()-1-i]){
			nilai=1;
			return 0;
			break;
		}
	}
	return 1;
}

int main(){
	string s;
	cin>>s;
	//string z="jancok";
	//cout<<cek(z);
	string a;
	string b;
	
	for(int i=0;i<s.size()-1;i++){
		a=s.substr(0, i+1);
		b=s.substr(i+1,s.size()-(i+1));
		if(cek(a)==1){
			if(cek(b)==1){
				cout<<a<<" "<<b;
				return 0;
			}
		}
	}
	cout<<"NO";
}
