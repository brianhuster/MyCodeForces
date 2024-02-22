#include <iostream>
 
using namespace std;
 
int main()
{
    unsigned int n, count=1, maxlen=1;
    cin>>n;
    unsigned int a[n];
    for (int i=0; i<n; i++) cin>>a[i];
    for (int i=0; i<n-1; i++){
        if (a[i+1]>a[i]) {count++;}
        else{
            if (count>maxlen) {
                maxlen=count;
            }
            count=1;
        }
    }
    if (count>=maxlen) maxlen=count;
    cout<<maxlen;
    return 0;
}
