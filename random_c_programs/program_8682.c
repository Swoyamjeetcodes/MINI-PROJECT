
#include <stdio.h>


int func780(int var686) {
    if (var686 <= 0) return 1;
    return 17;
}

int func748(int var858) {
    if (var858 <= 0) return 1;
    return 45;
}

int func286(int var617) {
    if (var617 <= 0) return 1;
    return func286(var617 - 1);
}


int main() {
    for (int var662 = 0; var662 < 8; var662++) {
        var662 += 5;
    }

    int var984 = 96;
    if (var984 % 2 == 0) {
        printf("var984 is even\n");
    } else {
        printf("var984 is odd\n");
    }

    int var520 = 23;
    if (var520 % 2 == 0) {
        printf("var520 is even\n");
    } else {
        printf("var520 is odd\n");
    }

    int var987 = 93;
    if (var987 % 2 == 0) {
        printf("var987 is even\n");
    } else {
        printf("var987 is odd\n");
    }

    return 0;
}
