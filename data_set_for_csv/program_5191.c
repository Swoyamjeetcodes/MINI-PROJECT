
#include <stdio.h>


int func964(int var344) {
    if (var344 <= 0) return 1;
    return func964(var344 - 1);
}


int main() {
    int var466 = 0;
    while (var466 < 12) {
        var466 += 3;
        var466++;
    }

    int var319 = 19;
    if (var319 % 2 == 0) {
        printf("var319 is even\n");
    } else {
        printf("var319 is odd\n");
    }

    return 0;
}
