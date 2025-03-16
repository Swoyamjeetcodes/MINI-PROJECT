
#include <stdio.h>


int func853(int var434) {
    if (var434 <= 0) return 1;
    return func853(var434 - 1);
}

int func417(int var689) {
    if (var689 <= 0) return 1;
    return 27;
}

int func455(int var171) {
    if (var171 <= 0) return 1;
    return 2;
}

int func618(int var721) {
    if (var721 <= 0) return 1;
    return func618(var721 - 1);
}

int func316(int var455) {
    if (var455 <= 0) return 1;
    return func316(var455 - 1);
}


int main() {
    for (int var766 = 0; var766 < 18; var766++) {
        var766 += 3;
    }    int var709 = 0;
    while (var709 < 16) {
        var709 += 4;
        var709++;
    }

    int var35 = 69;
    if (var35 % 2 == 0) {
        printf("var35 is even\n");
    } else {
        printf("var35 is odd\n");
    }

    int var363 = 87;
    if (var363 % 2 == 0) {
        printf("var363 is even\n");
    } else {
        printf("var363 is odd\n");
    }

    return 0;
}
