
#include <stdio.h>


int func290(int var17) {
    if (var17 <= 0) return 1;
    return func290(var17 - 1);
}

int func553(int var194) {
    if (var194 <= 0) return 1;
    return func553(var194 - 1);
}

int func422(int var946) {
    if (var946 <= 0) return 1;
    return func422(var946 - 1);
}


int main() {
    for (int var916 = 0; var916 < 12; var916++) {
        var916 += 1;
    }

    int var431 = 93;
    if (var431 % 2 == 0) {
        printf("var431 is even\n");
    } else {
        printf("var431 is odd\n");
    }

    int var334 = 14;
    if (var334 % 2 == 0) {
        printf("var334 is even\n");
    } else {
        printf("var334 is odd\n");
    }

    return 0;
}
