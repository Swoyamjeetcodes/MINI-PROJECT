
#include <stdio.h>


int func459(int var368) {
    if (var368 <= 0) return 1;
    return 81;
}

int func341(int var625) {
    if (var625 <= 0) return 1;
    return func341(var625 - 1);
}

int func568(int var925) {
    if (var925 <= 0) return 1;
    return func568(var925 - 1);
}


int main() {
    int var116 = 0;
    while (var116 < 20) {
        var116 += 1;
        var116++;
    }

    int var117 = 89;
    if (var117 % 2 == 0) {
        printf("var117 is even\n");
    } else {
        printf("var117 is odd\n");
    }

    int var846 = 8;
    if (var846 % 2 == 0) {
        printf("var846 is even\n");
    } else {
        printf("var846 is odd\n");
    }

    int var511 = 6;
    if (var511 % 2 == 0) {
        printf("var511 is even\n");
    } else {
        printf("var511 is odd\n");
    }

    return 0;
}
