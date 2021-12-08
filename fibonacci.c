#include <stdio.h>
int main() {
    int x = 0, y = 1, z = 0, n;
    printf("Enter a positive number: ");
    scanf("%d", &n);

    printf("Fibonacci series:");
    for (z=0; z<=n; z=x+y)
    {
        printf(" %d, ",z);
        x=y;
        y=z;
    }

    return 0;
}
