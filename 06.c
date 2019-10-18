/******************************************************************************



***
*   *
*   *
*   *
***
*   *
*   *
*   *
***

*******************************************************************************/
#include <stdio.h>

void main()
{
  int i,j,size,k;

  scanf("%d",&size);
  k=(size*2)-1;

  for(i=1;i<size*2;i++)
  {
      for(j=1; j<=size; j++)
        {
            // Condition for corner and center intersection space
            if((i==1 && (j==1 || j==size)) ||
               (i==size && (j==1 || j==size)) ||
               (i==k && (j==1 || j==size)))
            {
                printf(" ");
            }
            else if(i==1 || i==size || i==k || j==1 || j==size)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
  }

}
