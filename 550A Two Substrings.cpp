#include <iostream>
#include <string.h>
using namespace std;
int main() {
    string s; bool b=false;
    cin>>s;
    if (s.find("AB")!=-1 && s.find("BA",s.find("AB")+2)!=-1) b=true;
    if (s.find("BA")!=-1 && s.find("AB",s.find("BA")+2)!=-1) b=true;
    if (b==true) cout<<"YES";
    else cout<<"NO";
    return 0;
}
