
#include <stdio.h>


int func96(int var140) {
    if (var140 <= 0) return 1;
    return func96(var140 - 1);
}


int main() {
    for (int var202 = 0; var202 < 10; var202++) {
        var202 += 4;
    }

    int var286 = 62;
    if (var286 % 2 == 0) {
        printf("var286 is even\n");
    } else {
        printf("var286 is odd\n");
    }

    return 0;
}
