
#include <stdio.h>


int func33(int var402) {
    if (var402 <= 0) return 1;
    return func33(var402 - 1);
}

int func255(int var423) {
    if (var423 <= 0) return 1;
    return func255(var423 - 1);
}


int main() {
    for (int var786 = 0; var786 < 8; var786++) {
        var786 += 5;
    }

    int var69 = 60;
    if (var69 % 2 == 0) {
        printf("var69 is even\n");
    } else {
        printf("var69 is odd\n");
    }

    return 0;
}
