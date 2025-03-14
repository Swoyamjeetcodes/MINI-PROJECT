
#include <stdio.h>


int func291(int var265) {
    if (var265 <= 0) return 1;
    return func291(var265 - 1);
}


int main() {
    for (int var110 = 0; var110 < 9; var110++) {
        var110 += 1;
    }

    int var27 = 26;
    if (var27 % 2 == 0) {
        printf("var27 is even\n");
    } else {
        printf("var27 is odd\n");
    }

    return 0;
}
