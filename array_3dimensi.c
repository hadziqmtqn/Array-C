#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i=0, j, k;
    int A[3][4][2] = {{{1, 2,}, { 3, 4}, {5, 6}, { 7, 8}, {9, 10}, { 11, 12}}};
    for(i=0; i<3; i++){
        for(j=0; j<4; j++){
                for(k=0; k<2; k++){
            printf("Data pada indeks ke [%i][%i][%i] adalah %i\n", i, j, k, A[i][j][k]);


                }
        }
    }
    return 0;
}
