#include <iostream>
#include <string>
using namespace std;
string str;
long long int h(string str,int n){
    long long int ans=0;
    long long int s[4]={0,1,1,1};//清零
    for(int i=0;i<str.length();i++){
        if(str[i]>='a'&&str[i]<='z'){
            ans+=str[i]*s[1];
            s[1]*=n;
        }
        else if(str[i]>='A'&&str[i]<='Z'){
            ans+=str[i]*s[2];
            s[2]*=n;
        }
        else if(str[i]>='0'&&str[i]<='9'){
            ans+=str[i]*s[3];
            s[3]*=n;
        }
        else{
            ans+=str[i];
        }
    }
    return ans;
}
int main(){
    getline(cin,str);
    cout<<h(str，26);
    return 0;
}
