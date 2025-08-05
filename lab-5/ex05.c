#include<stdio.h>
int main()
{
    int n=8,i,sm=0,hm=0,m[8];
    for(i = 0; i < n; i++) {
        printf("Enter number %d: ", i+1);scanf("%d",&m[i]);
        if(i == 0 || m[i] < sm) 
        {
            sm = m[i];
        }
        if(i == 0 || m[i] > hm) 
        {
            hm = m[i];
        }
    }
    printf("Smallest number: %d\n", sm);
    printf("Largest number: %d\n", hm);
    return 0;
}