
#include <stdio.h>


int func427(int var119) {
    if (var119 <= 0) return 1;
    return func427(var119 - 1);
}


int main() {
    for (int var389 = 0; var389 < 12; var389++) {
        var389 += 2;
    }

    int var883 = 60;
    if (var883 % 2 == 0) {
        printf("var883 is even\n");
    } else {
        printf("var883 is odd\n");
    }

    int var300 = 62;
    if (var300 % 2 == 0) {
        printf("var300 is even\n");
    } else {
        printf("var300 is odd\n");
    }

    int var221 = 100;
    if (var221 % 2 == 0) {
        printf("var221 is even\n");
    } else {
        printf("var221 is odd\n");
    }

    return 0;
}
