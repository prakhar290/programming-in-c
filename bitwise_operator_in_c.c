#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
//Complete the following function.


void calculate_the_maximum(int n, int k) {

  //the code is here.

  int max_a=0,max_o=0,max_x=0;
  for(int i=1;i<=n;i++)
  {
      for(int j=i+1;j<=n;j++)
      {
          if(((i&j)>max_a)&&((i&j)<k))
          max_a=i&j;
          if(((i|j)>max_o)&&((i|j)<k))
          max_o=i|j;
          if(((i^j)>max_x)&&((i^j)<k))
          max_x=i^j;
      }
  }
  printf("%d\n%d\n%d", max_a, max_o, max_x); 
}

int main() {
    int n, k;
  
    scanf("%d %d", &n, &k);
    calculate_the_maximum(n, k);
 
    return 0;
}