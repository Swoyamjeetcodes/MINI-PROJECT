
#include <stdio.h>


int func262(int var27) {
    if (var27 <= 0) return 1;
    return func262(var27 - 1);
}


int main() {
    int var622 = 0;
    while (var622 < 10) {
        var622 += 3;
        var622++;
    }    int var307 = 0;
    while (var307 < 7) {
        var307 += 2;
        var307++;
    }

    int var721 = 8;
    if (var721 % 2 == 0) {
        printf("var721 is even\n");
    } else {
        printf("var721 is odd\n");
    }

    int var897 = 67;
    if (var897 % 2 == 0) {
        printf("var897 is even\n");
    } else {
        printf("var897 is odd\n");
    }

    return 0;
}
