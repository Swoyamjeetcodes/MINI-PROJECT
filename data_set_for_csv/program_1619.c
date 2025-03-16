
#include <stdio.h>


int func717(int var892) {
    if (var892 <= 0) return 1;
    return func717(var892 - 1);
}


int main() {
    for (int var53 = 0; var53 < 7; var53++) {
        var53 += 4;
    }

    int var494 = 38;
    if (var494 % 2 == 0) {
        printf("var494 is even\n");
    } else {
        printf("var494 is odd\n");
    }

    return 0;
}
