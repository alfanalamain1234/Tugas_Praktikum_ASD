#include <stdio.h>
#include <math.h>

typedef struct {
    float real;
    float im
} complex;

complex tam(complex a, complex b){
    complex hasil;
    hasil.real = a.real + b.real;
    hasil.im = a.im + b.im;
    return hasil;
}

complex min(complex a, complex b){
    complex hasil;
    hasil.real = a.real - b.real;
    hasil.im = a.im - b.im;
    return hasil;
}

complex mul(complex a, complex b){
    complex hasil;
    hasil.real = a.real * b.real - a.im * b.im;
    hasil.im = a.real * b.im + a.im * b.real;
    return hasil;
}

complex div(complex a, complex b){
    complex hasil;
    hasil.real = (a.real * b.real + a.im * b.im)/(pow(a.real,2)+pow(a.im,2));
    hasil.im = (a.im * b.real - a.real * b.im)/(pow(b.real,2)+pow(b.im,2));
    return hasil;
}

int main() {
    complex k1,k2,hasil;
    printf("Masukkan k1 =");
    scanf("%f %f", &k1.real, &k1.im);
    printf("Masukkan k2 =");
    scanf("%f %f", &k2.real, &k2.im);
    hasil = tam(k1,k2);
    printf("Hasil k1 + k2 = %5.2f + %5.2fi", hasil.real, hasil.im);
    hasil = min(k1,k2);
    printf("\nHasil k1 - k2 = %5.2f + %5.2fi", hasil.real, hasil.im);
    hasil = mul(k1,k2);
    printf("\nHasil k1 * k2 = %5.2f + %5.2fi", hasil.real, hasil.im);
    hasil = div(k1,k2);
    printf("\nHasil k1 / k2 = %5.2f + %5.2fi", hasil.real, hasil.im);
}
