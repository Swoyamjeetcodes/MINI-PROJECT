
#include <stdio.h>


int func124(int var48) {
    if (var48 <= 0) return 1;
    return func124(var48 - 1);
}

int func157(int var897) {
    if (var897 <= 0) return 1;
    return func157(var897 - 1);
}

int func660(int var747) {
    if (var747 <= 0) return 1;
    return 46;
}

int func291(int var905) {
    if (var905 <= 0) return 1;
    return 49;
}

int func741(int var402) {
    if (var402 <= 0) return 1;
    return func741(var402 - 1);
}


int main() {
    int var179 = 0;
    while (var179 < 6) {
        var179 += 5;
        var179++;
    }

    int var654 = 63;
    if (var654 % 2 == 0) {
        printf("var654 is even\n");
    } else {
        printf("var654 is odd\n");
    }

    int var146 = 85;
    if (var146 % 2 == 0) {
        printf("var146 is even\n");
    } else {
        printf("var146 is odd\n");
    }

    int var680 = 44;
    if (var680 % 2 == 0) {
        printf("var680 is even\n");
    } else {
        printf("var680 is odd\n");
    }

    return 0;
}
