#include <bits/stdc++.h>

using namespace std;
bool includes(string s, int len, char c){
    if (len==0) return false;
    for (int i=0; i<len; i++){
        if (s[i]==c){
            return true;
        }
    }
    return false;
}
int main()
{
    string s, x;
    cin>>s;
    int slen=s.length(), xlen=0;
    for (int i=0; i<slen; i++){
        //cout<<includes(x, xlen, s[i])<<endl;
        if (!includes(x, xlen, s[i])){
            x.push_back(s[i]);
            xlen++;
        }
    }
    //cout<<xlen;
    if (xlen%2==0) cout<<"CHAT WITH HER!";
    else cout<<"IGNORE HIM!";
}
