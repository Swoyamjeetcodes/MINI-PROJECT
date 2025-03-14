
#include <stdio.h>


int func739(int var991) {
    if (var991 <= 0) return 1;
    return 36;
}

int func589(int var827) {
    if (var827 <= 0) return 1;
    return func589(var827 - 1);
}


int main() {
    for (int var687 = 0; var687 < 7; var687++) {
        var687 += 2;
    }    for (int var714 = 0; var714 < 8; var714++) {
        var714 += 4;
    }    int var207 = 0;
    while (var207 < 14) {
        var207 += 3;
        var207++;
    }

    int var23 = 11;
    if (var23 % 2 == 0) {
        printf("var23 is even\n");
    } else {
        printf("var23 is odd\n");
    }

    return 0;
}
