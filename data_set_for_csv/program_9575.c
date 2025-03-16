
#include <stdio.h>


int func149(int var116) {
    if (var116 <= 0) return 1;
    return func149(var116 - 1);
}


int main() {
    int var19 = 0;
    while (var19 < 11) {
        var19 += 3;
        var19++;
    }

    int var231 = 63;
    if (var231 % 2 == 0) {
        printf("var231 is even\n");
    } else {
        printf("var231 is odd\n");
    }

    return 0;
}
