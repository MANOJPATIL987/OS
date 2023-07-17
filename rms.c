#include <stdio.h>
#include <stdlib.h>
#include <math.h>

// int shortfn(int arr[],int n){
//         int flag=0;
//         for (int i = 0; i < n; i++)
//         {
//             if( arr[flag]<=arr[i]){
//                 flag=i;
//             }
//         }
// }

int main(int argc, char const *argv[])
{
    int n;
    printf("enter no of processors\n");
    scanf("%d", &n);
    int exet[n];
    int timep[n];
    for (int i = 0; i < n; i++)
    {
        printf("enter exetime  of processors %d\n", i);
        scanf("%d", &exet[i]);
        printf("enter timeperiod  of processors %d\n", i);
        scanf("%d", &timep[i]);
    }
    // calculating u
    double u = 0;
    for (int i = 0; i < n; i++)
    {
        u = u + (double)exet[i] / (double)timep[i];
    }
    double x = (double) n * ((double)pow(2, (1 / n)) - 1);


    if (u <= x)
    {
        // printf("u is %f\n", u);
        // printf("x is %f\n", x);
        printf("system is scheduleable\n");
    }
    else
    {
        printf("cannot be executed\n");
    }

    return 0;
}
