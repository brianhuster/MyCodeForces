#include<bits/stdc++.h>
using namespace std;
int cases, n;
vector<int> a; //a[i] là vị trí của phần tử i
void input_test_case(){
    cin>>n;
    a.resize(n);
    for (int i=0; i<n; i++){
        cin>>a[i];
    }
}
string result(){
    for (int i=0; i<n-1; i++){
        if (a[i+1]-a[i]>1)  return "No";
    }
    return "Yes";
}
int main(){
    cin>>cases;
    for (int i=1; i<=cases; i++){
        input_test_case();
        cout<<result()<<endl;
    }
    return 0;
}
