
#include <stdio.h>


int func697(int var520) {
    if (var520 <= 0) return 1;
    return func697(var520 - 1);
}


int main() {
    for (int var200 = 0; var200 < 11; var200++) {
        var200 += 4;
    }

    int var369 = 44;
    if (var369 % 2 == 0) {
        printf("var369 is even\n");
    } else {
        printf("var369 is odd\n");
    }

    int var265 = 16;
    if (var265 % 2 == 0) {
        printf("var265 is even\n");
    } else {
        printf("var265 is odd\n");
    }

    return 0;
}
