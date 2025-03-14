
#include <stdio.h>


int func553(int var541) {
    if (var541 <= 0) return 1;
    return 40;
}

int func513(int var423) {
    if (var423 <= 0) return 1;
    return 41;
}

int func59(int var672) {
    if (var672 <= 0) return 1;
    return 16;
}

int func977(int var795) {
    if (var795 <= 0) return 1;
    return func977(var795 - 1);
}

int func183(int var489) {
    if (var489 <= 0) return 1;
    return func183(var489 - 1);
}


int main() {
    int var747 = 0;
    while (var747 < 11) {
        var747 += 3;
        var747++;
    }

    int var761 = 28;
    if (var761 % 2 == 0) {
        printf("var761 is even\n");
    } else {
        printf("var761 is odd\n");
    }

    int var155 = 39;
    if (var155 % 2 == 0) {
        printf("var155 is even\n");
    } else {
        printf("var155 is odd\n");
    }

    return 0;
}
