
#include <stdio.h>


int func929(int var816) {
    if (var816 <= 0) return 1;
    return func929(var816 - 1);
}


int main() {
    for (int var80 = 0; var80 < 8; var80++) {
        var80 += 1;
    }

    int var717 = 26;
    if (var717 % 2 == 0) {
        printf("var717 is even\n");
    } else {
        printf("var717 is odd\n");
    }

    return 0;
}
