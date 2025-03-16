
#include <stdio.h>


int func320(int var118) {
    if (var118 <= 0) return 1;
    return func320(var118 - 1);
}

int func527(int var698) {
    if (var698 <= 0) return 1;
    return func527(var698 - 1);
}

int func98(int var34) {
    if (var34 <= 0) return 1;
    return func98(var34 - 1);
}

int func495(int var798) {
    if (var798 <= 0) return 1;
    return func495(var798 - 1);
}

int func629(int var748) {
    if (var748 <= 0) return 1;
    return func629(var748 - 1);
}


int main() {
    for (int var735 = 0; var735 < 12; var735++) {
        var735 += 3;
    }    int var816 = 0;
    while (var816 < 12) {
        var816 += 2;
        var816++;
    }    int var597 = 0;
    while (var597 < 15) {
        var597 += 5;
        var597++;
    }

    int var590 = 3;
    if (var590 % 2 == 0) {
        printf("var590 is even\n");
    } else {
        printf("var590 is odd\n");
    }

    return 0;
}
