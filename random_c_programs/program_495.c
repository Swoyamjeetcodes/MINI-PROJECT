
#include <stdio.h>


int func596(int var593) {
    if (var593 <= 0) return 1;
    return 22;
}

int func173(int var849) {
    if (var849 <= 0) return 1;
    return 73;
}

int func983(int var780) {
    if (var780 <= 0) return 1;
    return func983(var780 - 1);
}


int main() {
    int var458 = 0;
    while (var458 < 20) {
        var458 += 2;
        var458++;
    }

    int var34 = 10;
    if (var34 % 2 == 0) {
        printf("var34 is even\n");
    } else {
        printf("var34 is odd\n");
    }

    return 0;
}
