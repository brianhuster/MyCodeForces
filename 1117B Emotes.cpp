#include <iostream>
#include <string.h>
using namespace std;
int main() {
    int n, m, k, index_max1, index_max2;
    cin>>n>>m>>k;
    unsigned long long a[n];
    unsigned long long s;
    for (int i=0; i<n; i++) cin>>a[i];
    if (a[0]>=a[1]){
        index_max1=0;
        index_max2=1;
    }
    else{
        index_max1=1;
        index_max2=0;
    }
    for (int i=0; i<n; i++) 
        if (a[i]>a[index_max1]) 
            index_max1=i;
            
    for (int i=0; i<n; i++) 
        if (a[i]>a[index_max2] && i!=index_max1) 
            index_max2=i;
            
    int du=m%(k+1); int thuong=m/(k+1);
    
    s=thuong*(k*a[index_max1]+a[index_max2])+du*a[index_max1];
    cout<<s;
    return 0; 
}
