
#include <stdio.h>


int func4(int var18) {
    if (var18 <= 0) return 1;
    return func4(var18 - 1);
}

int func137(int var317) {
    if (var317 <= 0) return 1;
    return func137(var317 - 1);
}

int func964(int var490) {
    if (var490 <= 0) return 1;
    return func964(var490 - 1);
}

int func92(int var487) {
    if (var487 <= 0) return 1;
    return func92(var487 - 1);
}

int func640(int var709) {
    if (var709 <= 0) return 1;
    return func640(var709 - 1);
}


int main() {
    int var904 = 0;
    while (var904 < 14) {
        var904 += 4;
        var904++;
    }    for (int var610 = 0; var610 < 19; var610++) {
        var610 += 4;
    }    int var208 = 0;
    while (var208 < 20) {
        var208 += 1;
        var208++;
    }

    int var902 = 3;
    if (var902 % 2 == 0) {
        printf("var902 is even\n");
    } else {
        printf("var902 is odd\n");
    }

    int var507 = 27;
    if (var507 % 2 == 0) {
        printf("var507 is even\n");
    } else {
        printf("var507 is odd\n");
    }

    return 0;
}
