
#include <stdio.h>


int func320(int var997) {
    if (var997 <= 0) return 1;
    return func320(var997 - 1);
}

int func920(int var788) {
    if (var788 <= 0) return 1;
    return func920(var788 - 1);
}


int main() {
    for (int var494 = 0; var494 < 8; var494++) {
        var494 += 5;
    }    for (int var105 = 0; var105 < 19; var105++) {
        var105 += 5;
    }

    int var169 = 38;
    if (var169 % 2 == 0) {
        printf("var169 is even\n");
    } else {
        printf("var169 is odd\n");
    }

    return 0;
}
