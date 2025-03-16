
#include <stdio.h>


int func202(int var584) {
    if (var584 <= 0) return 1;
    return func202(var584 - 1);
}


int main() {
    int var748 = 0;
    while (var748 < 5) {
        var748 += 4;
        var748++;
    }

    int var510 = 92;
    if (var510 % 2 == 0) {
        printf("var510 is even\n");
    } else {
        printf("var510 is odd\n");
    }

    return 0;
}
