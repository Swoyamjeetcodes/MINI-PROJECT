
#include <stdio.h>


int func5(int var236) {
    if (var236 <= 0) return 1;
    return func5(var236 - 1);
}


int main() {
    int var970 = 0;
    while (var970 < 15) {
        var970 += 4;
        var970++;
    }    int var418 = 0;
    while (var418 < 13) {
        var418 += 2;
        var418++;
    }

    int var247 = 46;
    if (var247 % 2 == 0) {
        printf("var247 is even\n");
    } else {
        printf("var247 is odd\n");
    }

    int var126 = 92;
    if (var126 % 2 == 0) {
        printf("var126 is even\n");
    } else {
        printf("var126 is odd\n");
    }

    return 0;
}
