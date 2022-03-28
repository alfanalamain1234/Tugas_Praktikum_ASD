#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char kata[]={'p', 'e', 'n', 's', 'i', 't'};
    char balik[strlen(kata)];
    int jumlah;
    int i, k;

    jumlah = strlen(kata);
    k = 0;
    for(i=jumlah;i>=0; i--){
        balik[k] = kata[i];
        k++;
    }

    for(i=1; i<=jumlah; i++){
        printf("%c", balik[i]);
    }
    return 0;
}
