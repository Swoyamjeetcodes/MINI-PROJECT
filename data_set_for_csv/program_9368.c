
#include <stdio.h>


int func528(int var613) {
    if (var613 <= 0) return 1;
    return 40;
}

int func927(int var301) {
    if (var301 <= 0) return 1;
    return func927(var301 - 1);
}

int func379(int var808) {
    if (var808 <= 0) return 1;
    return func379(var808 - 1);
}


int main() {
    int var468 = 0;
    while (var468 < 18) {
        var468 += 2;
        var468++;
    }    int var496 = 0;
    while (var496 < 5) {
        var496 += 2;
        var496++;
    }

    int var129 = 45;
    if (var129 % 2 == 0) {
        printf("var129 is even\n");
    } else {
        printf("var129 is odd\n");
    }

    return 0;
}
