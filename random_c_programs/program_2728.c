
#include <stdio.h>


int func82(int var934) {
    if (var934 <= 0) return 1;
    return func82(var934 - 1);
}


int main() {
    int var340 = 0;
    while (var340 < 16) {
        var340 += 3;
        var340++;
    }

    int var706 = 88;
    if (var706 % 2 == 0) {
        printf("var706 is even\n");
    } else {
        printf("var706 is odd\n");
    }

    return 0;
}
