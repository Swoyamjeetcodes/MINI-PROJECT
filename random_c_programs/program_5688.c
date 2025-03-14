
#include <stdio.h>


int func403(int var719) {
    if (var719 <= 0) return 1;
    return func403(var719 - 1);
}


int main() {
    for (int var536 = 0; var536 < 16; var536++) {
        var536 += 1;
    }

    int var979 = 90;
    if (var979 % 2 == 0) {
        printf("var979 is even\n");
    } else {
        printf("var979 is odd\n");
    }

    return 0;
}
