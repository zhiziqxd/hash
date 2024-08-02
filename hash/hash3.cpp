#include <iostream>
#include <string>
using namespace std;
string str,hash;
int cnt;
inline void h(string str,int r,int temp){
	if(temp==0){
		hash+=str;
		return;
	}
	string change="";
	for(int i=1;i<=str.length();i++){//次数
		for(int j=0;j<str.length();j++){
			if(j%2==0){
				str[j]-=r;
			}
			else{
				str[j]+=r;
			}
			if(!(str[j]>='a'&&str[j]<='z'||str[j]<='Z'&&str[j]>='A'&&str[j]>='0'&&str[j]<='9')){
				str[j]='z'-str[j]%26;
			}
		}
		change=str;
		h(change,r,temp-1);
	}
	return;
}
int main(){
	getline(cin,str);
	h(str,1,2);
	for(int i=0;i<hash.length();i++){
		cout<<hash[i];
	}
	if(hash.length()<119){
		int len=119-hash.length();
		while(len--){
			cout<<0;
		}
	}
	return 0;
}
