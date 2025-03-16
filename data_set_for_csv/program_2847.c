
#include <stdio.h>


int func980(int var605) {
    if (var605 <= 0) return 1;
    return func980(var605 - 1);
}


int main() {
    for (int var21 = 0; var21 < 16; var21++) {
        var21 += 3;
    }

    int var472 = 16;
    if (var472 % 2 == 0) {
        printf("var472 is even\n");
    } else {
        printf("var472 is odd\n");
    }

    return 0;
}
