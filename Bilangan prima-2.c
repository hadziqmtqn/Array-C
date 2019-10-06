#include<stdio.h>
int main() {
 int bilangan, angka, stat;

 printf("--- Program Penentu Bilangan Prima atau Bukan ---");
 printf("\n________________________________________________");
 printf("\nMasukkan bilangan: ");
 scanf("%d", &bilangan);

 if(bilangan <= 1) {
  printf("Masukkan angka lebih dari 1.");
 }else{
  if(bilangan == 2){
   printf("%d merupakan bilangan prima.", bilangan);
  }else{
   for(angka=2; angka<bilangan; angka++){
    if(bilangan %angka == 0){
     stat = 0;
     break;
    }else{
     stat = 1;
    }
   }

   if(stat == 0){
    printf("%d merupakan bukan bilangan prima.\n", bilangan);
   }else{
    printf("%d merupakan bilangan prima.", bilangan);
   }
  }
 }
}
//sumber https://www.aneiqbal.com/2017/03/program-angka-prima-bahasa-c.html
