
#include <stdio.h>


int func98(int var170) {
    if (var170 <= 0) return 1;
    return func98(var170 - 1);
}


int main() {
    for (int var382 = 0; var382 < 18; var382++) {
        var382 += 3;
    }

    int var665 = 92;
    if (var665 % 2 == 0) {
        printf("var665 is even\n");
    } else {
        printf("var665 is odd\n");
    }

    return 0;
}
