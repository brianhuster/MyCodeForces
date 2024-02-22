#include <bits/stdc++.h>
using namespace std;
const int N = 1e6 + 10;
 
string s;
int t[N];
 
int main() {
    cin >> s;
    int maxlen = 0, count = 1;
    for (int i = 1; i < (int)s.size(); i ++ ) {
        t[i] = 0;
        if (s[i] == ')' && s[i - t[i - 1] - 1] == '(') {
            t[i] = t[i - 1] + 2;
            if (i - t[i - 1] - 2 > 0)
                t[i] += t[i - t[i - 1] - 2];
            if (t[i] > maxlen) {
                maxlen = t[i];
                count = 1;
            }
            else if (t[i] == maxlen) count ++ ;
        }
    }   
    cout<<maxlen<<' '<<count;
}
