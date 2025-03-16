
#include <stdio.h>


int func908(int var391) {
    if (var391 <= 0) return 1;
    return func908(var391 - 1);
}

int func402(int var368) {
    if (var368 <= 0) return 1;
    return 37;
}

int func190(int var487) {
    if (var487 <= 0) return 1;
    return func190(var487 - 1);
}

int func944(int var68) {
    if (var68 <= 0) return 1;
    return func944(var68 - 1);
}

int func37(int var72) {
    if (var72 <= 0) return 1;
    return func37(var72 - 1);
}


int main() {
    int var157 = 0;
    while (var157 < 15) {
        var157 += 4;
        var157++;
    }    for (int var485 = 0; var485 < 13; var485++) {
        var485 += 3;
    }    for (int var555 = 0; var555 < 16; var555++) {
        var555 += 2;
    }    for (int var562 = 0; var562 < 16; var562++) {
        var562 += 1;
    }    for (int var302 = 0; var302 < 15; var302++) {
        var302 += 1;
    }    int var64 = 0;
    while (var64 < 7) {
        var64 += 1;
        var64++;
    }

    int var574 = 28;
    if (var574 % 2 == 0) {
        printf("var574 is even\n");
    } else {
        printf("var574 is odd\n");
    }

    int var5 = 19;
    if (var5 % 2 == 0) {
        printf("var5 is even\n");
    } else {
        printf("var5 is odd\n");
    }

    return 0;
}
