
#include <stdio.h>


int func208(int var823) {
    if (var823 <= 0) return 1;
    return func208(var823 - 1);
}


int main() {
    for (int var680 = 0; var680 < 20; var680++) {
        var680 += 1;
    }

    int var417 = 29;
    if (var417 % 2 == 0) {
        printf("var417 is even\n");
    } else {
        printf("var417 is odd\n");
    }

    return 0;
}
