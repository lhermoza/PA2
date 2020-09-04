#include <stdio.h> 
#include <string.h>
#include <stdlib.h>


int main(int argc, char *argv[]) {
    if (argc > 1) {
        unsigned n = atoi(argv[1]);
        unsigned short count = 0;
        while (n > 0) {
		
            count += (n % 2);//try 3, 1000
            n /= 2;
        }
        if (count % 2 == 0) {
            printf("Even-Parity\t");
        } else {
            printf("Odd-Parity\t");
        }
        printf("%hu\n", count/3);
    } else {
        printf("Error\n");
    }
}
