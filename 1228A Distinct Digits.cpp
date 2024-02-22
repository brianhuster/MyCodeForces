#include <bits/stdc++.h>
using namespace std;
bool check(int x){
    set<int> s; int i=0;
    while (x>0){
        s.insert(x%10);
        x=(x-x%10)/10;
        i++;
    }
    return (i==s.size());
}
int main(){
    int x=-1, l, r;
    cin>>l>>r;
    for (int i=l; i<=r; i++){
        if (check(i)){
            x=i; break;
        }
    }
    cout<<x;
}
