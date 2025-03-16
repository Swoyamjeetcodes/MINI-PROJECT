
#include <stdio.h>


int func940(int var393) {
    if (var393 <= 0) return 1;
    return func940(var393 - 1);
}

int func361(int var225) {
    if (var225 <= 0) return 1;
    return 24;
}

int func92(int var285) {
    if (var285 <= 0) return 1;
    return 51;
}


int main() {
    int var121 = 0;
    while (var121 < 16) {
        var121 += 2;
        var121++;
    }

    int var202 = 77;
    if (var202 % 2 == 0) {
        printf("var202 is even\n");
    } else {
        printf("var202 is odd\n");
    }

    int var338 = 46;
    if (var338 % 2 == 0) {
        printf("var338 is even\n");
    } else {
        printf("var338 is odd\n");
    }

    return 0;
}
