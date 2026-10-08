#include <stdio.h>
#include <math.h>

int main() {
    float a, b;
    float alas, tinggi, hypotenusa;
    float keliling, luas;

    printf("Nilai a : ");
    scanf("%f", &a);

    printf("Nilai b : ");
    scanf("%f", &b);

    alas = sqrt(b * b - a * a);

    tinggi = a;

    hypotenusa = b;

    keliling = alas + tinggi + hypotenusa;

    luas = 0.5 * alas * tinggi;

    printf("\nAlas : %.0f cm\n", alas);
    printf("Tinggi : %.0f cm\n", tinggi);
    printf("Keliling : %.0f cm\n", keliling);
    printf("Luas : %.0f cm^2\n", luas);

    return 0;
}