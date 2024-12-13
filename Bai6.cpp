#include <stdio.h>

int main() {
    int n, num = 2, count = 0;

    printf("Nhap so nguyen duong n: ");
    scanf("%d", &n);

    while (count < n) {
        int i;
        for (i = 2; i <= num / 2; ++i) {
            if (num % i == 0) {
                break;
            }
        }
        if (i > num / 2) {
            printf("%d ", num);
            count++;
        }
        num++;
    }

    return 0;
}
