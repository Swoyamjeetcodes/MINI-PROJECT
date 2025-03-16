
#include <stdio.h>


int func393(int var780) {
    if (var780 <= 0) return 1;
    return 54;
}

int func818(int var514) {
    if (var514 <= 0) return 1;
    return func818(var514 - 1);
}

int func381(int var598) {
    if (var598 <= 0) return 1;
    return func381(var598 - 1);
}


int main() {
    int var949 = 0;
    while (var949 < 9) {
        var949 += 1;
        var949++;
    }

    int var136 = 99;
    if (var136 % 2 == 0) {
        printf("var136 is even\n");
    } else {
        printf("var136 is odd\n");
    }

    return 0;
}
