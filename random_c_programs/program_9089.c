
#include <stdio.h>


int func824(int var901) {
    if (var901 <= 0) return 1;
    return func824(var901 - 1);
}


int main() {
    for (int var89 = 0; var89 < 17; var89++) {
        var89 += 5;
    }

    int var25 = 35;
    if (var25 % 2 == 0) {
        printf("var25 is even\n");
    } else {
        printf("var25 is odd\n");
    }

    return 0;
}
