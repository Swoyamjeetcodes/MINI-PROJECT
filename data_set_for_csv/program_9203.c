
#include <stdio.h>


int func931(int var186) {
    if (var186 <= 0) return 1;
    return func931(var186 - 1);
}


int main() {
    int var993 = 0;
    while (var993 < 14) {
        var993 += 2;
        var993++;
    }

    int var177 = 26;
    if (var177 % 2 == 0) {
        printf("var177 is even\n");
    } else {
        printf("var177 is odd\n");
    }

    return 0;
}
