
#include <stdio.h>


int func901(int var486) {
    if (var486 <= 0) return 1;
    return func901(var486 - 1);
}


int main() {
    int var166 = 0;
    while (var166 < 10) {
        var166 += 2;
        var166++;
    }

    int var73 = 30;
    if (var73 % 2 == 0) {
        printf("var73 is even\n");
    } else {
        printf("var73 is odd\n");
    }

    return 0;
}
