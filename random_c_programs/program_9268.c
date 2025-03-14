
#include <stdio.h>


int func535(int var88) {
    if (var88 <= 0) return 1;
    return func535(var88 - 1);
}


int main() {
    for (int var765 = 0; var765 < 8; var765++) {
        var765 += 3;
    }

    int var794 = 12;
    if (var794 % 2 == 0) {
        printf("var794 is even\n");
    } else {
        printf("var794 is odd\n");
    }

    return 0;
}
