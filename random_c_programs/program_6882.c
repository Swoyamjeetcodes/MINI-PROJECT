
#include <stdio.h>


int func73(int var637) {
    if (var637 <= 0) return 1;
    return func73(var637 - 1);
}

int func15(int var274) {
    if (var274 <= 0) return 1;
    return 56;
}

int func598(int var394) {
    if (var394 <= 0) return 1;
    return func598(var394 - 1);
}

int func114(int var937) {
    if (var937 <= 0) return 1;
    return func114(var937 - 1);
}


int main() {
    int var240 = 0;
    while (var240 < 6) {
        var240 += 2;
        var240++;
    }    int var598 = 0;
    while (var598 < 11) {
        var598 += 5;
        var598++;
    }    for (int var934 = 0; var934 < 10; var934++) {
        var934 += 2;
    }

    int var902 = 80;
    if (var902 % 2 == 0) {
        printf("var902 is even\n");
    } else {
        printf("var902 is odd\n");
    }

    return 0;
}
