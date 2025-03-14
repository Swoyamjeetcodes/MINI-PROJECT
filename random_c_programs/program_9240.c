
#include <stdio.h>


int func753(int var370) {
    if (var370 <= 0) return 1;
    return func753(var370 - 1);
}


int main() {
    int var892 = 0;
    while (var892 < 16) {
        var892 += 4;
        var892++;
    }

    int var382 = 36;
    if (var382 % 2 == 0) {
        printf("var382 is even\n");
    } else {
        printf("var382 is odd\n");
    }

    return 0;
}
