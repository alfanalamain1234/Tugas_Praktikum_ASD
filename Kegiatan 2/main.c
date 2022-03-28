#include <stdio.h>

//pertambahan,perkalian,pengurangan
void semua(int m, int n){

  int i, j,matriks1[10][10], matriks2[10][10], hasilPertambahan[10][10],hasilPengurangan[10][10],hasilPerkalian[10][10];
  for (i = 0; i < m; i++)
  {
    for (j = 0; j < n; j++)
    {
      scanf("%d",&matriks1[i][j]);
    }
  }
  printf("Masukkan elemen matrix kedua: \n");
  for (i = 0; i < m; i++)
  {
    for (j = 0; j < n; j++)
    {
      scanf("%d",&matriks2[i][j]);
    }
  }
  printf("hasil penjumlahan matrix: \n");
  for (i = 0; i < m; i++)
  {
    for (j = 0; j < n; j++)
    {
      hasilPertambahan[i][j] = matriks1[i][j] + matriks2[i][j];
      printf("%d \t", hasilPertambahan[i][j]);
    }
    printf("\n");
  }
  printf("hasil pengurangan matrix: \n");
  for (i = 0; i < m; i++)
  {
    for (j = 0; j < n; j++)
    {
      hasilPengurangan[i][j] = matriks1[i][j] - matriks2[i][j];
      printf("%d \t", hasilPengurangan[i][j]);
    }
    printf("\n");
  }
  printf("hasil perkalian matrix: \n");
  for (i = 0; i < m; i++)
  {
    for (j = 0; j < n; j++)
    {
      hasilPerkalian[i][j] = matriks1[i][j] * matriks2[i][j];
      printf("%d \t", hasilPerkalian[i][j]);
    }
    printf("\n");
  }

}

int main()
{
  int n,m;
  printf("Masukkan jumlah baris matriks: ");
  scanf("%d", &m);
  printf("Masukkan jumlah kolom matriks: ");
  scanf("%d", &n);
  semua(m,n);
}
