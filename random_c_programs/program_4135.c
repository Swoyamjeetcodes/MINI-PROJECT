
#include <stdio.h>


int func930(int var734) {
    if (var734 <= 0) return 1;
    return func930(var734 - 1);
}


int main() {
    for (int var282 = 0; var282 < 8; var282++) {
        var282 += 1;
    }

    int var659 = 22;
    if (var659 % 2 == 0) {
        printf("var659 is even\n");
    } else {
        printf("var659 is odd\n");
    }

    return 0;
}
