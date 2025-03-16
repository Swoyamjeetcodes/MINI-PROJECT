
#include <stdio.h>


int func325(int var262) {
    if (var262 <= 0) return 1;
    return func325(var262 - 1);
}


int main() {
    int var493 = 0;
    while (var493 < 9) {
        var493 += 2;
        var493++;
    }

    int var936 = 56;
    if (var936 % 2 == 0) {
        printf("var936 is even\n");
    } else {
        printf("var936 is odd\n");
    }

    return 0;
}
