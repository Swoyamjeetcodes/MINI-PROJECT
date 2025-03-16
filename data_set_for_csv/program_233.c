
#include <stdio.h>


int func622(int var259) {
    if (var259 <= 0) return 1;
    return 2;
}

int func276(int var653) {
    if (var653 <= 0) return 1;
    return 19;
}

int func600(int var500) {
    if (var500 <= 0) return 1;
    return func600(var500 - 1);
}


int main() {
    for (int var725 = 0; var725 < 9; var725++) {
        var725 += 1;
    }

    int var332 = 55;
    if (var332 % 2 == 0) {
        printf("var332 is even\n");
    } else {
        printf("var332 is odd\n");
    }

    int var818 = 36;
    if (var818 % 2 == 0) {
        printf("var818 is even\n");
    } else {
        printf("var818 is odd\n");
    }

    return 0;
}
