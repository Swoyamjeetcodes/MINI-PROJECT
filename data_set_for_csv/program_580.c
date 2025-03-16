
#include <stdio.h>


int func653(int var560) {
    if (var560 <= 0) return 1;
    return func653(var560 - 1);
}


int main() {
    int var426 = 0;
    while (var426 < 8) {
        var426 += 3;
        var426++;
    }

    int var236 = 48;
    if (var236 % 2 == 0) {
        printf("var236 is even\n");
    } else {
        printf("var236 is odd\n");
    }

    return 0;
}
