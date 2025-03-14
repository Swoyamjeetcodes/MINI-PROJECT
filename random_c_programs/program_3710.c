
#include <stdio.h>


int func239(int var523) {
    if (var523 <= 0) return 1;
    return func239(var523 - 1);
}


int main() {
    for (int var434 = 0; var434 < 9; var434++) {
        var434 += 4;
    }

    int var99 = 45;
    if (var99 % 2 == 0) {
        printf("var99 is even\n");
    } else {
        printf("var99 is odd\n");
    }

    int var264 = 3;
    if (var264 % 2 == 0) {
        printf("var264 is even\n");
    } else {
        printf("var264 is odd\n");
    }

    return 0;
}
