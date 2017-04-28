#include <stdio.h>

int main()
{
    int number;
    int Amplitude, Frequency, j;

    while (scanf("%d", &number) != EOF)
    {
        for (int n = 0; n < number; n++) {
            if (n != 0) {
                printf("\n");
            }
            scanf("%d %d", &Amplitude, &Frequency);
            for (int i = 1; i <= Frequency; i++) {
                for (int j = 1; j <= Amplitude; j++) {
                    for (int k = 1; k <= j; k++) {
                        printf("%d", j);
                    }
                    printf("\n");
                }
                for (int j = Amplitude - 1; j > 0; j--) {
                    for (int k = 0; k < j; k++) {
                        printf("%d", j);
                    }
                    printf("\n");
                }
                if (n < number && i < Frequency) {
                    printf("\n");
                }
            }
        }
    }

    return 0;
}