
#include <stdio.h>


int func924(int var335) {
    if (var335 <= 0) return 1;
    return func924(var335 - 1);
}


int main() {
    for (int var728 = 0; var728 < 9; var728++) {
        var728 += 5;
    }    for (int var210 = 0; var210 < 11; var210++) {
        var210 += 4;
    }

    int var231 = 83;
    if (var231 % 2 == 0) {
        printf("var231 is even\n");
    } else {
        printf("var231 is odd\n");
    }

    int var917 = 97;
    if (var917 % 2 == 0) {
        printf("var917 is even\n");
    } else {
        printf("var917 is odd\n");
    }

    int var51 = 73;
    if (var51 % 2 == 0) {
        printf("var51 is even\n");
    } else {
        printf("var51 is odd\n");
    }

    return 0;
}
