#include <stdio.h>

int main()  {
    int n[10];
    int n2[10] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};
    int i;
    int j;
    printf("Number:\n");
    for(i = 0; i < 10; i++)  {
        scanf("%d", &n[i]);
    }
    for(i = 0; i < 10; i++)  {
        if(i < 9)  {
           printf("%d: ", n2[i]);
        }
        for(j = 0; j < 10; j++)  {
            if(n2[i] <= n[j] && n[j] < n2[i + 1])  {
               printf("*");
            }
        }
        printf("\n");
    }
    return 0;
}
