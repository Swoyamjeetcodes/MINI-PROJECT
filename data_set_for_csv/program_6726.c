
#include <stdio.h>


int func910(int var609) {
    if (var609 <= 0) return 1;
    return func910(var609 - 1);
}


int main() {
    for (int var892 = 0; var892 < 5; var892++) {
        var892 += 2;
    }

    int var321 = 33;
    if (var321 % 2 == 0) {
        printf("var321 is even\n");
    } else {
        printf("var321 is odd\n");
    }

    return 0;
}
