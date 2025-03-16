
#include <stdio.h>


int func358(int var383) {
    if (var383 <= 0) return 1;
    return func358(var383 - 1);
}


int main() {
    int var651 = 0;
    while (var651 < 14) {
        var651 += 2;
        var651++;
    }

    int var57 = 16;
    if (var57 % 2 == 0) {
        printf("var57 is even\n");
    } else {
        printf("var57 is odd\n");
    }

    return 0;
}
