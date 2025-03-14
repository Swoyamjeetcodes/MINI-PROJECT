
#include <stdio.h>


int func337(int var802) {
    if (var802 <= 0) return 1;
    return func337(var802 - 1);
}


int main() {
    for (int var110 = 0; var110 < 15; var110++) {
        var110 += 2;
    }

    int var788 = 73;
    if (var788 % 2 == 0) {
        printf("var788 is even\n");
    } else {
        printf("var788 is odd\n");
    }

    return 0;
}
