#include <bits/stdc++.h>
#include <stack>
using namespace std;
#define SIZE 200005
typedef long long LL;

string s;
char st[SIZE];
int total = 0;
int main(){
    ios::sync_with_stdio(false);
    cin >> s;
    int len = s.length();
    for (int i=0;i<len;i++){
        if (total == 0) {
            total ++;
            st[total] = s[i];
            continue;
        }
        if (s[i] == st[total]){
            total --;
        }
        else {
            total ++;
            st[total] = s[i];
        }
    }
    for (int i=1;i<=total;i++){
        cout << st[i];
    }
    return 0;
}
