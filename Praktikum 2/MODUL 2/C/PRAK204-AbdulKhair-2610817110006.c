#include <stdio.h>

int main() {
    float radius, height;
    float volume, area, circumference;
    const float pi = 22.0 / 7.0;

    printf("Jari-jari : ");
    scanf("%f", &radius);
    printf("Tinggi : ");
    scanf("%f", &height);

    volume = pi * radius * radius * height;
    area = 2 * pi * radius * (radius + height);
    circumference = 2 * pi * radius;

    printf("\nVolume : %.2f\n", volume);
    printf("Luas : %.2f\n", area);
    printf("Keliling : %.2f\n", circumference);

    return 0;
}