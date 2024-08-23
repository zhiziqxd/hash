#include <iostream>
#include <string>
#include <cmath>
using namespace std;
string str;
string h(string str){
	string res="";
	for(int j=1;j<=str.length();j++){
		for(int i=0;i<str.length();i+=4){
		  res+='a'+(abs((str[i]>>1)%26-j));//防止负数
		  if(i+1<str.length()&&str[i+1]>='0'&&str[i+1]<='9'){//第一个防止越界
			  res+='0'+(abs((str[i]<<2)%10-j));
		  }
		  if(i+3<str.length()&&str[i+3]>='A'&&str[i+3]<='Z'){
			  res+='A'+(abs(str[i]^1-j)%26);
		  }
		  str[i]+=1;
	  }
	}
	return res;
}
int main(){
	getline(cin,str);
	cout<<h(str);
	return 0;
}