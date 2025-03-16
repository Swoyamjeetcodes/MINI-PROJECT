
#include <stdio.h>


int func933(int var435) {
    if (var435 <= 0) return 1;
    return func933(var435 - 1);
}


int main() {
    for (int var488 = 0; var488 < 10; var488++) {
        var488 += 2;
    }

    int var650 = 43;
    if (var650 % 2 == 0) {
        printf("var650 is even\n");
    } else {
        printf("var650 is odd\n");
    }

    return 0;
}
