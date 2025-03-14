
#include <stdio.h>


int func600(int var791) {
    if (var791 <= 0) return 1;
    return func600(var791 - 1);
}

int func15(int var372) {
    if (var372 <= 0) return 1;
    return 57;
}

int func468(int var411) {
    if (var411 <= 0) return 1;
    return 43;
}


int main() {
    for (int var699 = 0; var699 < 18; var699++) {
        var699 += 2;
    }

    int var318 = 87;
    if (var318 % 2 == 0) {
        printf("var318 is even\n");
    } else {
        printf("var318 is odd\n");
    }

    int var461 = 17;
    if (var461 % 2 == 0) {
        printf("var461 is even\n");
    } else {
        printf("var461 is odd\n");
    }

    int var574 = 93;
    if (var574 % 2 == 0) {
        printf("var574 is even\n");
    } else {
        printf("var574 is odd\n");
    }

    return 0;
}
