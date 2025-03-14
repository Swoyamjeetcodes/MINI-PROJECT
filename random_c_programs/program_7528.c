
#include <stdio.h>


int func14(int var710) {
    if (var710 <= 0) return 1;
    return func14(var710 - 1);
}


int main() {
    int var843 = 0;
    while (var843 < 18) {
        var843 += 3;
        var843++;
    }

    int var435 = 24;
    if (var435 % 2 == 0) {
        printf("var435 is even\n");
    } else {
        printf("var435 is odd\n");
    }

    return 0;
}
