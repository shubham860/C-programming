/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int n,i,j,k=1;

    scanf("%d",&n);

    for(i=1;i<=n*2;i++)
    {
        for(j=1;j<=k;j++)
        {
            printf("*");
        }
        if(i<n){
            k++;
        }
        else k--;

        printf("\n");
    }

    return 0;
}
