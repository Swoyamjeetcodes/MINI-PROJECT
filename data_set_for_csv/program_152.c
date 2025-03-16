
#include <stdio.h>


int func753(int var937) {
    if (var937 <= 0) return 1;
    return func753(var937 - 1);
}


int main() {
    for (int var201 = 0; var201 < 6; var201++) {
        var201 += 1;
    }

    int var435 = 49;
    if (var435 % 2 == 0) {
        printf("var435 is even\n");
    } else {
        printf("var435 is odd\n");
    }

    return 0;
}
