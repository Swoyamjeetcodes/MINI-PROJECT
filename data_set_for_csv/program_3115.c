
#include <stdio.h>


int func566(int var334) {
    if (var334 <= 0) return 1;
    return func566(var334 - 1);
}

int func587(int var208) {
    if (var208 <= 0) return 1;
    return 32;
}


int main() {
    int var914 = 0;
    while (var914 < 5) {
        var914 += 4;
        var914++;
    }

    int var186 = 21;
    if (var186 % 2 == 0) {
        printf("var186 is even\n");
    } else {
        printf("var186 is odd\n");
    }

    int var835 = 65;
    if (var835 % 2 == 0) {
        printf("var835 is even\n");
    } else {
        printf("var835 is odd\n");
    }

    return 0;
}
