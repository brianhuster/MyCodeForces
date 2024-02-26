#include <bits/stdc++.h>
using namespace std;
struct result{
    unsigned long long score;
    unsigned long long penalty;
};
result best_result(unsigned long long m, unsigned long long h, unsigned long long t[]){
    sort(t, t+m);
    unsigned long long total_time=0, penalty=0, score=0;
    for (unsigned long long i=0; i<m; i++){
        total_time+=t[i];
        if (total_time>h)
            break;
        score++;
        penalty+=total_time;
    }
    return {score, penalty};
}
bool compare(result a, result b) { //Kiểm tra xem a có được xếp hạng trên b không
    if (a.score != b.score)
        return a.score > b.score;
    else
        return a.penalty < b.penalty;
}

int main(){
    unsigned long long t; cin>>t;
    while (t--){
        unsigned long long n, m, h, rank=1;
        cin>>n>>m>>h;
        unsigned long long a[n][m];
        result list[n];
        for (unsigned long long i=0; i<n; i++)
            for (unsigned long long j=0; j<m; j++)
                cin>>a[i][j];
        for (unsigned long long i=0; i<n; i++){
            list[i]=best_result(m, h, a[i]);
        }
        // solve problem
        sort(list+1, list+n, compare);
        for (unsigned long long i=1; i<n; i++){
            if (compare(list[i], list[0])){
                rank++;
            }
        }
        // if (n==2 && m==10000 && h==1000000 && a[0][0]==100){
        // for (unsigned long long i=0; i<n; i++)
        //     cout<<"Người thứ "<<i<<" : "<<list[i].score<<" "<<list[i].penalty<<endl;
        // }
        cout<<rank<<endl;
    }
}
