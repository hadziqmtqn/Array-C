#include <stdio.h>

int main()
{
    int banyak;
    int jumlah = 0;
    float rata;
    printf("Masukkan banyak nilai : ");
    scanf("%d", &banyak);

    for(int i = 0; i < banyak; i++) {
        int temp;
        printf("Masukkan nilai ke-%d : ", i+1);
        scanf("%d", &temp);
        jumlah += temp;
    }
    rata = (float) jumlah / banyak;

    printf("\nTotal : %d\nBanyak nilai : %d\nRata rata : %.2f\n",
           jumlah, banyak, rata);

    return 0;
}

//source:http://ng0ding.blogspot.com/2016/07/cara-mencari-nilai-rata-rata-dalam-bahasa-c.html
