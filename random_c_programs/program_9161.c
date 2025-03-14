
#include <stdio.h>


int func187(int var536) {
    if (var536 <= 0) return 1;
    return func187(var536 - 1);
}


int main() {
    for (int var49 = 0; var49 < 14; var49++) {
        var49 += 1;
    }

    int var580 = 38;
    if (var580 % 2 == 0) {
        printf("var580 is even\n");
    } else {
        printf("var580 is odd\n");
    }

    return 0;
}
