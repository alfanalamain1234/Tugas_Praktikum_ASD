#include<stdio.h>
#include<math.h>
#define N 10

float Penambahan(int A[], int B[], int x){
    int i;
    float sum=0.0;

    for(i=0;i<N;i++){
        sum+=(A[i]+B[i])*pow(x,i);
    }

    return sum;
}

float Pengurangan(int A[],int B[],int x){
    int i;
    float sum=0.0;

    for(i=0;i<N;i++){
        sum+=(A[i]-B[i])*pow(x,i);
    }
    return sum;
}

float Perkalian(int A[],int B[],int x){
    float sum=0.0;
    int i,j;

    for(i=0; i<N; i++){
        for(j=0; j<N; j++){
            sum+= A[i] * B[j] * (float) pow(x,(i+j));
        }
    }

    return sum;
}

float Penurunan(int A[],int x){
    float sum=0.0;
    int i;

    for(i=0; i<N; i++){
        sum = sum + A[i] * i * (float) pow(x,i-1);
    }

    return sum;
}

int main(){
    int P1[N]={15,0,0,1,0,5,0,8,6,0};
    int P2[N]={10,0,2,2,3,0,0,4,0,3};
    int P3[N]={5,0,1,0,0,0,0,0,0,0};
    float hasiltambah,hasilkurang,hasilkali,hasilturun;
    char lagi='y';

    do{
        int x;
        int pilih;

        system("cls");

        printf("x= ");
        scanf("%d",&x);
        printf("MENU:\n");
        printf("1.Penambahan\n");
        printf("2.Pengurangan\n");
        printf("3.Perkalian\n");
        printf("4.Penerunan\n");

        printf("Masukan Operasi:");
        scanf("%d",&pilih);

        switch(pilih){
            case 1:
                hasiltambah=Penambahan(P1,P2,x);
                printf("Hasil penambahan: %5.2f\n",hasiltambah);
                break;
            case 2:
                hasilkurang=Pengurangan(P1,P2,x);
                printf("Hasil pengurangan: %5.2f\n",hasilkurang);
                break;
            case 3:
                hasilkali=Perkalian(P1,P3,x);
                printf("Hasil perkalian: %5.2f\n",hasilkali);
                break;
            case 4:
                hasilturun=Penurunan(P2,x);
                printf("Hasil penurunan: %5.2f\n",hasilturun);
                break;
            default:
                exit(1);
        }
            fflush(stdin);
            printf("apakah ingin memasukan lagi?(y/t)");
            scanf("%c",&lagi);
            }
            while(lagi=='y'||lagi=='Y');
        }
