#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
/*
    float nilaikonversi;
    int nilai;

    printf("Konversi Satuan Jumlah (Dari)");
    printf("\n1. Gross");
    printf("\n2. Lusin");
    printf("\n3. Rim");
    printf("\nMau konversi kemana? ");
    scanf("%d" , &nilai);
    printf("Masukkan nilai konversi : ");
    scanf("%f" , &nilaikonversi);
    printf("Konversi (Dari-Ke)");
    printf("\n1. Gross-Lusin");
    printf("\n1. Gross-Rim");
    switch(nilai){
        case '1' :
            printf("");
            break;



    }

 */
 /*
    int konversawal, konversakhir;
    float gross;
    float lusin;
    float rim;
    float hasil;
    float nilai;
    gross = 144;
    lusin = 12;
    rim = 500;
    printf(" Konversi Satuan Jumlah (Dari)\n 1. Gross\n 2. Lusin\n 3. Rim\n");
    printf(" Mau konversi kemana? ");
    scanf("%d", &konversawal);
    fflush(stdin);
    switch(konversawal){
        case 1 : printf(" Masukan nilai konversi : ");
                 scanf("%f", &nilai);
                 fflush(stdin);
                 printf(" Konversi (Dari-ke)\n 1. Gross-Lusin\n 2. Gross-Rim\n");
                 printf(" Mau konversi kemana? ");
                 scanf("%d", &konversakhir);
                 fflush(stdin);
                 if(konversakhir == 1){
                    gross = gross*nilai;
                    hasil = gross/lusin;
                 }
                 else if(konversakhir == 2){
                    gross = gross*nilai;
                    hasil = gross/rim;
                 }
                 break;
        case 2 : printf(" Masukan nilai konversi : ");
                 scanf("%f", &nilai);
                 fflush(stdin);
                 printf(" Konversi (Dari-ke)\n 1. Lusin-Gross\n 2. Lusin-Rim\n");
                 printf(" Mau konversi kemana? ");
                 scanf("%d", &konversakhir);
                 fflush(stdin);
                 if(konversakhir == 1){
                    lusin = lusin*nilai;
                    hasil = lusin/gross;
                 }
                 else if(konversakhir == 2){
                    lusin = lusin*nilai;
                    hasil = lusin/rim;
                 }
                 break;
        case 3 : printf(" Masukan nilai konversi : ");
                 scanf("%f", &nilai);
                 fflush(stdin);
                 printf(" Konversi (Dari-ke)\n 1. Rim-Lusin\n 2. Rim-Gross\n");
                 printf(" Mau konversi kemana? ");
                 scanf("%d", &konversakhir);
                 fflush(stdin);
                 if(konversakhir == 1){
                    rim = rim*nilai;
                    hasil = rim/lusin;
                 }
                 else if(konversakhir == 2){
                    rim = rim*nilai;
                    hasil = rim/gross;
                 }
                 break;
    }
    printf(" Hasilnya adalah %.2f", hasil);

/*
*/
/*
/////JURNAL/////

    int A, B, C;
    printf("Masukkan 3 angka:");
    scanf("%d %d %d", &A, &B, &C);
    if(A == B && B == C)
        printf("Nilai ketiga angka yang di inputkan sama");
    else {
            printf("Nilai ketiga angka yang diinputkan berbeda\n");
        if(A<B && A<C)
            printf("Angka yang paling kecil adalah %d\n", A);
        if(B<A && B<C)
            printf("Angka yang paling kecil adalah %d\n", B);
        if(C<A && C<B)
            printf("Angka yang paling kecil adalah %d\n", C);
        if(A>B && A>C)
            printf("Angka yang paling besar adalah %d\n", A);
        if(B>A && B>C)
            printf("Angka yang paling besar adalah %d\n", B);
        if(C>A && C>B)
            printf("Angka yang paling besar adalah %d\n", C);
        }
*/

    int nim, nilai;
    char nama[50], kelas[50], jurusan[50], index;
    printf("Masukan Biodata!\n");
    printf("Masukan Nama           :");
    fgets(nama, 50, stdin);
    strtok(nama, "\n");
    fflush(stdin);
    printf("Masukan NIM            :");
    scanf("%d", &nim);
    fflush(stdin);
    printf("Masukan Kelas          :");
    fgets(kelas, 50, stdin);
    strtok(kelas, "\n");
    printf("Masukan Jurusan        :");
    fgets(jurusan, 50, stdin);
    strtok(jurusan, "\n");
    fflush(stdin);
    printf("Masukan nilai Kalkulus :");
    scanf("%d", &nilai);
    switch(nilai)
    {
        case 80 ... 100: index='A'; break;
        case 60 ... 79: index='B'; break;
        case 40 ... 59: index='C'; break;
        case 10 ... 39: index='D'; break;
        default: index='E';
    }
    printf("\n\n");
    if(index !='E' && index !='D') printf("Selamat kepada Anda dibawah ini: \n");
    else printf("Mohon maaf kepada Anda dibawah ini: \n");
    printf("Nama    : %s\n", nama);
    printf("NIM     : %d\n", nim);
    printf("Kelas   : %s\n", kelas);
    printf("Jurusan : %s\n", jurusan);
    if(index != 'E' && index != 'D') printf("Anda telah lulus Kalkulus dengan Index: %c\n", index);
    else printf("Anda belum lulus Kalkulus dengan Index: %c\n", index);


