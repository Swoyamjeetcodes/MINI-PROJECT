
#include <stdio.h>


int func167(int var103) {
    if (var103 <= 0) return 1;
    return func167(var103 - 1);
}


int main() {
    for (int var37 = 0; var37 < 16; var37++) {
        var37 += 3;
    }    int var324 = 0;
    while (var324 < 14) {
        var324 += 1;
        var324++;
    }

    int var194 = 53;
    if (var194 % 2 == 0) {
        printf("var194 is even\n");
    } else {
        printf("var194 is odd\n");
    }

    int var450 = 49;
    if (var450 % 2 == 0) {
        printf("var450 is even\n");
    } else {
        printf("var450 is odd\n");
    }

    return 0;
}
