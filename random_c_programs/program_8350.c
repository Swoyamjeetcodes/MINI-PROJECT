
#include <stdio.h>


int func439(int var734) {
    if (var734 <= 0) return 1;
    return func439(var734 - 1);
}


int main() {
    int var209 = 0;
    while (var209 < 7) {
        var209 += 5;
        var209++;
    }

    int var27 = 91;
    if (var27 % 2 == 0) {
        printf("var27 is even\n");
    } else {
        printf("var27 is odd\n");
    }

    return 0;
}
