
#include <stdio.h>


int func448(int var568) {
    if (var568 <= 0) return 1;
    return func448(var568 - 1);
}


int main() {
    int var278 = 0;
    while (var278 < 8) {
        var278 += 2;
        var278++;
    }

    int var220 = 96;
    if (var220 % 2 == 0) {
        printf("var220 is even\n");
    } else {
        printf("var220 is odd\n");
    }

    return 0;
}
