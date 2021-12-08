#include <stdio.h>

int main () {
    int n, value=0, i, j;
    char s[4];

    scanf("%d", &n);

    gets(s);
    for(i=0 ; i<n; i++ ) {
        gets(s);
        for(j=0 ; j<3 ; j++) {
            if(s[j]== '+') {
                value++;
                break;
            }
            else if(s[j]== '-') {
                value--;
                break;
            }
        }

    }


    printf("%d", value);

    return 0;
}
