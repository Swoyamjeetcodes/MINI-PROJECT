
#include <stdio.h>


int func713(int var33) {
    if (var33 <= 0) return 1;
    return func713(var33 - 1);
}


int main() {
    int var810 = 0;
    while (var810 < 16) {
        var810 += 4;
        var810++;
    }

    int var940 = 25;
    if (var940 % 2 == 0) {
        printf("var940 is even\n");
    } else {
        printf("var940 is odd\n");
    }

    return 0;
}
