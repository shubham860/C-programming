/******************************************************************************

  *
 ***
*****
 ***
  *

*******************************************************************************/
#include <stdio.h>

int main()
{
    int n,i,j,k=1,s;

    scanf("%d",&n);
    s=n-1;
    for(i=1;i<=n*2;i++)
    {
        for(j=1;j<=s;j++)
        {
            printf(" ");
        }
        for(j=1;j<k*2;j++)
        {
            printf("*");
        }
        if(i<n){
            s--;
            k++;
        }
        else{
         s++;
         k--;
        }
        printf("\n");
    }

    return 0;
}
