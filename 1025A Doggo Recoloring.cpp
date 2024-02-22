#include <iostream>
#include <string.h>
using namespace std;
int main() {
    int n;
    string s, x="";
    cin>>n>>s;
    if (s.length()==1){
        cout<<"Yes"; 
        return 0;
    }
    for (int i=0; i<s.length(); i++){
        if (x.find(s[i])==-1){
            x+=s[i];
        }
        else {
            cout<<"Yes"; return 0;
        }
    }
    cout<<"No";
    return 0;
}
