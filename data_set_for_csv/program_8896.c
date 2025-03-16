
#include <stdio.h>


int func957(int var147) {
    if (var147 <= 0) return 1;
    return func957(var147 - 1);
}


int main() {
    for (int var228 = 0; var228 < 11; var228++) {
        var228 += 5;
    }

    int var670 = 96;
    if (var670 % 2 == 0) {
        printf("var670 is even\n");
    } else {
        printf("var670 is odd\n");
    }

    return 0;
}
