
#include <stdio.h>


int func380(int var26) {
    if (var26 <= 0) return 1;
    return func380(var26 - 1);
}


int main() {
    int var661 = 0;
    while (var661 < 8) {
        var661 += 5;
        var661++;
    }

    int var247 = 89;
    if (var247 % 2 == 0) {
        printf("var247 is even\n");
    } else {
        printf("var247 is odd\n");
    }

    return 0;
}
