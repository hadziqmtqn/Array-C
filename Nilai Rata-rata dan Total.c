#include <stdio.h>

int main(){

  int array[10], i,n;
  float rata, total=0;

  printf("Program Menghitung Nilai Rata2 Menggunakan Array\n");
  printf("Masukkan banyaknya elemen array: ");
  scanf("%d",&n);

  for(i=0; i<n; i++){
    printf("nilai ke-%d: ",i+1);
    scanf("%d", &array[i]);
    total = total + array[i];
  }

  rata = total/n;
  printf("hasil nilai total adalah: %f \n", total);
  printf("hasil rata rata adalah: %f \n", rata);

  return 0;

}
// sumber: http://www.kopicoding.com/program-menghitung-nilai-rata-rata-menggunakan-array-pada-bahasa-c/
