
#include <stdio.h>


int func898(int var395) {
    if (var395 <= 0) return 1;
    return func898(var395 - 1);
}


int main() {
    int var159 = 0;
    while (var159 < 16) {
        var159 += 3;
        var159++;
    }

    int var934 = 3;
    if (var934 % 2 == 0) {
        printf("var934 is even\n");
    } else {
        printf("var934 is odd\n");
    }

    return 0;
}
