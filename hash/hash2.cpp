#include <iostream>
#include <string>
using namespace std;
string str;
int cnt;
int check(int i){
	if(i==0){
		return 'a';
	}
	else{
		return str[i-1]+1;
	}
}
int zh(int b,int a){
	if(b==0){
		return 1;
	}
	else{
		int ans=1;
		for(int i=a;i>a-b;i--){
			ans*=i;
		}
		for(int i=b;i>1;i--){
			ans/=i;
		}
		return ans;
	}
}
int main(){
	cin>>str;
	for(int i=1;i<str.length();i++){
		if(str[i]<=str[i-1]){
			cout<<0;
			return 0;
		}
	}
	for(int i=1;i<str.length();i++){
		cnt+=zh(i,26);
	}
	for(int i=0;i<str.length();i++){
		for(char j=check(i);j<str[i];j++){
			cnt+=zh(str.length()-i-1,'z'-j);
		}
	}
	cnt++;
	cout<<cnt;
	return 0;
}
