
#include <stdio.h>


int func687(int var730) {
    if (var730 <= 0) return 1;
    return 53;
}

int func450(int var628) {
    if (var628 <= 0) return 1;
    return func450(var628 - 1);
}

int func736(int var788) {
    if (var788 <= 0) return 1;
    return func736(var788 - 1);
}

int func360(int var516) {
    if (var516 <= 0) return 1;
    return 9;
}

int func249(int var507) {
    if (var507 <= 0) return 1;
    return func249(var507 - 1);
}


int main() {
    for (int var908 = 0; var908 < 7; var908++) {
        var908 += 4;
    }    int var332 = 0;
    while (var332 < 11) {
        var332 += 4;
        var332++;
    }    for (int var19 = 0; var19 < 14; var19++) {
        var19 += 1;
    }

    int var438 = 17;
    if (var438 % 2 == 0) {
        printf("var438 is even\n");
    } else {
        printf("var438 is odd\n");
    }

    int var1000 = 80;
    if (var1000 % 2 == 0) {
        printf("var1000 is even\n");
    } else {
        printf("var1000 is odd\n");
    }

    return 0;
}
