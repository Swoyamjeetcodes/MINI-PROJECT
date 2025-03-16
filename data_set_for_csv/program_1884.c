
#include <stdio.h>


int func255(int var55) {
    if (var55 <= 0) return 1;
    return func255(var55 - 1);
}


int main() {
    for (int var3 = 0; var3 < 16; var3++) {
        var3 += 4;
    }

    int var974 = 61;
    if (var974 % 2 == 0) {
        printf("var974 is even\n");
    } else {
        printf("var974 is odd\n");
    }

    return 0;
}
