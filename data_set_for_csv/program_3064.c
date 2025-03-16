
#include <stdio.h>


int func11(int var939) {
    if (var939 <= 0) return 1;
    return func11(var939 - 1);
}


int main() {
    int var582 = 0;
    while (var582 < 8) {
        var582 += 4;
        var582++;
    }

    int var934 = 20;
    if (var934 % 2 == 0) {
        printf("var934 is even\n");
    } else {
        printf("var934 is odd\n");
    }

    return 0;
}
