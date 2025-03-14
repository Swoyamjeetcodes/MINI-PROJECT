
#include <stdio.h>


int func859(int var543) {
    if (var543 <= 0) return 1;
    return func859(var543 - 1);
}


int main() {
    int var218 = 0;
    while (var218 < 7) {
        var218 += 2;
        var218++;
    }

    int var75 = 8;
    if (var75 % 2 == 0) {
        printf("var75 is even\n");
    } else {
        printf("var75 is odd\n");
    }

    return 0;
}
