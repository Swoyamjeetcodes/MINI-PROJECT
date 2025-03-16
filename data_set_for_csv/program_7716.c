
#include <stdio.h>


int func539(int var307) {
    if (var307 <= 0) return 1;
    return func539(var307 - 1);
}


int main() {
    for (int var406 = 0; var406 < 6; var406++) {
        var406 += 3;
    }

    int var472 = 53;
    if (var472 % 2 == 0) {
        printf("var472 is even\n");
    } else {
        printf("var472 is odd\n");
    }

    return 0;
}
