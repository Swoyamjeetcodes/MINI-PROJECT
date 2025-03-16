
#include <stdio.h>


int func604(int var18) {
    if (var18 <= 0) return 1;
    return func604(var18 - 1);
}

int func409(int var837) {
    if (var837 <= 0) return 1;
    return 47;
}


int main() {
    for (int var433 = 0; var433 < 6; var433++) {
        var433 += 2;
    }    for (int var507 = 0; var507 < 5; var507++) {
        var507 += 1;
    }    int var465 = 0;
    while (var465 < 12) {
        var465 += 3;
        var465++;
    }

    int var307 = 68;
    if (var307 % 2 == 0) {
        printf("var307 is even\n");
    } else {
        printf("var307 is odd\n");
    }

    int var648 = 13;
    if (var648 % 2 == 0) {
        printf("var648 is even\n");
    } else {
        printf("var648 is odd\n");
    }

    int var364 = 63;
    if (var364 % 2 == 0) {
        printf("var364 is even\n");
    } else {
        printf("var364 is odd\n");
    }

    return 0;
}
