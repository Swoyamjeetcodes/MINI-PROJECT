
#include <stdio.h>


int func979(int var487) {
    if (var487 <= 0) return 1;
    return 42;
}

int func539(int var349) {
    if (var349 <= 0) return 1;
    return func539(var349 - 1);
}


int main() {
    for (int var671 = 0; var671 < 18; var671++) {
        var671 += 2;
    }    for (int var537 = 0; var537 < 13; var537++) {
        var537 += 5;
    }    int var946 = 0;
    while (var946 < 8) {
        var946 += 3;
        var946++;
    }    int var890 = 0;
    while (var890 < 9) {
        var890 += 1;
        var890++;
    }

    int var885 = 11;
    if (var885 % 2 == 0) {
        printf("var885 is even\n");
    } else {
        printf("var885 is odd\n");
    }

    int var228 = 3;
    if (var228 % 2 == 0) {
        printf("var228 is even\n");
    } else {
        printf("var228 is odd\n");
    }

    int var598 = 61;
    if (var598 % 2 == 0) {
        printf("var598 is even\n");
    } else {
        printf("var598 is odd\n");
    }

    int var392 = 90;
    if (var392 % 2 == 0) {
        printf("var392 is even\n");
    } else {
        printf("var392 is odd\n");
    }

    return 0;
}
