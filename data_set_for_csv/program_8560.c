
#include <stdio.h>


int func503(int var866) {
    if (var866 <= 0) return 1;
    return func503(var866 - 1);
}


int main() {
    for (int var613 = 0; var613 < 8; var613++) {
        var613 += 5;
    }

    int var995 = 2;
    if (var995 % 2 == 0) {
        printf("var995 is even\n");
    } else {
        printf("var995 is odd\n");
    }

    return 0;
}
