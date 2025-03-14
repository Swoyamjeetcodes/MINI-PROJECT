
#include <stdio.h>


int func911(int var708) {
    if (var708 <= 0) return 1;
    return func911(var708 - 1);
}


int main() {
    int var866 = 0;
    while (var866 < 9) {
        var866 += 1;
        var866++;
    }

    int var704 = 96;
    if (var704 % 2 == 0) {
        printf("var704 is even\n");
    } else {
        printf("var704 is odd\n");
    }

    return 0;
}
