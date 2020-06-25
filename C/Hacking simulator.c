#include <stdio.h>

/*
perhatian!
kode ini dirancang hanya untuk bermain-main saja, jadi tidak asli.
dan bagaimana itu tidak asli? kalian akan tau setelah kalian membaca
kode tersebut dengan cermat, baik, dan benar.
dan kenapa tidak buat yang real? itu karena peretasan itu hal yang sangat illegal.
*/

//deklarasi
int errorcoderes (int num);

int main() {
    int nomor = 1;
    int nomer2;
    int nomer3;
    int nomer4;
    int nomer5;
    int nomer6;

    int connecting1 = 1;
    int connecting2 = 1;

    int viewprocess1 = 1;
    int viewprocess2 = 1;
    int viewprocess3 = 1;

    int hackprocess1 = 1;
    int hackprocess2 = 1;
    int hackprocess3 = 1;
    int hackprocess4 = 1;

    int errornum1 = 24;
    int errornum2 = 63;
    int errornum3 = 18;
    int errornum4 = 32;
    int errornum5 = 72;

    int error1;
    int error2;

    int ercode;
    int errorcode;

    nomer2 = nomor + nomor;
    nomer3 = nomor + nomer2;
    nomer4 = nomer2 + nomer2;
    nomer5 = nomer2 + nomer3;
    nomer6 = nomer3 + nomer3;

    error1 = (errornum2 * errornum1) - errornum5;
    error2 = errornum3 + errornum4;

    errorcode = errorcoderes(ercode);

    char browser[50];
    char site[120];

    printf("Norman's Hacking Simulator\n\n");
    printf("dirancang oleh: Norman Studios\n");
    printf("pendapat dari: pikiran sendiri\n\n");

    printf("masukan browser yang ingin dihacking: \n");
    gets(browser);
    printf("\n");

    printf("masukan website untuk menghacking: \n");
    gets(site);
    printf("\n");

    printf("masukan virus yang kalian ingin merusak website\n");
    printf("(masukan nomornya)\n");

    printf("%d virus E-bot\n", nomor);
    printf("%d virus MAt-X\n", nomer2);
    printf("%d virus COVID-19 (populer)\n", nomer3);
    printf("%d virus TRia Moon\n", nomer4);
    printf("%d virus MSDA Type=2\n", nomer5);
    printf("%d virus GDT10242 v1\n", nomer6);

    char viruschose = getchar();

    if (viruschose == '1')
    {
        printf("menggunakan virus E-bot...\n");
        printf("kerusakan: sedang\n");
    }
    else if (viruschose == '2')
    {
        printf("menggunakan virus MAt-X...\n");
        printf("kerusakan: sedang\n");
    }
    else if (viruschose == '3')
    {
        printf("menggunakan virus COVID-19...\n");
        printf("kerusakan: besar\n");
    }
    else if (viruschose == '4')
    {
        printf("menggunakan virus TRIa Moon...\n");
        printf("kerusakan: kurang\n");
    }
    else if (viruschose == '5')
    {
        printf("menggunakan virus MSDA Type=2...\n");
        printf("kerusakan: luar biasa\n");
    }
    else if (viruschose == '6')
    {
        printf("menggunakan virus GDT10242 v1...\n");
        printf("kerusakan: sedang\n");
    }

    while (connecting1 <= 100)
    {
        printf("menunggu jaringan %d/100\n", connecting1);
        connecting1++;
    }
    while (connecting2 <= 100)
    {
        printf("memyambungkan %d/100\n", connecting2);
        connecting2++;
    }
    while (viewprocess1 <= 500)
    {
        printf("membaca website %d/500\n", viewprocess1);
        viewprocess1++;
    }
    while (viewprocess2 <= 500)
    {
        printf("membaca script %d/500\n", viewprocess2);
        viewprocess2++;
    }
    while (viewprocess3 <= 500)
    {
        printf("membaca database %d/500\n", viewprocess3);
        viewprocess3++;
    }
    while (hackprocess1 <= 1000)
    {
        printf("meretas web %d/1000\n", hackprocess1);
        hackprocess1++;
    }
    while (hackprocess2 <= 1000)
    {
        printf("meretas script %d/1000\n", hackprocess2);
        hackprocess2++;
    }
    while (hackprocess3 <= 1000)
    {
        printf("meretas database %d/1000\n", hackprocess3);
        hackprocess3++;
    }

    printf("\nmeretas sukses, web telah diretas\n\n");

    printf("hack console:\n");
    printf("terjadi kesalahan setelah meretas sebagian script.%d dan script.%d (error code: %d)\n", error1, error2, errorcode);
    printf("terjadi kesalahan setelah meretas sebagian web dengan tag script didalamnya (error code: %d)\n", errorcode);
    printf("style/atribut web telah diretas semaksimal mungkin\n");

    return 0;
}
//definisi
int errorcoderes (int num) {
    int codeer;

    codeer = num * num;

    return codeer;
}

//deklarasi + definisi = fungsi

//ingat sekali lagi, ini hanya kode abal-abalan aja :D
//bay the way, ae baru belajar