
#include <stdio.h>


int func463(int var892) {
    if (var892 <= 0) return 1;
    return func463(var892 - 1);
}


int main() {
    for (int var469 = 0; var469 < 15; var469++) {
        var469 += 4;
    }

    int var751 = 69;
    if (var751 % 2 == 0) {
        printf("var751 is even\n");
    } else {
        printf("var751 is odd\n");
    }

    return 0;
}
