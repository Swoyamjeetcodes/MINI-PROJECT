
#include <stdio.h>


int func465(int var871) {
    if (var871 <= 0) return 1;
    return func465(var871 - 1);
}


int main() {
    for (int var378 = 0; var378 < 14; var378++) {
        var378 += 5;
    }

    int var264 = 94;
    if (var264 % 2 == 0) {
        printf("var264 is even\n");
    } else {
        printf("var264 is odd\n");
    }

    return 0;
}
