
#include <stdio.h>


int func160(int var427) {
    if (var427 <= 0) return 1;
    return func160(var427 - 1);
}


int main() {
    int var421 = 0;
    while (var421 < 17) {
        var421 += 4;
        var421++;
    }    for (int var369 = 0; var369 < 9; var369++) {
        var369 += 3;
    }

    int var76 = 13;
    if (var76 % 2 == 0) {
        printf("var76 is even\n");
    } else {
        printf("var76 is odd\n");
    }

    int var179 = 44;
    if (var179 % 2 == 0) {
        printf("var179 is even\n");
    } else {
        printf("var179 is odd\n");
    }

    return 0;
}
