/*
********
  *******
    ******
      *****
        ****
          ***
            **
              *
            **
          ***
        ****
      *****
    ******
  *******
********
*/

#include<stdio.h>

void main()
{
    int i,j,n,k=1,s=n;

    scanf("%d",&n);
    s=n;
    for(i=1;i<=(n*2)-1;i++)
    {
        for(j=1;j<k;j++)
        {
            printf("  ");
        }
        for(j=1;j<=s;j++)
        {
            printf("*");
        }
        if(i<n)
        {
            k++;
            s--;
        }
        else{

                k--;
                s++;

        }
        printf("\n");
    }
}
