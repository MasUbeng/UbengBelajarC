#include <stdio.h>
#include <stdbool.h>
#include <string.h>

int main(){

    /*int umur = 0;
    float harga = 0.0f;
    char nama[30] = "";

    printf ("masukkan umur kamu: ");
    scanf ("%d", &umur);
    printf ("masukkan harga apel: ");
    scanf ("%f", &harga);
    getchar();
    printf ("masukkan nama kamu: ");
    fgets (nama, sizeof(nama), stdin);
    nama[strlen(nama) -1] = '\0';

    printf ("nama kamu adalah %s\n ", nama);
    printf ("umur kamu adalah %d\n ", umur);
    printf ("harga buah apel adalah %f\n ", harga);*/

    //Program MBG
    char item[50] = "";
    int jumlah = 0;
    int harga = 0;
    char uang = '$';
    int total = 0;

    printf ("Mau beli barang apa?: ");
    fgets (item, sizeof(item), stdin);

    printf ("Berapa harga barangnya?: ");
    scanf ("%d", &harga);

    printf ("Mau beli berapa?: ");
    scanf ("%d", &jumlah);

    total = harga * jumlah;

    printf("\nKamu telah membeli %ssebanyak %d buah\n", item, jumlah);
 
    printf ("%c%d\n", uang, total);
    //https://youtu.be/xND0t1pr3KY?t=4544

    return 0;
}