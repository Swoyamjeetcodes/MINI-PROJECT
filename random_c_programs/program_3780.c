
#include <stdio.h>


int func953(int var66) {
    if (var66 <= 0) return 1;
    return func953(var66 - 1);
}


int main() {
    int var127 = 0;
    while (var127 < 16) {
        var127 += 2;
        var127++;
    }    for (int var278 = 0; var278 < 13; var278++) {
        var278 += 5;
    }    for (int var981 = 0; var981 < 14; var981++) {
        var981 += 1;
    }

    int var535 = 96;
    if (var535 % 2 == 0) {
        printf("var535 is even\n");
    } else {
        printf("var535 is odd\n");
    }

    int var529 = 49;
    if (var529 % 2 == 0) {
        printf("var529 is even\n");
    } else {
        printf("var529 is odd\n");
    }

    return 0;
}
