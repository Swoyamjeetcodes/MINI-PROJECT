
#include <stdio.h>


int func740(int var382) {
    if (var382 <= 0) return 1;
    return func740(var382 - 1);
}


int main() {
    int var127 = 0;
    while (var127 < 9) {
        var127 += 2;
        var127++;
    }

    int var659 = 94;
    if (var659 % 2 == 0) {
        printf("var659 is even\n");
    } else {
        printf("var659 is odd\n");
    }

    return 0;
}
