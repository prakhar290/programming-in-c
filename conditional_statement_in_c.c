#include <stdio.h>
#include <stdlib.h>
#include <string.h>





int main()
{
   int n;
   char* arr[10]={"one","two","three","four","five","six","seven","eight","nine","Greater than 9"};
   scanf("%d\n", &n);
   if(n<=9)
   {
       printf(arr[n-1]);
   }
   else {
   printf(arr[9]);
   }
    // Write Your Code Here

    return 0;
}