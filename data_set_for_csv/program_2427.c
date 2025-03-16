
#include <stdio.h>


int func914(int var220) {
    if (var220 <= 0) return 1;
    return func914(var220 - 1);
}


int main() {
    for (int var92 = 0; var92 < 7; var92++) {
        var92 += 5;
    }

    int var118 = 9;
    if (var118 % 2 == 0) {
        printf("var118 is even\n");
    } else {
        printf("var118 is odd\n");
    }

    return 0;
}
