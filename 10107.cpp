#include <stdio.h>

int main(void) {
    int n[10001];
    int i = 1, j, tmp, median;

    scanf("%d", &n[0]);
    printf("%d\n", n[0]);
    while (scanf("%d", &tmp) != EOF) {
        if (tmp >= n[i - 1]) {
            n[i] = tmp;
        }
        else {
            j = i;
            while (tmp < n[j - 1]) {
                n[j] = n[j - 1];
                j--;
            }
            n[j] = tmp;
        }


        median = (int)(i / 2);
        //even
        if (i % 2 == 0) {
            printf("%d\n", n[median]);
        }
        //odd
        else if (i % 2 == 1) {
            printf("%d\n", (n[median] + n[median + 1]) / 2);
        }
        i++;
    }
    
    return 0;
}