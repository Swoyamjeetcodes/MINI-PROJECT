
#include <stdio.h>


int func815(int var396) {
    if (var396 <= 0) return 1;
    return func815(var396 - 1);
}


int main() {
    int var455 = 0;
    while (var455 < 18) {
        var455 += 2;
        var455++;
    }

    int var652 = 31;
    if (var652 % 2 == 0) {
        printf("var652 is even\n");
    } else {
        printf("var652 is odd\n");
    }

    return 0;
}
