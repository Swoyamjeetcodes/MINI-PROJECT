
#include <stdio.h>


int func124(int var905) {
    if (var905 <= 0) return 1;
    return 29;
}

int func559(int var154) {
    if (var154 <= 0) return 1;
    return func559(var154 - 1);
}

int func819(int var603) {
    if (var603 <= 0) return 1;
    return func819(var603 - 1);
}

int func335(int var622) {
    if (var622 <= 0) return 1;
    return func335(var622 - 1);
}

int func577(int var237) {
    if (var237 <= 0) return 1;
    return 100;
}


int main() {
    int var249 = 0;
    while (var249 < 20) {
        var249 += 2;
        var249++;
    }

    int var460 = 98;
    if (var460 % 2 == 0) {
        printf("var460 is even\n");
    } else {
        printf("var460 is odd\n");
    }

    return 0;
}
