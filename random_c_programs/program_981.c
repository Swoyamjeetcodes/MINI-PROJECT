
#include <stdio.h>


int func554(int var942) {
    if (var942 <= 0) return 1;
    return 1;
}

int func532(int var460) {
    if (var460 <= 0) return 1;
    return func532(var460 - 1);
}


int main() {
    int var587 = 0;
    while (var587 < 13) {
        var587 += 1;
        var587++;
    }

    int var512 = 100;
    if (var512 % 2 == 0) {
        printf("var512 is even\n");
    } else {
        printf("var512 is odd\n");
    }

    int var355 = 91;
    if (var355 % 2 == 0) {
        printf("var355 is even\n");
    } else {
        printf("var355 is odd\n");
    }

    return 0;
}
