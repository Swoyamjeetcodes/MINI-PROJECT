
#include <stdio.h>


int func555(int var336) {
    if (var336 <= 0) return 1;
    return func555(var336 - 1);
}


int main() {
    int var383 = 0;
    while (var383 < 13) {
        var383 += 2;
        var383++;
    }

    int var279 = 61;
    if (var279 % 2 == 0) {
        printf("var279 is even\n");
    } else {
        printf("var279 is odd\n");
    }

    return 0;
}
