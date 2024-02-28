#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int rmax=0, bmax=0, rsum=0, bsum=0, x, n, m;
        cin>>n;
        while (n--){
            cin>>x;
            rsum+=x;
            if (rsum>rmax) rmax=rsum;
        }
        cin>>m;
        while (m--){
            cin>>x;
            bsum+=x;
            if (bsum>bmax) bmax=bsum;
        }
        cout<<rmax+bmax<<endl;
    }
    return 0;
}
