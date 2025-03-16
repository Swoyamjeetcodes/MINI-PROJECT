
#include <stdio.h>


int func615(int var437) {
    if (var437 <= 0) return 1;
    return func615(var437 - 1);
}


int main() {
    for (int var452 = 0; var452 < 10; var452++) {
        var452 += 2;
    }    for (int var581 = 0; var581 < 9; var581++) {
        var581 += 1;
    }

    int var507 = 65;
    if (var507 % 2 == 0) {
        printf("var507 is even\n");
    } else {
        printf("var507 is odd\n");
    }

    int var16 = 73;
    if (var16 % 2 == 0) {
        printf("var16 is even\n");
    } else {
        printf("var16 is odd\n");
    }

    return 0;
}
