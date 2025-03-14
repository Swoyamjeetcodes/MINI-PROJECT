
#include <stdio.h>


int func156(int var395) {
    if (var395 <= 0) return 1;
    return func156(var395 - 1);
}


int main() {
    int var664 = 0;
    while (var664 < 19) {
        var664 += 5;
        var664++;
    }

    int var18 = 62;
    if (var18 % 2 == 0) {
        printf("var18 is even\n");
    } else {
        printf("var18 is odd\n");
    }

    return 0;
}
