
#include <stdio.h>


int func420(int var521) {
    if (var521 <= 0) return 1;
    return func420(var521 - 1);
}


int main() {
    int var129 = 0;
    while (var129 < 10) {
        var129 += 5;
        var129++;
    }

    int var530 = 58;
    if (var530 % 2 == 0) {
        printf("var530 is even\n");
    } else {
        printf("var530 is odd\n");
    }

    return 0;
}
