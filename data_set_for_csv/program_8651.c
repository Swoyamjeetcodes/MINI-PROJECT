
#include <stdio.h>


int func291(int var265) {
    if (var265 <= 0) return 1;
    return func291(var265 - 1);
}


int main() {
    int var263 = 0;
    while (var263 < 13) {
        var263 += 2;
        var263++;
    }

    int var457 = 70;
    if (var457 % 2 == 0) {
        printf("var457 is even\n");
    } else {
        printf("var457 is odd\n");
    }

    return 0;
}
