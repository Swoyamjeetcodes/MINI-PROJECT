
#include <stdio.h>


int func26(int var231) {
    if (var231 <= 0) return 1;
    return func26(var231 - 1);
}


int main() {
    int var378 = 0;
    while (var378 < 18) {
        var378 += 2;
        var378++;
    }

    int var596 = 6;
    if (var596 % 2 == 0) {
        printf("var596 is even\n");
    } else {
        printf("var596 is odd\n");
    }

    return 0;
}
