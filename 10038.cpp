#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main (void) {
    int n, tmp, tmp1, tmp2, key;
    int *ptr = NULL;

    while (scanf("%d", &n) != EOF) {
        //ptr = (int*)malloc(n * sizeof(int));
        ptr = new int[n];
        key = 0;
        for (int i = 0; i < n; i++) {
            ptr[i] = 0;
        }
        scanf("%d", &tmp1);
        for (int i = 1; i < n; i++) {
            scanf("%d", &tmp2);
            tmp = abs(tmp1 - tmp2);
            tmp1 = tmp2;

            if (key == 0) {
                if (tmp < 1 || tmp >= n) {
                    key = 1;
                }
                else if (ptr[tmp-1] == 1) {
                    key = 1;
                }
                else {
                    ptr[tmp-1] = 1;
                }
            }
        }
        
        if (key == 0) {
            printf("Jolly\n");
        }
        else if (key == 1) {
            printf("Not jolly\n");
        }
        delete ptr;
    }

    return 0;
}
