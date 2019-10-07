#include <stdio.h>
#include <stdlib.h>

void selection(int data[],int banyak);
void input(int data[], int banyak);
void output(int data[], int banyak);

int main()
{
    printf("Sorting Meenggunakan selection sort\n");

    int data[50];
    int banyak;
    printf("Input batas datanya: "); scanf("%d",&banyak);
    input(data,banyak); //pemanggilan prosedur input
    puts("\nData Sebelum disorting: ");
    output(data,banyak); //pemanggilan prosedur output
    puts("\nData Sesudah disorting: ");
    selection(data,banyak); //pemanggilan prosedur selection untuk mensorting data
    output(data,banyak); //pemanggilan prosedur output

    return 0;
}

void selection(int data[], int banyak)
{
    //sorting secara asceding
    int i,j,index;
    int temp=0;
    for(i=0;i<banyak;i++){
        index=i;
        for(j=i;j<banyak;j++){
            if(data[index]>data[j]){  //jika descending maka tinggal kalian ubah tanda > menjadi <
                index=j;
            }
        }
        //proses swapnya
        temp=data[index];
        data[index]=data[i];
        data[i]=temp;
    }
}
//prosedur input digunakan untuk menginput data
void input(int data[], int banyak)
{
    int i;
    for(i=0;i<banyak;i++){
        printf("Input Indeks %d = ",i+1);
        scanf("%d",&data[i]);
    }
}
//prosedur output digunakan untuk mengoutput data
void output(int data[], int banyak)
{
    int i;
    for(i=0;i<banyak;i++){
        printf("%d ",data[i]);
    }
}

// sumber: http://student.blog.dinus.ac.id/fachrulmustofa/2018/06/05/selection-sort-pengertian-contoh-program-dengan-bahasa-c/
