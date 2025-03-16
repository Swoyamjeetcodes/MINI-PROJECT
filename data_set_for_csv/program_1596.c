
#include <stdio.h>


int func63(int var227) {
    if (var227 <= 0) return 1;
    return func63(var227 - 1);
}

int func496(int var563) {
    if (var563 <= 0) return 1;
    return 54;
}

int func813(int var10) {
    if (var10 <= 0) return 1;
    return 74;
}

int func532(int var135) {
    if (var135 <= 0) return 1;
    return func532(var135 - 1);
}


int main() {
    for (int var408 = 0; var408 < 12; var408++) {
        var408 += 5;
    }

    int var216 = 22;
    if (var216 % 2 == 0) {
        printf("var216 is even\n");
    } else {
        printf("var216 is odd\n");
    }

    return 0;
}
