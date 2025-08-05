#include<stdio.h>
int main()
{
    int n=5,i,tm=0,hm=0,m[5];
    for(i = 0; i < n; i++) {
        printf("Enter the marks of student %d: ", i+1);scanf("%d",&m[i]);
        tm += m[i];
        if(i == 0 || m[i] > hm) 
        {
            hm = m[i];
        }
    }
    printf("Total Marks : %d\n", tm);
    printf("Highest Marks: %d\n", hm);
    return 0;
}