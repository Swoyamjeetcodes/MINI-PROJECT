
#include <stdio.h>


int func415(int var199) {
    if (var199 <= 0) return 1;
    return func415(var199 - 1);
}


int main() {
    for (int var123 = 0; var123 < 11; var123++) {
        var123 += 1;
    }

    int var413 = 6;
    if (var413 % 2 == 0) {
        printf("var413 is even\n");
    } else {
        printf("var413 is odd\n");
    }

    return 0;
}
