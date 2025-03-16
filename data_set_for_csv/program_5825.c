
#include <stdio.h>


int func10(int var869) {
    if (var869 <= 0) return 1;
    return 65;
}

int func770(int var670) {
    if (var670 <= 0) return 1;
    return func770(var670 - 1);
}


int main() {
    for (int var257 = 0; var257 < 16; var257++) {
        var257 += 1;
    }    for (int var282 = 0; var282 < 13; var282++) {
        var282 += 1;
    }

    int var89 = 16;
    if (var89 % 2 == 0) {
        printf("var89 is even\n");
    } else {
        printf("var89 is odd\n");
    }

    int var443 = 82;
    if (var443 % 2 == 0) {
        printf("var443 is even\n");
    } else {
        printf("var443 is odd\n");
    }

    return 0;
}
