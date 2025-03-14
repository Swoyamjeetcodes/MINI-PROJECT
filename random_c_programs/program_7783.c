
#include <stdio.h>


int func103(int var760) {
    if (var760 <= 0) return 1;
    return func103(var760 - 1);
}

int func255(int var651) {
    if (var651 <= 0) return 1;
    return func255(var651 - 1);
}


int main() {
    for (int var55 = 0; var55 < 13; var55++) {
        var55 += 2;
    }    for (int var92 = 0; var92 < 10; var92++) {
        var92 += 3;
    }

    int var941 = 3;
    if (var941 % 2 == 0) {
        printf("var941 is even\n");
    } else {
        printf("var941 is odd\n");
    }

    int var631 = 5;
    if (var631 % 2 == 0) {
        printf("var631 is even\n");
    } else {
        printf("var631 is odd\n");
    }

    int var535 = 64;
    if (var535 % 2 == 0) {
        printf("var535 is even\n");
    } else {
        printf("var535 is odd\n");
    }

    return 0;
}
