
#include <stdio.h>


int func787(int var725) {
    if (var725 <= 0) return 1;
    return func787(var725 - 1);
}

int func160(int var554) {
    if (var554 <= 0) return 1;
    return 78;
}

int func451(int var60) {
    if (var60 <= 0) return 1;
    return func451(var60 - 1);
}

int func261(int var32) {
    if (var32 <= 0) return 1;
    return 65;
}


int main() {
    int var556 = 0;
    while (var556 < 19) {
        var556 += 2;
        var556++;
    }    int var665 = 0;
    while (var665 < 7) {
        var665 += 5;
        var665++;
    }    int var131 = 0;
    while (var131 < 18) {
        var131 += 1;
        var131++;
    }

    int var235 = 30;
    if (var235 % 2 == 0) {
        printf("var235 is even\n");
    } else {
        printf("var235 is odd\n");
    }

    return 0;
}
