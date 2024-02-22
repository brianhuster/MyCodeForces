#include <iostream>
#include <string.h>
#include<stack>
using namespace std;
int main() {
    string s;
    cin>>s;
    int l=s.length();
    if (l%2==1){
        cout<<"No"; return 0;
    }
    else{
        stack<char> x;
        x.push(s[l-1]);
        for (int i=l-2;i>=0;i--){
            if (x.empty() || x.top()!=s[i]) x.push(s[i]);
            else x.pop();
        }
        if (x.empty()) cout<<"Yes";
        else cout<<"No";
    }
    return 0;
}
