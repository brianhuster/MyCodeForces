
#include <stdio.h>
int main()
{
	int output, n, t, i, j; bool erase=false;
	scanf ("%i",&t);
	int a[200000];
	for (i=0; i<t; i++){ //có t test case
	    erase=false;
	    scanf ("%i", &n);
	    for (j=0; j<n; j++) 
	        scanf ("%i", &a[j]);
	    for (j=n-1; j>=0; j--)
	        if (a[j-1]<a[j])
	            break;
	    for (; j>=0; j--){
	        if (a[j-1]>a[j]){
	            output=j;
	            erase=true;
	            break;
	        }
	    }
	    if (erase==false)   output=0;
	    printf("%i ", output);
	}
	return 0;
}