///// TA /////
/*
    int Numb1, Numb2, nim, hasil;
    char Operator, nama[50];

    printf("Masukkan Nama : ");
    fgets(nama,50,stdin);
    printf("Masukkan NIM : ");
    scanf("%d", &nim);
    printf("Masukkan Operator : ");
    fflush(stdin);
    scanf("%s", &Operator);

    if(Operator == '+') {
        printf("numb 1 : ");
        scanf("%d", &Numb1);
        printf("numb 2 : ");
        scanf("%d", &Numb2);
        hasil = Numb1 + Numb2;
        printf("=====OUTPUT=====\n");
        printf("%d + %d = %d", Numb1, Numb2, hasil);
    }
    else if(Operator == '-') {
        printf("numb 1 : ");
        scanf("%d", &Numb1);
        printf("numb 2 : ");
        scanf("%d", &Numb2);
        hasil = Numb1 - Numb2;
        printf("=====OUTPUT=====\n");
        printf("%d - %d = %d", Numb1, Numb2, hasil);
    }
    else if(Operator == '*') {
        printf("numb 1 : ");
        scanf("%d", &Numb1);
        printf("numb 2 : ");
        scanf("%d", &Numb2);
        hasil = Numb1 * Numb2;
        printf("=====OUTPUT=====\n");
        printf("%d x %d = %d", Numb1, Numb2, hasil);
    }
    else if(Operator == '/') {
        printf("numb 1 : ");
        scanf("%d", &Numb1);
        printf("numb 2 : ");
        scanf("%d", &Numb2);
        hasil = Numb1 / Numb2;
        printf("=====OUTPUT=====\n");
        printf("%d / %d = %d", Numb1, Numb2, hasil);
    }
    else if(Operator == '%') {
        printf("numb 1 : ");
        scanf("%d", &Numb1);
        printf("numb 2 : ");
        scanf("%d", &Numb2);
        hasil = Numb1 % Numb2;
        printf("=====OUTPUT=====\n");
        printf("%d Mod %d = %d", Numb1, Numb2, hasil);
    }
    else
    {
        printf("numb 1 : ");
        scanf("%d", &Numb1);
        printf("numb 2 : ");
        scanf("%d", &Numb2);
        printf("=====OUTPUT=====\n");
        printf("Operator tidak ada di kalkulator");
    }
*/
    return 0;
}
