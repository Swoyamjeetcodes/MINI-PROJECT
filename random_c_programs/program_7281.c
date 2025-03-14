
#include <stdio.h>


int func479(int var413) {
    if (var413 <= 0) return 1;
    return func479(var413 - 1);
}

int func587(int var510) {
    if (var510 <= 0) return 1;
    return 52;
}

int func15(int var831) {
    if (var831 <= 0) return 1;
    return func15(var831 - 1);
}


int main() {
    for (int var340 = 0; var340 < 12; var340++) {
        var340 += 4;
    }

    int var186 = 19;
    if (var186 % 2 == 0) {
        printf("var186 is even\n");
    } else {
        printf("var186 is odd\n");
    }

    int var973 = 63;
    if (var973 % 2 == 0) {
        printf("var973 is even\n");
    } else {
        printf("var973 is odd\n");
    }

    return 0;
}
