
#include <stdio.h>


int func979(int var846) {
    if (var846 <= 0) return 1;
    return func979(var846 - 1);
}


int main() {
    for (int var491 = 0; var491 < 18; var491++) {
        var491 += 1;
    }

    int var657 = 28;
    if (var657 % 2 == 0) {
        printf("var657 is even\n");
    } else {
        printf("var657 is odd\n");
    }

    int var917 = 100;
    if (var917 % 2 == 0) {
        printf("var917 is even\n");
    } else {
        printf("var917 is odd\n");
    }

    return 0;
}
