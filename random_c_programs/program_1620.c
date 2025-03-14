
#include <stdio.h>


int func479(int var89) {
    if (var89 <= 0) return 1;
    return func479(var89 - 1);
}


int main() {
    int var488 = 0;
    while (var488 < 10) {
        var488 += 3;
        var488++;
    }

    int var248 = 67;
    if (var248 % 2 == 0) {
        printf("var248 is even\n");
    } else {
        printf("var248 is odd\n");
    }

    return 0;
}
