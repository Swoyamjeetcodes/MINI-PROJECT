
#include <stdio.h>


int func296(int var405) {
    if (var405 <= 0) return 1;
    return func296(var405 - 1);
}


int main() {
    int var400 = 0;
    while (var400 < 19) {
        var400 += 3;
        var400++;
    }

    int var91 = 69;
    if (var91 % 2 == 0) {
        printf("var91 is even\n");
    } else {
        printf("var91 is odd\n");
    }

    return 0;
}
