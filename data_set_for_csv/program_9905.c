
#include <stdio.h>


int func313(int var297) {
    if (var297 <= 0) return 1;
    return 90;
}

int func64(int var675) {
    if (var675 <= 0) return 1;
    return 4;
}

int func33(int var339) {
    if (var339 <= 0) return 1;
    return func33(var339 - 1);
}

int func587(int var898) {
    if (var898 <= 0) return 1;
    return 97;
}

int func590(int var249) {
    if (var249 <= 0) return 1;
    return func590(var249 - 1);
}


int main() {
    for (int var682 = 0; var682 < 19; var682++) {
        var682 += 1;
    }    for (int var88 = 0; var88 < 18; var88++) {
        var88 += 3;
    }

    int var397 = 91;
    if (var397 % 2 == 0) {
        printf("var397 is even\n");
    } else {
        printf("var397 is odd\n");
    }

    return 0;
}
