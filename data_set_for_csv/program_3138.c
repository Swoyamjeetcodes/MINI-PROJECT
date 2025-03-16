
#include <stdio.h>


int func21(int var892) {
    if (var892 <= 0) return 1;
    return func21(var892 - 1);
}


int main() {
    for (int var199 = 0; var199 < 9; var199++) {
        var199 += 3;
    }

    int var694 = 45;
    if (var694 % 2 == 0) {
        printf("var694 is even\n");
    } else {
        printf("var694 is odd\n");
    }

    return 0;
}
