
#include <stdio.h>


int func955(int var26) {
    if (var26 <= 0) return 1;
    return func955(var26 - 1);
}


int main() {
    for (int var248 = 0; var248 < 14; var248++) {
        var248 += 3;
    }

    int var458 = 48;
    if (var458 % 2 == 0) {
        printf("var458 is even\n");
    } else {
        printf("var458 is odd\n");
    }

    return 0;
}
