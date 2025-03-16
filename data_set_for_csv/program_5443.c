
#include <stdio.h>


int func267(int var149) {
    if (var149 <= 0) return 1;
    return func267(var149 - 1);
}


int main() {
    for (int var800 = 0; var800 < 15; var800++) {
        var800 += 2;
    }

    int var36 = 15;
    if (var36 % 2 == 0) {
        printf("var36 is even\n");
    } else {
        printf("var36 is odd\n");
    }

    return 0;
}
