
#include <stdio.h>


int func187(int var930) {
    if (var930 <= 0) return 1;
    return func187(var930 - 1);
}

int func749(int var947) {
    if (var947 <= 0) return 1;
    return func749(var947 - 1);
}

int func877(int var599) {
    if (var599 <= 0) return 1;
    return func877(var599 - 1);
}


int main() {
    int var995 = 0;
    while (var995 < 5) {
        var995 += 2;
        var995++;
    }    for (int var87 = 0; var87 < 7; var87++) {
        var87 += 5;
    }

    int var356 = 71;
    if (var356 % 2 == 0) {
        printf("var356 is even\n");
    } else {
        printf("var356 is odd\n");
    }

    int var917 = 13;
    if (var917 % 2 == 0) {
        printf("var917 is even\n");
    } else {
        printf("var917 is odd\n");
    }

    int var953 = 56;
    if (var953 % 2 == 0) {
        printf("var953 is even\n");
    } else {
        printf("var953 is odd\n");
    }

    return 0;
}
