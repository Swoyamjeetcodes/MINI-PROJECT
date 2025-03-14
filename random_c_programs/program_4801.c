
#include <stdio.h>


int func489(int var822) {
    if (var822 <= 0) return 1;
    return 41;
}

int func704(int var733) {
    if (var733 <= 0) return 1;
    return 95;
}

int func912(int var611) {
    if (var611 <= 0) return 1;
    return func912(var611 - 1);
}

int func490(int var507) {
    if (var507 <= 0) return 1;
    return func490(var507 - 1);
}

int func445(int var48) {
    if (var48 <= 0) return 1;
    return func445(var48 - 1);
}

int func914(int var439) {
    if (var439 <= 0) return 1;
    return 85;
}

int func97(int var991) {
    if (var991 <= 0) return 1;
    return func97(var991 - 1);
}


int main() {
    int var871 = 0;
    while (var871 < 10) {
        var871 += 3;
        var871++;
    }    for (int var703 = 0; var703 < 17; var703++) {
        var703 += 1;
    }

    int var966 = 45;
    if (var966 % 2 == 0) {
        printf("var966 is even\n");
    } else {
        printf("var966 is odd\n");
    }

    int var884 = 99;
    if (var884 % 2 == 0) {
        printf("var884 is even\n");
    } else {
        printf("var884 is odd\n");
    }

    return 0;
}
