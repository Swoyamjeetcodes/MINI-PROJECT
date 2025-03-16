
#include <stdio.h>


int func596(int var809) {
    if (var809 <= 0) return 1;
    return func596(var809 - 1);
}

int func268(int var982) {
    if (var982 <= 0) return 1;
    return func268(var982 - 1);
}


int main() {
    for (int var366 = 0; var366 < 18; var366++) {
        var366 += 4;
    }

    int var474 = 56;
    if (var474 % 2 == 0) {
        printf("var474 is even\n");
    } else {
        printf("var474 is odd\n");
    }

    int var283 = 62;
    if (var283 % 2 == 0) {
        printf("var283 is even\n");
    } else {
        printf("var283 is odd\n");
    }

    return 0;
}
