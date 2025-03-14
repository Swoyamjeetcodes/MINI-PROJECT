
#include <stdio.h>


int func28(int var423) {
    if (var423 <= 0) return 1;
    return func28(var423 - 1);
}


int main() {
    for (int var600 = 0; var600 < 9; var600++) {
        var600 += 3;
    }

    int var179 = 67;
    if (var179 % 2 == 0) {
        printf("var179 is even\n");
    } else {
        printf("var179 is odd\n");
    }

    return 0;
}
