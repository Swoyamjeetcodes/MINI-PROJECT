
#include <stdio.h>


int func601(int var796) {
    if (var796 <= 0) return 1;
    return func601(var796 - 1);
}


int main() {
    for (int var94 = 0; var94 < 18; var94++) {
        var94 += 4;
    }

    int var790 = 63;
    if (var790 % 2 == 0) {
        printf("var790 is even\n");
    } else {
        printf("var790 is odd\n");
    }

    return 0;
}
