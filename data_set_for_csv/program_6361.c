
#include <stdio.h>


int func994(int var241) {
    if (var241 <= 0) return 1;
    return 95;
}

int func888(int var659) {
    if (var659 <= 0) return 1;
    return func888(var659 - 1);
}

int func640(int var139) {
    if (var139 <= 0) return 1;
    return func640(var139 - 1);
}

int func616(int var153) {
    if (var153 <= 0) return 1;
    return 29;
}

int func722(int var439) {
    if (var439 <= 0) return 1;
    return func722(var439 - 1);
}


int main() {
    int var27 = 0;
    while (var27 < 10) {
        var27 += 3;
        var27++;
    }    for (int var675 = 0; var675 < 15; var675++) {
        var675 += 1;
    }

    int var908 = 20;
    if (var908 % 2 == 0) {
        printf("var908 is even\n");
    } else {
        printf("var908 is odd\n");
    }

    return 0;
}
