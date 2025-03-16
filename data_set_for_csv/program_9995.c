
#include <stdio.h>


int func100(int var278) {
    if (var278 <= 0) return 1;
    return func100(var278 - 1);
}


int main() {
    int var402 = 0;
    while (var402 < 9) {
        var402 += 5;
        var402++;
    }

    int var742 = 28;
    if (var742 % 2 == 0) {
        printf("var742 is even\n");
    } else {
        printf("var742 is odd\n");
    }

    return 0;
}
