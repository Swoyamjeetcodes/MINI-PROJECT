
#include <stdio.h>


int func843(int var646) {
    if (var646 <= 0) return 1;
    return func843(var646 - 1);
}


int main() {
    for (int var532 = 0; var532 < 16; var532++) {
        var532 += 3;
    }    for (int var307 = 0; var307 < 8; var307++) {
        var307 += 5;
    }

    int var57 = 48;
    if (var57 % 2 == 0) {
        printf("var57 is even\n");
    } else {
        printf("var57 is odd\n");
    }

    int var134 = 23;
    if (var134 % 2 == 0) {
        printf("var134 is even\n");
    } else {
        printf("var134 is odd\n");
    }

    return 0;
}
