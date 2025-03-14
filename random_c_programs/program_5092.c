
#include <stdio.h>


int func83(int var173) {
    if (var173 <= 0) return 1;
    return 43;
}

int func793(int var528) {
    if (var528 <= 0) return 1;
    return func793(var528 - 1);
}

int func977(int var631) {
    if (var631 <= 0) return 1;
    return func977(var631 - 1);
}

int func408(int var390) {
    if (var390 <= 0) return 1;
    return 62;
}


int main() {
    int var58 = 0;
    while (var58 < 9) {
        var58 += 5;
        var58++;
    }    for (int var255 = 0; var255 < 14; var255++) {
        var255 += 3;
    }

    int var467 = 69;
    if (var467 % 2 == 0) {
        printf("var467 is even\n");
    } else {
        printf("var467 is odd\n");
    }

    int var705 = 95;
    if (var705 % 2 == 0) {
        printf("var705 is even\n");
    } else {
        printf("var705 is odd\n");
    }

    int var906 = 2;
    if (var906 % 2 == 0) {
        printf("var906 is even\n");
    } else {
        printf("var906 is odd\n");
    }

    return 0;
}
