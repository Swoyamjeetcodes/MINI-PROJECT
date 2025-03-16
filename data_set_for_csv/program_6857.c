
#include <stdio.h>


int func623(int var528) {
    if (var528 <= 0) return 1;
    return func623(var528 - 1);
}


int main() {
    int var573 = 0;
    while (var573 < 7) {
        var573 += 1;
        var573++;
    }

    int var937 = 41;
    if (var937 % 2 == 0) {
        printf("var937 is even\n");
    } else {
        printf("var937 is odd\n");
    }

    return 0;
}
