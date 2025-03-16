
#include <stdio.h>


int func205(int var946) {
    if (var946 <= 0) return 1;
    return func205(var946 - 1);
}


int main() {
    int var953 = 0;
    while (var953 < 13) {
        var953 += 2;
        var953++;
    }

    int var750 = 2;
    if (var750 % 2 == 0) {
        printf("var750 is even\n");
    } else {
        printf("var750 is odd\n");
    }

    return 0;
}
