
#include <stdio.h>


int func963(int var779) {
    if (var779 <= 0) return 1;
    return func963(var779 - 1);
}

int func571(int var388) {
    if (var388 <= 0) return 1;
    return func571(var388 - 1);
}

int func702(int var693) {
    if (var693 <= 0) return 1;
    return func702(var693 - 1);
}

int func916(int var992) {
    if (var992 <= 0) return 1;
    return func916(var992 - 1);
}


int main() {
    for (int var212 = 0; var212 < 10; var212++) {
        var212 += 2;
    }    int var929 = 0;
    while (var929 < 13) {
        var929 += 4;
        var929++;
    }    int var863 = 0;
    while (var863 < 19) {
        var863 += 5;
        var863++;
    }    for (int var188 = 0; var188 < 18; var188++) {
        var188 += 1;
    }    for (int var804 = 0; var804 < 9; var804++) {
        var804 += 4;
    }    for (int var173 = 0; var173 < 19; var173++) {
        var173 += 2;
    }

    int var996 = 35;
    if (var996 % 2 == 0) {
        printf("var996 is even\n");
    } else {
        printf("var996 is odd\n");
    }

    int var951 = 29;
    if (var951 % 2 == 0) {
        printf("var951 is even\n");
    } else {
        printf("var951 is odd\n");
    }

    int var934 = 98;
    if (var934 % 2 == 0) {
        printf("var934 is even\n");
    } else {
        printf("var934 is odd\n");
    }

    return 0;
}
