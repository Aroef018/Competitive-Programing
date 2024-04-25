#include <bits/stdc++.h>
using namespace std;

string ganti1(string s){
	if(s[0]=='A'&&s[1]=='A'){
		return "CB";
	}else if(s[0]=='A'&&s[1]=='B'){
		return "AA";
	}else if(s[0]=='A'&&s[1]=='C'){
		return "DD";
	}else if(s[0]=='A'&&s[1]=='D'){
		return "DB";
	}else if(s[0]=='B'&&s[1]=='A'){
		return "CC";
	}else if(s[0]=='B'&&s[1]=='B'){
		return "DC";
	}else if(s[0]=='B'&&s[1]=='C'){
		return "CA";
	}else if(s[0]=='B'&&s[1]=='D'){
		return "DA";
	}else if(s[0]=='C'&&s[1]=='A'){
		return "BA";
	}else if(s[0]=='C'&&s[1]=='B'){
		return "AD";
	}else if(s[0]=='C'&&s[1]=='C'){
		return "AC";
	}else if(s[0]=='C'&&s[1]=='D'){
		return "BC";
	}else if(s[0]=='D'&&s[1]=='A'){
		return "BB";
	}else if(s[0]=='D'&&s[1]=='B'){
		return "CD";
	}else if(s[0]=='D'&&s[1]=='C'){
		return "AB";
	}else if(s[0]=='D'&&s[1]=='D'){
		return "BD";
	}
}

string ganti2(string s){
	if(s[0]=='A'&&s[1]=='A'){
		return "DA";
	}else if(s[0]=='A'&&s[1]=='B'){
		return "DD";
	}else if(s[0]=='A'&&s[1]=='C'){
		return "AC";
	}else if(s[0]=='A'&&s[1]=='D'){
		return "BC";
	}else if(s[0]=='B'&&s[1]=='A'){
		return "DB";
	}else if(s[0]=='B'&&s[1]=='B'){
		return "AB";
	}else if(s[0]=='B'&&s[1]=='C'){
		return "CC";
	}else if(s[0]=='B'&&s[1]=='D'){
		return "CD";
	}else if(s[0]=='C'&&s[1]=='A'){
		return "DC";
	}else if(s[0]=='C'&&s[1]=='B'){
		return "BA";
	}else if(s[0]=='C'&&s[1]=='C'){
		return "AD";
	}else if(s[0]=='C'&&s[1]=='D'){
		return "AA";
	}else if(s[0]=='D'&&s[1]=='A'){
		return "CA";
	}else if(s[0]=='D'&&s[1]=='B'){
		return "BB";
	}else if(s[0]=='D'&&s[1]=='C'){
		return "CB";
	}else if(s[0]=='D'&&s[1]=='D'){
		return "BD";
	}
}

int main(){
	string s;
	cin>>s;
	for(int i=0;i<s.size();i=i+2){
		string cari=s.substr(i, 2);
		cari=ganti2(cari);
		cari=ganti1(cari);
		s.replace(i, 2, cari);
	}
	cout<<s;
	//ganti(s);
}
