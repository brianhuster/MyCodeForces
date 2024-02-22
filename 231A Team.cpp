#include <iostream>
 
using namespace std;
 
int main ()
{
    int n, m;
    scanf ("%d", &n);
    int implement = 0;		//the number of problems the friends will implement on the contest
    for (int i = 0; i < n; i++)
    {
      int sure = 0;  //number of people sure about each problem
      for (int j = 0; j < 3; j++)
	  {
	    scanf ("%d",&m);
	    if (m==1) sure++;
	  }
      if (sure>1) implement++;
    }
    printf("%d",implement);
}
