#include <stdio.h>

//----------------------------------------//
/*============/ Pesan Penting \===========\\
|<<<<<<<<<<<<<<[  PERHATIAN! ]>>>>>>>>>>>>>|
|                                          |
|   kode ini hanya digunakan hanya untuk   |
| bermain saja, jadi game sepenuhnya tidak |
| lah nyata, jadi jangan mengira kode ini  |
| adalah kode yang illegal,                |
| ingat ini! kode ini juga dibuat dalam    |
| kurun waktu 3 hari. jadi tidak heran,    |
| buatnya sangatlah susah dan juga sangat  |
| banyak                                   |
\\========================================*/
//----------------------------------------//

int main() {
    int num1 = 1;
    int num2;
    int num3;
    int num4;
    int num5;
    int num6;

    int networkprocc = 1;
    int hackpassw = 1;
    int hackname = 1;

    int hack_sosmed = 1;

    int virus_instal = 1;
    int virus_load = 1;
    int virus_launch = 1;
    int virus_process = 1;

    int error_gaster = 1;

    int destroy_website_procc = 1;
    int destroy_website = 1;

    num2 = num1 + num1;
    num3 = num1 + num2;
    num4 = num2 + num2;
    num5 = num3 + num2;
    num6 = num3 + num3;

    char hack;
    char hackto;
    char hackto1;
    char networkname;
    char networknamechange;

    char passwordchange;

    char viruschose;
    char viruschose1;

    //pemilihan level virus
    char level_chose;
    char level_chose1;
    char level_chose2;
    char level_chose3;
    char level_chose4;
    char level_chose5;
    char level_chose6;
    char level_chose7;
    char level_chose8;
    char level_chose9;
    char level_chose10;

    char changenetwork;

    char yes_or_no;
    char yes_or_no1;
    char yes_or_no2;
    char yes_or_no3;
    char yes_or_no4;

    char url[100];

    char chose_sosmed;

    char user_sosmed_fb[100];
    char user_sosmed_tw[100];
    char user_sosmed_ig[100];
    char user_sosmed_gg[100];

    char destroyed_web;

    printf("Norman's Hacking simulator v 0.2\n\n");
    printf("Remake By Norman Andrian's\n");
    printf("Code & Programing by Norman Andrian's\n");
    printf("IDE by <unknown>\n");
    printf("subtitle Indonesia\n\n");

    printf("ingin meretas apa?\n");
    printf("(masukan nomor)\n\n");

    printf("%d wi-fi\n", num1);
    printf("%d website\n", num2);
    scanf("%s", &hack);

    if (hack == '1')
    {
        printf("\n\nmasukan nama jaringan wi-fi\n");
        scanf("%s", &networkname);
        printf("\n");

        while (networkprocc <= 500)
        {
            printf("mencari %s %d/500\n", &networkname, networkprocc);
            networkprocc++;
        }
        
        printf("\napa yang ingin anda lakukan untuk jaringan %s?\n", &networkname);
        printf("(masukan nomor lagi)\n");
        printf("%d membobol password\n", num1);
        printf("%d mengubah jaringan wi-fi\n", num2);
        printf("%d merusak jaringan wi-fi\n", num3);
        scanf("%s", &hackto);

        printf("\n\n");

        if (hackto == '1')
        {
            while (hackpassw <= 1000)
            {
                printf("membobol password %d/1000\n", hackpassw);
                hackpassw++;
            }
            printf("password: as8sh28dh2\n");
        }
        else if (hackto == '2')
        {
            printf("jadi... apa yang mau kau ubah\n");
            printf("(biasa... masukin nomer)\n");
            printf("%d ubah nama jaringan\n", num1);
            printf("%d ubah password\n", num2);
            scanf("%s", &changenetwork);

            printf("\n\n");

            if (changenetwork == '1')
            {
                printf("ubah nama %c menjadi:\n", &networkname);
                scanf("%s", &networknamechange);
                printf("\n");
                while (hackname <= 1000)
                {
                    printf("mengubah nama jaringan %d/1000\n", hackname);
                    hackname++;
                }
                printf("\nberhasil mengubah nama %s menjadi %s!\n", &networkname, &networknamechange);
            }
            else if (changenetwork == '2')
            {
                printf("buat password baru:\n");
                scanf("%s", &networknamechange);
                printf("\n");
                while (hackname <= 1000)
                {
                    printf("mengubah password %d/1000\n", hackname);
                    hackname++;
                }
                printf("\nberhasil mengubah password!\n");
            }
            else
            {
                printf("Salah memasukan angka/input\n");
            }
        }
        else if (hackto == '3')
        {
            printf("virus apa yang ingin anda rusak?\n");
            printf("(masukan nomor)\n\n");

            printf("%d virus Tritinium TH3\n", num1);
            printf("%d virus Arthenal v2 Legacy\n", num2);
            printf("%d virus E-bot\n", num3);
            printf("%d virus GTB T6\n", num4);
            printf("%d virus PVSA Alpha (dalam pembuatan)\n", num5);
            printf("%d virus Gaster\n");
            scanf("%s", &viruschose);
            printf("\n\n");

            if (viruschose == '1')
            {
                printf("virus Tritinium TH3\n");
                printf("dirancang oleh Norman Andrians\n");
                printf("radius perusakan 14cm x 14,6cm\n\n");
                
                printf("Virus Tritinium TH3 rancangan kami memiliki pemilihan kerusakan level yang berbeda.\npilih level yang anda inginkan\n");
                printf("(masukan nomor)\n\n");

                printf("%d sedikit\n", num1);
                printf("%d sedang\n", num2);
                printf("%d besar\n", num3);
                printf("%d luar biasa\n", num4);
                scanf("%s", &level_chose);
                printf("\n\n");

                if (level_chose == '1')
                {
                    while (virus_load <= 100)
                    {
                        printf("menunggu virus Tritinium TH3 %d/100\n", virus_load);
                        virus_load++;
                    }
                    while (virus_instal <= 500)
                    {
                        printf("memasang virus Tritinium TH3 %d/500\n", virus_instal);
                        virus_instal++;
                    }
                    printf("berhasil merusak sedikit jaringan wi-fi!\n");
                }
                else if (level_chose == '2')
                {
                    while (virus_load <= 500)
                    {
                        printf("menunggu virus Tritinium TH3 %d/500\n", virus_load);
                        virus_load++;
                    }
                    while (virus_instal <= 1000)
                    {
                        printf("memasang virus Tritinium TH3 %d/1000\n", virus_instal);
                        virus_instal++;
                    }
                    printf("berhasil merusak sebagian jaringan wi-fi!\n");
                }
                else if (level_chose == '3')
                {
                    while (virus_load <= 1000)
                    {
                        printf("menunggu virus Tritinium TH3 %d/1000\n", virus_load);
                        virus_load++;
                    }
                    while (virus_instal <= 5000)
                    {
                        printf("memasang virus Tritinium TH3 %d/5000\n", virus_instal);
                        virus_instal++;
                    }
                    printf("berhasil merusak hampir semua komponen jaringan wi-fi!\n");
                }
                else if (level_chose == '4')
                {
                    while (virus_load <= 5000)
                    {
                        printf("menunggu virus Tritinium TH3 %d/5000\n", virus_load);
                        virus_load++;
                    }
                    while (virus_instal <= 10000)
                    {
                        printf("memasang virus Tritinium TH3 %d/10000\n", virus_instal);
                        virus_instal++;
                    }
                    printf("berhasil merusak semua komponen jaringan wi-fi!\n");
                }
                else
                {
                    printf("input/nomor yang anda masukan salah");
                }
            }
            else if (viruschose == '2')
            {
                printf("virus Arthenal v2 legacy\n");
                printf("dirancang oleh Norman Andrians\n");
                printf("radius perusakan 11,72cm x 11,2cm\n\n");

                printf("pilih level kerusakan\n");
                printf("(masukan nomor)\n\n");

                printf("%d sedikit\n", num1);
                printf("%d sedang\n", num2);
                printf("%d besar\n", num3);
                scanf("%s", &level_chose1);
                printf("\n\n");

                if (level_chose1 == '1')
                {
                    while (virus_load <= 100)
                    {
                        printf("menunggu virus Arthenal v2 legacy %d/100\n", virus_load);
                        virus_load++;
                    }
                    while (virus_instal <= 500)
                    {
                        printf("memasang virus Arthenal v2 legacy %d/500\n", virus_instal);
                        virus_instal++;
                    }
                    printf("berhasil merusak sedikit jaringan wi-fi!\n");
                }
                else if (level_chose1 == '2')
                {
                    while (virus_load <= 500)
                    {
                        printf("menunggu virus Arthenal v2 legacy %d/500\n", virus_load);
                        virus_load++;
                    }
                    while (virus_instal <= 1000)
                    {
                        printf("memasang virus Arthenal v2 legacy %d/1000\n", virus_instal);
                        virus_instal++;
                    }
                    printf("berhasil merusak sebagian jaringan wi-fi!\n");
                }
                else if (level_chose1 == '3')
                {
                    while (virus_load <= 1000)
                    {
                        printf("menunggu virus TArthenal v2 legacy %d/1000\n", virus_load);
                        virus_load++;
                    }
                    while (virus_instal <= 5000)
                    {
                        printf("memasang virus Arthenal v2 legacy %d/5000\n", virus_instal);
                        virus_instal++;
                    }
                    printf("berhasil merusak hampir semua komponen jaringan wi-fi!\n");
                }
            }
            else if (viruschose == '3')
            {
                printf("virus E-bot\n");
                printf("dirancang oleh Alan Bekker\n");
                printf("radius perusakan 16,8cm x 17cm\n");
                printf("kekuatan sangat luar biasa\n\n");

                printf("virus E-bot sudah memiliki kekuatannya sendiri. luncurkan?\n");
                printf("(masukan nomr)\n");
                printf("%d iya\n", num1);
                printf("%d tidak\n", num2);
                scanf("%s", &yes_or_no);

                printf("\n\n");

                if (yes_or_no == '1')
                {
                    while (virus_process <= 1000)
                    {
                        printf("memperoses %d/1000\n", virus_process);
                        virus_process++;
                    }
                    while (virus_load <= 1000)
                    {
                        printf("menunggu virus %d/1000\n", virus_load);
                        virus_load++;
                    }
                    while (virus_instal <= 10000)
                    {
                        printf("menginstal virus %d/10000\n", virus_instal);
                        virus_instal++;
                    }
                    while (virus_launch <= 10000)
                    {
                        printf("meluncurkan virus %d/10000\n", virus_launch);
                        virus_launch++;
                    }
                    printf("\nberhasil merusak seluruh komponen jaringan-wi-fi!\n");
                }
                else if (yes_or_no == '2')
                {
                    printf("tidak? baiklah -_-\n");
                }
                else
                {
                    printf("input/angka yang anda masukan salah, sepertinya anda bilang tidak");
                }
            }
            else if (viruschose == '4')
            {
                printf("virus GTB T6\n");
                printf("dirancang oleh <unknown>/hacker tak dikenal\n");
                printf("radius perusakan 10,4cm x 11,7cm\n\n");

                printf("pilih level kerusakan\n");
                printf("(masukan nomor)");
                printf("%d sedang", num1);
                printf("%d besar\n", num2);
                printf("%d luar biasa\n", num3);
                scanf("%s", &level_chose2);
                printf("\n\n");

                if (level_chose2 == '1')
                {
                    while (virus_load <= 500)
                    {
                        printf("menunggu virus GTB T6 %d/500\n", virus_load);
                        virus_load++;
                    }
                    while (virus_instal <= 1000)
                    {
                        printf("memasang virus GTB T6 %d/1000\n", virus_instal);
                        virus_instal++;
                    }
                    printf("berhasil merusak sebagian jaringan wi-fi!\n");
                }
                else if (level_chose2 == '2')
                {
                    while (virus_load <= 1000)
                    {
                        printf("menunggu virus GTB T6 %d/1000\n", virus_load);
                        virus_load++;
                    }
                    while (virus_instal <= 5000)
                    {
                        printf("memasang virus GTB T6 %d/5000\n", virus_instal);
                        virus_instal++;
                    }
                    printf("berhasil merusak hampir semua komponen jaringan wi-fi!\n");
                }
                else if (level_chose2 == '3')
                {
                    while (virus_load <= 5000)
                    {
                        printf("menunggu virus GTB T6 %d/5000\n", virus_load);
                        virus_load++;
                    }
                    while (virus_instal <= 10000)
                    {
                        printf("memasang virus GTB T6 %d/10000\n", virus_instal);
                        virus_instal++;
                    }
                    printf("berhasil merusak semua komponen jaringan wi-fi!\n");
                }
                else
                {
                    printf("input/angka yang anda masukan salah\n");
                }
            }
            else if (viruschose == '5')
            {
                printf("virus PVSA Alpha (dalam pembuatan)\n");
                printf("dirancang oleh Paul Verdiana dan Certz\n");
                printf("kerusakan sedang\n");
                printf("radius perusakan 11,4cm x 13,2cm\n\n");

                printf("PVSA Alpha sudah memiliki kekuatannya sendiri. lanjutkan?\n");
                printf("(pilih nomor)\n\n");
                printf("%d iya", num1);
                printf("%d tidak", num2);
                scanf("%s", &yes_or_no1);

                printf("\n\n");

                if (yes_or_no1 == '1')
                {
                    while (virus_load <= 500)
                    {
                        printf("menunggu virus PVSA %d/500\n", virus_load);
                        virus_load++;
                    }
                    while (virus_instal <= 1000)
                    {
                        printf("memasang virus PVSA %d/1000\n", virus_instal);
                        virus_instal++;
                    }
                    while (virus_launch <= 1000)
                    {
                        printf("meluncurkan virus PVSA %d/1000\n", virus_launch);
                        virus_launch++;
                    }
                    printf("\nberhasil merusak sebagian komponen jaringan wi-fi!\n");
                }
                else if (yes_or_no1 == '2')
                {
                    printf("tidak? ya sudah.\n");
                }
                else
                {
                    printf("input/angka yang anda masukan salah, sepertinya anda hanya ingin membatalkannya\n");
                }
            }
            else if (viruschose == '6')
            {
                printf("virus Gaster\n");
                printf("dirancang oleh W. D. Gaster dan pr. Alphys\n");
                printf("kerusakan ???\n");
                printf("radius perusakan ? x ?\n");
                printf("virus ini mengandung segudang misteri\n\n");

                printf("sepertinya virus ini mungkin tidak aman diperangkat anda. jalankan?\n");
                printf("%d ��\n", num1);
                printf("%d jangan!!!\n", num2);
                scanf("%s", &yes_or_no2);
                printf("\n\n");

                if (yes_or_no2 == '1')
                {
                    while (error_gaster < 10000)
                    {
                        printf("a problem has been and your device has been so many error to your device\n");
                        printf("if this is the first time you've seen this error by virus\n");
                        printf("restart your device, or you die\n");
                        printf("if this word appears again, follow the steps:\n");

                        printf("Check viruses in your devices. remove any newly installed\n");
                        printf("software or hardware controllers. check your hard drive\n");
                        printf("to make sure it is properly configured and terminate\n");
                        printf("run CHKDSK /F to check for hard drive corruption, and then restart your device\n\n");

                        printf("Technical information\n");
                        printf("*** STOP: 0x0000007B (0xF8975528, 0xc0000034, 0x00000000, 0x0000000)\n");
                        error_gaster++;
                    }
                    while (error_gaster <= 100000)
                    {
                        printf("10101010111011101010100101010010001010101010100101100100101001010100101010101000101011010101101010010100101010101010101010101010101100101001010011110101010101010101010101010101010101001010001010101010101010101001010100010101010101010101010101011001101010101010110100100010101010101\n");
                        error_gaster++;
                    }
                }
                else if (yes_or_no2 == '2')
                {
                    printf("tidak? jika itu yang anda inginkan anda beruntung!\n");
                }
                else
                {
                    printf("input/angka yang anda masukan salah, tapi setidaknya kau beruntung\n");
                }
            }
            else
            {
                printf("input/angka yang anda masukan salah");
            }
        }
        else
        {
            printf("input/angka yang anda masukan salah");
        }
    }
    else if (hack == '2')
    {
        printf("\n\nmasukan alamat URL untuk meretas (maksimal 100 karakter):\n");
        scanf("%s", &url);
        printf("\n\n");

        printf("jadi, apa yang ingin anda lakukan untuk website %s?\n", &url);
        printf("(masukan angka)\n\n");
        printf("%d membobol password orang\n", num1);
        printf("%d mengubahnya menjadi acak-acakan\n", num2);
        printf("%d merusak website dengan virus\n", num3);
        scanf("%s", &hackto1);
        printf("\n\n");

        if (hackto1 == '1')
        {
            printf("meretas password huh?\n\n");

            printf("pilih nama situs sosial media\n");
            printf("(masukan nomor)");
            printf("%d facebook\n", num1);
            printf("%d twitter\n", num2);
            printf("%d instagram\n", num3);
            printf("%d google\n", num4);
            scanf("%s", &chose_sosmed);
            printf("\n\n");

            if (chose_sosmed == '1')
            {
                printf("masukan nama pengguna facebook\n");
                scanf("%s", &user_sosmed_fb);
                printf("\n\n");
                
                while (hack_sosmed <= 5000)
                {
                    printf("meretas password %c %d/5000\n", &user_sosmed_fb, hack_sosmed);
                    hack_sosmed++;
                }
                printf("\npassword: ags7g2u826j2\n");
            }
            else if (chose_sosmed == '2')
            {
                printf("masukan nama pengguna twitter\n");
                scanf("%s", &user_sosmed_tw);
                printf("\n\n");
                
                while (hack_sosmed <= 5000)
                {
                    printf("meretas password %c %d/5000\n", &user_sosmed_tw, hack_sosmed);
                    hack_sosmed++;
                }
                printf("\npassword: gua12g6j2\n");
            }
            else if (chose_sosmed == '3')
            {
                printf("masukan nama pengguna twitter\n");
                scanf("%s", &user_sosmed_ig);
                printf("\n\n");
                
                while (hack_sosmed <= 5000)
                {
                    printf("meretas password %c %d/5000\n", &user_sosmed_ig, hack_sosmed);
                    hack_sosmed++;
                }
                printf("\npassword: aoiy8w2673be\n");
            }
            else if (chose_sosmed == '4')
            {
                printf("masukan nama pengguna twitter\n");
                scanf("%s", &user_sosmed_gg);
                printf("\n\n");
                
                while (hack_sosmed <= 5000)
                {
                    printf("meretas password %c %d/5000\n", &user_sosmed_gg, hack_sosmed);
                    hack_sosmed++;
                }
                printf("\npassword: aoiy8w2673be\n");
            }
            else
            {
                printf("input/angka yang anda masukan salah");
            }
        }
        else if (hackto1 == '2')
        {
            printf("mengubahnya menjadi acak-acakan huh?\n\n");

            printf("jadi apa yang ingin anda acak\n");
            printf("(masukan nomor)\n\n");

            printf("%d style/css\n", num1);
            printf("%d HTML5\n", num2);
            printf("%d JavaScript\n", num3);
            scanf("%s", &destroyed_web);
            printf("\n\n");

            if (destroyed_web == '1')
            {
                while (destroy_website_procc <= 500)
                {
                    printf("memproses %d/500\n", destroy_website_procc);
                    destroy_website_procc++;
                }
                while (destroy_website <= 1000)
                {
                    printf("mengubah tata letak dan atribut %d/1000\n", destroy_website);
                    destroy_website++;
                }
                printf("tata letak style pada %d telah diubah!\n", &url);
            }
            else if (destroyed_web == '2')
            {
                while (destroy_website_procc <= 500)
                {
                    printf("memproses %d/500\n", destroy_website_procc);
                    destroy_website_procc++;
                }
                while (destroy_website <= 5000)
                {
                    printf("meretas HTML pada website %d/5000\n", destroy_website);
                    destroy_website++;
                }
                printf("website %d berhasil diretas!\n", &url);
            }
            else if (destroyed_web == '3')
            {
                while (destroy_website_procc <= 500)
                {
                    printf("memproses %d/500\n", destroy_website_procc);
                    destroy_website_procc++;
                }
                while (destroy_website <= 2000)
                {
                    printf("meretas Script pada website %d/5000\n", destroy_website);
                    destroy_website++;
                }
                printf("script pada website %d berhasil diretas!\n", &url);
            }
            else
            {
                printf("input/angka yang anda masukan salah\n");
            }
        }
        else if (hackto1 == '3')
        {
            printf("merusak website dengan virus?\n\n");

            printf("masukan virus yang ingin anda rusak ke website %s\n", &url);
            printf("(masukan nomor)\n\n");

            printf("%d virus Arthenal GSW\n", num1);
            printf("%d virus E-bot\n", num2);
            printf("%d virus Gaster\n", num3);
            printf("%d virus GTB T11\n", num4);
            printf("%d virus AXZ I7", num5);
            scanf("%s", &viruschose1);
            printf("\n\n");

            if (viruschose == '1')
            {
                printf("virus Arthenal GSW\n");
                printf("dirancang oleh Norman Andrians\n");
                printf("deskripsi:\n");

                printf("virus Arthenal GSW adalah rancangan kami.\n");
                printf("yang maksudnya kami tuh Norman Andrian :v\n\n");

                printf("masukan level kerusakan\n");
                printf("(masukan nomor)\n");
                printf("%d sedikit\n", num1);
                printf("%d sedang\n", num2);
                printf("%d besar\n", num3);
                printf("%d luar biasa\n", num4);
                scanf("%s", &level_chose3);
                printf("\n\n");

                if (level_chose3 == '1')
                {
                    while (virus_load <= 500)
                    {
                        printf("menunggu virus Arthenal GSW %d/500\n", virus_load);
                        virus_load++;
                    }
                    while (virus_instal <= 500)
                    {
                        printf("menginstal virus Arthenal GSW %d/500\n", virus_instal);
                        virus_instal++;
                    }
                    while (virus_launch < 1000)
                    {
                        printf("meluncurkan virus Arthenal GSW %d/1000\n", virus_launch);
                        virus_launch++;
                    }
                    printf("\nsebagian isi website %s berhasil dirusak dengan virus Arthenal GSW!\n", &url);
                }
                else if (level_chose3 == '2')
                {
                    while (virus_load <= 1000)
                    {
                        printf("menunggu virus Arthenal GSW %d/500\n", virus_load);
                        virus_load++;
                    }
                    while (virus_instal <= 1000)
                    {
                        printf("menginstal virus Arthenal GSW %d/500\n", virus_instal);
                        virus_instal++;
                    }
                    while (virus_launch < 2000)
                    {
                        printf("meluncurkan virus Arthenal GSW %d/1000\n", virus_launch);
                        virus_launch++;
                    }
                    printf("\nsetengah isi website %s berhasil dirusak dengan virus Arthenal GSW!\n", &url);
                }
                else if (level_chose3 == '3')
                {
                    while (virus_load <= 2000)
                    {
                        printf("menunggu virus Arthenal GSW %d/500\n", virus_load);
                        virus_load++;
                    }
                    while (virus_instal <= 2000)
                    {
                        printf("menginstal virus Arthenal GSW %d/500\n", virus_instal);
                        virus_instal++;
                    }
                    while (virus_launch < 5000)
                    {
                        printf("meluncurkan virus Arthenal GSW %d/1000\n", virus_launch);
                        virus_launch++;
                    }
                    printf("\nsebagian besar isi website %s berhasil dirusak dengan virus Arthenal GSW!\n", &url);
                }
                else if (level_chose3 == '4')
                {
                    while (virus_load <= 5000)
                    {
                        printf("menunggu virus Arthenal GSW %d/5000\n", virus_load);
                        virus_load++;
                    }
                    while (virus_instal <= 5000)
                    {
                        printf("menginstal virus Arthenal GSW %d/5000\n", virus_instal);
                        virus_instal++;
                    }
                    while (virus_launch < 10000)
                    {
                        printf("meluncurkan virus Arthenal GSW %d/10000\n", virus_launch);
                        virus_launch++;
                    }
                    printf("\nsemua isi website %s berhasil dirusak dengan virus Arthenal GSW!\n", &url);
                }
                else
                {
                    printf("input/angka yang anda masukan salah\n");
                }
            }
            else if (viruschose1 == '2')
            {
                printf("virus E-bot\n");
                printf("dirancang oleh Alan Bekker\n");
                printf("level kerusakan sangat luar biasa\n");
                printf("deskripsi:\n");

                printf("virus E-bot adalah virus yang dulunya dirancang\n");
                printf("oleh animasi, lalu virus itu telah merusak\n");
                printf("komputer milik Alan Bekker, lalu salah satu teman\n");
                printf("yang membuatnya menghentikan virus tersebut.\n");
                printf("pada akhirnya. virus itu dibuat kembali oleh\n");
                printf("Alan Bekker\n\n");

                printf("virus ini sudah memiliki lwvwl kerusakannya sendiri. lanjutkan?\n");
                printf("(masukan nomor)\n");
                printf("%d iya\n", num1);
                printf("%d tidak\n", num2);

                scanf("%s", &yes_or_no3);
                printf("\n\n");

                if (yes_or_no3 == '1')
                {
                    while (virus_load <= 5000)
                    {
                        printf("memproses %d/5000\n", virus_load);
                        virus_load++;
                    }
                    while (virus_instal <= 8000)
                    {
                        printf("menginstal virus E-bot %d/8000\n", virus_instal);
                        virus_instal++;
                    }
                    while (virus_launch < 10000)
                    {
                        printf("meluncurkan virus E-bot %d/10000\n", virus_launch);
                        virus_launch++;
                    }
                    printf("\nsemua isi website %s berhasil dirusak dengan virus E-bot!\n", &url);
                }
                else if (yes_or_no3 == '2')
                {
                    printf("tidak? baiklah -_-\n");
                }
                else
                {
                    printf("input/angka yang anda msukan salah\n");
                }
            }
            else if (viruschose1 == '3')
            {
                printf("virus Gaster\n");
                printf("dirancang oleh W. D. Gaster\n");
                printf("level kerusakan ???\n");
                printf("deskripsi:\n\n");

                printf("sepertinya virus ini mengandung segudang misteri didalamnya.\n");
                printf("lanjutkan? sepertinya dapat merusak perangkat\n");
                printf("(masukan nomor)\n\n");
                printf("%d iya\n", num1);
                printf("%d tidak\n");
                scanf("%d", &yes_or_no2);
                printf("\n\n");
            }
            else if (viruschose1 == '4')
            {
                printf("virus GTB T11\n");
                printf("dirancang oleh Dr. Tyscall\n");
                printf("deskripsi:\n");

                printf("dulunya virus ini adalah eksperimen\n");
                printf("karena mengalami kerusakan jadi virus\n");
                printf("dibuat kembali.\n\n");

                printf("pilih level kerusakan\n");
                printf("(masukan nomor)");
                printf("%d sedikit\n", num1);
                printf("%d sedang\n", num2);
                printf("%d besar\n", num3);
                printf("%d luar biasa\n", num4);
                scanf("%s", &level_chose4);
                printf("\n\n");

                if (level_chose4 == '1')
                {
                    while (virus_load <= 500)
                    {
                        printf("menunggu virus GTB T11 %d/500\n", virus_load);
                        virus_load++;
                    }
                    while (virus_instal <= 500)
                    {
                        printf("menginstal virus GTB T11 %d/500\n", virus_instal);
                        virus_instal++;
                    }
                    while (virus_launch < 1000)
                    {
                        printf("meluncurkan virus GTB T11 %d/1000\n", virus_launch);
                        virus_launch++;
                    }
                    printf("\nsebagian isi website %s berhasil dirusak dengan virus GTB T11!\n", &url);
                }
                else if (level_chose4 == '2')
                {
                    while (virus_load <= 1000)
                    {
                        printf("menunggu virus GTB T11 %d/500\n", virus_load);
                        virus_load++;
                    }
                    while (virus_instal <= 1000)
                    {
                        printf("menginstal virus GTB T11 %d/500\n", virus_instal);
                        virus_instal++;
                    }
                    while (virus_launch < 2000)
                    {
                        printf("meluncurkan virus GTB T11 %d/1000\n", virus_launch);
                        virus_launch++;
                    }
                    printf("\nsetengah isi website %s berhasil dirusak dengan virus GTB T11!\n", &url);
                }
                else if (level_chose4 == '3')
                {
                    while (virus_load <= 2000)
                    {
                        printf("menunggu virus GTB T11 %d/500\n", virus_load);
                        virus_load++;
                    }
                    while (virus_instal <= 2000)
                    {
                        printf("menginstal virus GTB T11 %d/500\n", virus_instal);
                        virus_instal++;
                    }
                    while (virus_launch < 5000)
                    {
                        printf("meluncurkan virus GTB T11 %d/1000\n", virus_launch);
                        virus_launch++;
                    }
                    printf("\nsebagian besar isi website %s berhasil dirusak dengan virus GTB T11!\n", &url);
                }
                else if (level_chose4 == '4')
                {
                    while (virus_load <= 5000)
                    {
                        printf("menunggu virus GTB T11 %d/5000\n", virus_load);
                        virus_load++;
                    }
                    while (virus_instal <= 5000)
                    {
                        printf("menginstal virus GTB T11 %d/5000\n", virus_instal);
                        virus_instal++;
                    }
                    while (virus_launch < 10000)
                    {
                        printf("meluncurkan virus GTB T11 %d/10000\n", virus_launch);
                        virus_launch++;
                    }
                    printf("\nsemua isi website %s berhasil dirusak dengan virus GTB T11!\n", &url);
                }
                else if (viruschose1 == '5')
                {
                    printf("virus AXZ I7\n");
                    printf("dirancang oleh Arthura Graphics\n");
                    printf("deskripsi:\n");
					
					printf("dibuat oleh Arthura Graphics\n\n");
					
					printf("pilih level kerusakan\n");
					printf("(masukan nomor)\n\n");
					printf("%d sedang\n", num1);
					printf("%d besar\n", num2);
					printf("%d luar biasa\n", num3);
					scanf("%s", &level_chose5);
					printf("\n\n");
					
				    if (level_chose5 == '1')
				    {
                        while (virus_load <= 1000)
                        {
                            printf("menunggu virus AXZ I7 %d/500\n", virus_load);
                            virus_load++;
                        }
                        while (virus_instal <= 1000)
                        {
                            printf("menginstal virus AXZ I7 %d/500\n", virus_instal);
                            virus_instal++;
                        }
                        while (virus_launch < 2000)
                        {
                        printf("meluncurkan virus AXZ I7 %d/1000\n", virus_launch);
                        virus_launch++;
                        }
                        printf("\nsetengah isi website %s berhasil dirusak dengan virus AXZ I7!\n", &url);
                    }
                    else if (level_chose5 == '2')
                    {
                        while (virus_load <= 2000)
                        {
                            printf("menunggu virus AXZ I7 %d/500\n", virus_load);
                            virus_load++;
                        }
                        while (virus_instal <= 2000)
                        {
                            printf("menginstal virus AXZ I7 %d/500\n", virus_instal);
                            virus_instal++;
                        }
                        while (virus_launch < 5000)
                        {
                            printf("meluncurkan virus AXZ I7 %d/1000\n", virus_launch);
                            virus_launch++;
                        }
                        printf("\nsebagian besar isi website %s berhasil dirusak dengan virusAXZ I7!\n", &url);
                    }
                    else if (level_chose5 == '3')
                    {
                        while (virus_load <= 5000)
                        {
                            printf("menunggu virus AXZ I7 %d/5000\n", virus_load);
                            virus_load++;
                        }
                        while (virus_instal <= 5000)
                        {
                        printf("menginstal virus AXZ I7 %d/5000\n", virus_instal);
                            virus_instal++;
                        }
                        while (virus_launch < 10000)
                        {
                            printf("meluncurkan virus AXZ I7 %d/10000\n", virus_launch);
                            virus_launch++;
                        }
                        printf("\nsemua isi website %s berhasil dirusak dengan virus AXZ I7!\n", &url);
                    }
                    else
                    {
                    printf("input/angka yang anda masukan salah");
                    }
                }
                else
                {
                printf("input/angka yang anda masukan salah");
                }
            }
            else
            {
            printf("input/angka yang anda masukan salah");
            }
        }
        else
        {
            printf("input/angka yang anda masukan salah");
        }
    }
    else
    {
        printf("input/angka yang anda masukan salah");
    }
    return 0;
}