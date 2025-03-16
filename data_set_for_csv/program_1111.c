
#include <stdio.h>


int func989(int var385) {
    if (var385 <= 0) return 1;
    return func989(var385 - 1);
}


int main() {
    int var912 = 0;
    while (var912 < 17) {
        var912 += 5;
        var912++;
    }

    int var762 = 71;
    if (var762 % 2 == 0) {
        printf("var762 is even\n");
    } else {
        printf("var762 is odd\n");
    }

    return 0;
}
