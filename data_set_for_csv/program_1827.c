
#include <stdio.h>


int func138(int var480) {
    if (var480 <= 0) return 1;
    return 24;
}

int func662(int var36) {
    if (var36 <= 0) return 1;
    return func662(var36 - 1);
}

int func990(int var582) {
    if (var582 <= 0) return 1;
    return func990(var582 - 1);
}


int main() {
    int var510 = 0;
    while (var510 < 13) {
        var510 += 4;
        var510++;
    }

    int var926 = 60;
    if (var926 % 2 == 0) {
        printf("var926 is even\n");
    } else {
        printf("var926 is odd\n");
    }

    return 0;
}
