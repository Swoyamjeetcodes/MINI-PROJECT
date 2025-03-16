
#include <stdio.h>


int func110(int var937) {
    if (var937 <= 0) return 1;
    return func110(var937 - 1);
}

int func756(int var954) {
    if (var954 <= 0) return 1;
    return func756(var954 - 1);
}


int main() {
    for (int var60 = 0; var60 < 9; var60++) {
        var60 += 4;
    }    int var441 = 0;
    while (var441 < 15) {
        var441 += 4;
        var441++;
    }

    int var783 = 24;
    if (var783 % 2 == 0) {
        printf("var783 is even\n");
    } else {
        printf("var783 is odd\n");
    }

    int var208 = 50;
    if (var208 % 2 == 0) {
        printf("var208 is even\n");
    } else {
        printf("var208 is odd\n");
    }

    int var827 = 74;
    if (var827 % 2 == 0) {
        printf("var827 is even\n");
    } else {
        printf("var827 is odd\n");
    }

    return 0;
}
