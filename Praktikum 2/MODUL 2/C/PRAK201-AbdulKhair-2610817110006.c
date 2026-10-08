#include <stdio.h>

int main() {
    char name[100];
    char nim[20];
    char class[20];
    char place_date_birth[100];
    char address[200];
    char hobby[100];
    char no_hp[20];

    printf("Nama : ");
    fgets(name, sizeof(name), stdin);

    printf("NIM : ");
    fgets(nim, sizeof(nim), stdin);

    printf("Kelas Paralel : ");
    fgets(class, sizeof(class), stdin);

    printf("Tempat/Tanggal Lahir : ");
    fgets(place_date_birth, sizeof(place_date_birth), stdin);

    printf("Alamat : ");
    fgets(address, sizeof(address), stdin);

    printf("Hobby : ");
    fgets(hobby, sizeof(hobby), stdin);

    printf("No. HP : ");
    fgets(no_hp, sizeof(no_hp), stdin);

    printf("\nOutput\n");
    printf("Nama : %s", name);
    printf("NIM : %s", nim);
    printf("Kelas Paralel : %s", class);
    printf("Tempat/Tanggal Lahir : %s", place_date_birth);
    printf("Alamat : %s", address);
    printf("Hobby : %s", hobby);
    printf("No. HP : %s", no_hp);

    return 0;
}