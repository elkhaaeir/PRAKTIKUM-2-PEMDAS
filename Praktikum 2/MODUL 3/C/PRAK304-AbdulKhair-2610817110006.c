#include <stdio.h>

int main() {
    int n;

    scanf("%d", &n);

    if (n >= 100) {
        printf("Anda Menginput Melebihi Limit Bilangan");
    } else if (n == 0) {
        printf("Nol");
    } else if (n < 10) {
        printf("Satuan");
    } else if (n < 20) {
        printf("Belasan");
    } else {
        printf("Puluhan");
    }
    return 0;
}