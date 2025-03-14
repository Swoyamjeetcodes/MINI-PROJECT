
#include <stdio.h>


int func960(int var696) {
    if (var696 <= 0) return 1;
    return func960(var696 - 1);
}

int func172(int var197) {
    if (var197 <= 0) return 1;
    return func172(var197 - 1);
}

int func48(int var640) {
    if (var640 <= 0) return 1;
    return func48(var640 - 1);
}

int func67(int var262) {
    if (var262 <= 0) return 1;
    return 39;
}


int main() {
    int var49 = 0;
    while (var49 < 20) {
        var49 += 3;
        var49++;
    }    int var723 = 0;
    while (var723 < 18) {
        var723 += 5;
        var723++;
    }    for (int var258 = 0; var258 < 20; var258++) {
        var258 += 4;
    }

    int var186 = 16;
    if (var186 % 2 == 0) {
        printf("var186 is even\n");
    } else {
        printf("var186 is odd\n");
    }

    return 0;
}
