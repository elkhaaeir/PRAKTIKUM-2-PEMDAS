#include <stdio.h>
int main() {
    float first_value, second_value, result;

    printf("Masukkan Nilai Pertama : ");
    scanf("%f", &first_value);

    printf("Masukkan Nilai Kedua : ");
    scanf("%f", &second_value);

    result = first_value + second_value;

    printf("Hasil dari penjumlahan nilai pertama \"%.2f\" dan nilai kedua \"%.2f\" adalah \"%.2f\"\n", first_value, second_value, result);

    return 0;
}