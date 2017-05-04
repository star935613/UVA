#include <stdio.h>

int main(void) {
    int *ptr;
    int n, c, sum, count;
    while (scanf("%d", &n) != EOF) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &c);
            ptr = new int[c];
            sum = 0;
            count = 0;
            for (int i = 0; i < c; i++) {
                scanf("%d", &ptr[i]);
                sum += ptr[i];
                //printf("sum: %d test \n", sum);
            }
            for (int i = 0; i < c; i++) {
                if ((float)(sum / c) < ptr[i]) {
                    count++;
                    //printf("%f test \n", (float)(sum / c));
                }
            }
            printf("%.3f%%\n", (float)count*100/(float)c);
            delete ptr;
        }
    }
}