
#include <stdio.h>


int func707(int var662) {
    if (var662 <= 0) return 1;
    return func707(var662 - 1);
}

int func820(int var600) {
    if (var600 <= 0) return 1;
    return 34;
}

int func685(int var250) {
    if (var250 <= 0) return 1;
    return 54;
}

int func586(int var243) {
    if (var243 <= 0) return 1;
    return func586(var243 - 1);
}


int main() {
    int var436 = 0;
    while (var436 < 15) {
        var436 += 5;
        var436++;
    }

    int var626 = 18;
    if (var626 % 2 == 0) {
        printf("var626 is even\n");
    } else {
        printf("var626 is odd\n");
    }

    int var843 = 55;
    if (var843 % 2 == 0) {
        printf("var843 is even\n");
    } else {
        printf("var843 is odd\n");
    }

    int var676 = 72;
    if (var676 % 2 == 0) {
        printf("var676 is even\n");
    } else {
        printf("var676 is odd\n");
    }

    return 0;
}
