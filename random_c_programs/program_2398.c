
#include <stdio.h>


int func307(int var228) {
    if (var228 <= 0) return 1;
    return func307(var228 - 1);
}


int main() {
    int var182 = 0;
    while (var182 < 9) {
        var182 += 5;
        var182++;
    }

    int var392 = 74;
    if (var392 % 2 == 0) {
        printf("var392 is even\n");
    } else {
        printf("var392 is odd\n");
    }

    return 0;
}
