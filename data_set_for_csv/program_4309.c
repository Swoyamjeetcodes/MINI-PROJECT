
#include <stdio.h>


int func527(int var137) {
    if (var137 <= 0) return 1;
    return func527(var137 - 1);
}


int main() {
    for (int var891 = 0; var891 < 14; var891++) {
        var891 += 1;
    }

    int var623 = 4;
    if (var623 % 2 == 0) {
        printf("var623 is even\n");
    } else {
        printf("var623 is odd\n");
    }

    int var464 = 97;
    if (var464 % 2 == 0) {
        printf("var464 is even\n");
    } else {
        printf("var464 is odd\n");
    }

    return 0;
}
