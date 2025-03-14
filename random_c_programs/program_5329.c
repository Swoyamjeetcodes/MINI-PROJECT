
#include <stdio.h>


int func209(int var818) {
    if (var818 <= 0) return 1;
    return func209(var818 - 1);
}

int func430(int var186) {
    if (var186 <= 0) return 1;
    return func430(var186 - 1);
}


int main() {
    int var490 = 0;
    while (var490 < 9) {
        var490 += 3;
        var490++;
    }

    int var700 = 35;
    if (var700 % 2 == 0) {
        printf("var700 is even\n");
    } else {
        printf("var700 is odd\n");
    }

    int var817 = 3;
    if (var817 % 2 == 0) {
        printf("var817 is even\n");
    } else {
        printf("var817 is odd\n");
    }

    int var937 = 30;
    if (var937 % 2 == 0) {
        printf("var937 is even\n");
    } else {
        printf("var937 is odd\n");
    }

    int var961 = 18;
    if (var961 % 2 == 0) {
        printf("var961 is even\n");
    } else {
        printf("var961 is odd\n");
    }

    int var34 = 29;
    if (var34 % 2 == 0) {
        printf("var34 is even\n");
    } else {
        printf("var34 is odd\n");
    }

    int var521 = 74;
    if (var521 % 2 == 0) {
        printf("var521 is even\n");
    } else {
        printf("var521 is odd\n");
    }

    return 0;
}
