#include <stdio.h>
#include<math.h>

int main()
{
    struct time
    {
        int min,sec;
    } time[3];

    int total_seconds = 0;
    for(int i=0;i<3;i++) {
        printf("Time input (m:s): ");scanf("%d:%d", &time[i].min, &time[i].sec);
        total_seconds += time[i].min * 60 + time[i].sec;
    }

    printf("Total time elapsed: %d second(s)\n", total_seconds);
    return 0;
}