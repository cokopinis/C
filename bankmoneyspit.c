#include <stdio.h>

int penize = 1 7900;



int main() {
    if (penize > 100){
        int a = penize/5000;
        int b = penize % 5000 /2000;
        int c = penize % 5000 %2000 /1000;
        int d = penize % 5000 %2000 %1000 /500;
        int e = penize % 5000 %2000 %1000 %500 /200;
        int f = penize % 5000 %2000 %1000 %500 %200 /100;

            printf ("petitisicovek je %d\n", a);

            printf("dvoutisicovek je %d\n", b);

            printf("tisicovek je %d\n", c);

            printf("petistovek je %d\n", d);

            printf("dvojstovek je %d\n", e);

            printf("stovek je %d\n", f);
    }

   
    return 0;
}












