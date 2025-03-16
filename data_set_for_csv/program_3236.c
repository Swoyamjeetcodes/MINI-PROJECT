
#include <stdio.h>


int func250(int var175) {
    if (var175 <= 0) return 1;
    return func250(var175 - 1);
}


int main() {
    int var652 = 0;
    while (var652 < 19) {
        var652 += 1;
        var652++;
    }

    int var650 = 72;
    if (var650 % 2 == 0) {
        printf("var650 is even\n");
    } else {
        printf("var650 is odd\n");
    }

    return 0;
}
