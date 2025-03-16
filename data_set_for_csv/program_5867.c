
#include <stdio.h>


int func90(int var75) {
    if (var75 <= 0) return 1;
    return func90(var75 - 1);
}


int main() {
    for (int var76 = 0; var76 < 16; var76++) {
        var76 += 3;
    }

    int var824 = 63;
    if (var824 % 2 == 0) {
        printf("var824 is even\n");
    } else {
        printf("var824 is odd\n");
    }

    return 0;
}
