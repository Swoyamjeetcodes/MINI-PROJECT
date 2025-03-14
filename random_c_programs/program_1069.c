
#include <stdio.h>


int func552(int var804) {
    if (var804 <= 0) return 1;
    return 12;
}

int func380(int var275) {
    if (var275 <= 0) return 1;
    return func380(var275 - 1);
}

int func304(int var38) {
    if (var38 <= 0) return 1;
    return func304(var38 - 1);
}

int func793(int var604) {
    if (var604 <= 0) return 1;
    return 77;
}


int main() {
    int var319 = 0;
    while (var319 < 7) {
        var319 += 5;
        var319++;
    }

    int var645 = 73;
    if (var645 % 2 == 0) {
        printf("var645 is even\n");
    } else {
        printf("var645 is odd\n");
    }

    int var961 = 21;
    if (var961 % 2 == 0) {
        printf("var961 is even\n");
    } else {
        printf("var961 is odd\n");
    }

    int var88 = 73;
    if (var88 % 2 == 0) {
        printf("var88 is even\n");
    } else {
        printf("var88 is odd\n");
    }

    return 0;
}
