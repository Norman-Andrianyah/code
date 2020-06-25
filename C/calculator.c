#include<stdio.h>

int main() {
    //namanya juga baru belajar khan :)

    int angka1;
	int angka2;

	//untuk switch
    int kata1 = 1;
    int kata2 = 2;
    int kata3 = 3;
    int komentasi;

	//untuk memasukan switch (mungkin gk berguna)
    komentasi = kata1 + kata2;

    printf("Halo semua, ini adalah kalkulator biasa :v \n");
    printf("kalian hanya memasukan 2 angka saja\nmisalnya 5 2 terus langsung tekan enter\n");
    printf("siap?\n \n");

    printf("PENJUMLAHAN \n");
    printf("masukan 2 angka yang berbeda\n");
    scanf("%d %d", &angka1, &angka2);
    printf("hasil: %d \n \n", angka1 + angka2);

    printf("PENGURANGAN \n");
    printf("masukan 2 angka yang berbeda\n");
    scanf("%d %d", &angka1, &angka2);
    printf("hasil: %d \n \n", angka1 - angka2);

    printf("PERKALIAN \n");
    printf("masukan 2 angka yang berbeda\n");
    scanf("%d %d", &angka1, &angka2);
    printf("hasil: %d\n \n", angka1 * angka2);

    printf("PEMBAGIAN \n");
    printf("masukan 2 angka yang berbeda\n");
    scanf("%d %d", &angka1, &angka2);
    printf("hasil: %d\n \n", angka1 / angka2);

    printf("dah. kalo mau lagi silahkan run/debugging lagi \nkalo kode ini kalian tiru jg gk apa-apa :) \n");

    switch (komentasi)
    {
    case 1:
    case 3:
        printf("stay safe");
        break;
    case 2:
        printf("Wash Your Hands");
        break;
        printf("Stay At Home");
        break;
    case 4:
        printf("Social Distancing!");
        break;
	case 5:
		printf("Physcally distancing");
		break;
    default:
        break;
    }

    //terimakasih ya. . . .h udh cobain <3

    return 0;
}