#include <stdio.h>

int main() {
    int second, day, hour, minute, rest;
    
    printf("Masukkan jumlah detik: ");
    scanf("%d", &second);
    
    day = second / 86400;
    rest = second % 86400;
    
    hour = rest / 3600;
    rest = rest % 3600;
    
    minute = rest / 60;
    second = rest % 60;
    
    if (day > 0) {
        printf("%d hari %02d:%02d:%02d\n", day, hour, minute, second);
    } else {
        printf("%02d:%02d:%02d\n", hour, minute, second);
    }
    
    return 0;
}