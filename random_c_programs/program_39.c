
#include <stdio.h>


int func944(int var58) {
    if (var58 <= 0) return 1;
    return 45;
}

int func874(int var409) {
    if (var409 <= 0) return 1;
    return func874(var409 - 1);
}

int func195(int var51) {
    if (var51 <= 0) return 1;
    return func195(var51 - 1);
}


int main() {
    for (int var988 = 0; var988 < 7; var988++) {
        var988 += 3;
    }    int var264 = 0;
    while (var264 < 6) {
        var264 += 3;
        var264++;
    }

    int var823 = 77;
    if (var823 % 2 == 0) {
        printf("var823 is even\n");
    } else {
        printf("var823 is odd\n");
    }

    return 0;
}
