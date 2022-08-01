/* Nama : Frengky Manurung
   NIM  : 13321005
   Kelas: D3TK1
*/

#include<stdio.h>
#include<stdlib.h>

int array_a[3][3]={
    {9,5,3},
    {6,7,6},
    {4,5,1}
};
int array_b[3][3]={
    {5,3,6},
    {2,9,3},
    {4,3,8}
};

    int angka[3][3];
    int i,j;

    int main (){
      printf("array a : \n");
      i = 0;
      while (i<3){
        j = 0;
      while (j<3){
        printf ("[%d]", array_a[i][j]);
        j++;
      }
      printf ("\n");
      i++;
      }

      printf ("array b : \n");
      i = 0;
      while ( i < 3){
        j = 0;
      while (j < 3){
        printf ("[%d]", array_b[i][j]);
        j++;
      }
      printf ("\n");
      i++;
      }
      
      printf ("Hasil penjumlahan array : \n");
      i = 0;
      while (i<3){
        j = 0;
        while (j<3){
            angka[i][j] = array_a[i][j]+array_b[i][j];
            printf ("[%d]", angka[i][j]);
            j++;
        }
        printf ("\n");
        i++;
      }
    return 0;
    }