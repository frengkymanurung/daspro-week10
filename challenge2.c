/* Nama : Frengky Manurung
   NIM  : 13321005
   Kelas: D3TK1
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{

    int **a, **b;
    int i, j, x, y, **hasil;
    printf("Masukan jumlah dari baris array: ");
    scanf("%d", &x);
    printf("Masukan jumlah dari kolom array: ");
    scanf("%d", &y);
    a = (int **)malloc(x * sizeof(int *));
    b = (int **)malloc(x * sizeof(int *));
    hasil = (int **)malloc(x * sizeof(int *));
    printf("masukkan elemen pertama array:\n");
    for (i = 0; i < x; i++)
    {
        a[i] = (int *)malloc(y * sizeof(int *));
        b[i] = (int *)malloc(y * sizeof(int *));
        hasil[i] = (int *)malloc(y * sizeof(int *));
    }
    for (i = 0; i < x; i++)
    {
        for (j = 0; j < y; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    printf("Masukkan elemen kedua array:\n");
    for (i = 0; i < x; i++)
    {
        for (j = 0; j < y; j++)
        {
            scanf("%d", &b[i][j]);
        }
    }
    printf("Maka penjumlahan dari (a+b) array:\n");
    for (i = 0; i < x; i++)
    {
        for (j = 0; j < y; j++)
        {
            hasil[i][j] = a[i][j] + b[i][j];
            printf("%d ", hasil[i][j]);
        }
        printf("\n");
    }
    system("pause");
    return 0;
}
