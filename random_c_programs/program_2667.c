
#include <stdio.h>


int func583(int var286) {
    if (var286 <= 0) return 1;
    return func583(var286 - 1);
}


int main() {
    int var89 = 0;
    while (var89 < 16) {
        var89 += 4;
        var89++;
    }

    int var2 = 9;
    if (var2 % 2 == 0) {
        printf("var2 is even\n");
    } else {
        printf("var2 is odd\n");
    }

    return 0;
}
