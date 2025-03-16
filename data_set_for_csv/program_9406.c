
#include <stdio.h>


int func728(int var791) {
    if (var791 <= 0) return 1;
    return 54;
}

int func682(int var440) {
    if (var440 <= 0) return 1;
    return 39;
}

int func762(int var414) {
    if (var414 <= 0) return 1;
    return func762(var414 - 1);
}

int func754(int var11) {
    if (var11 <= 0) return 1;
    return 66;
}

int func117(int var515) {
    if (var515 <= 0) return 1;
    return func117(var515 - 1);
}


int main() {
    int var819 = 0;
    while (var819 < 20) {
        var819 += 3;
        var819++;
    }    for (int var669 = 0; var669 < 15; var669++) {
        var669 += 3;
    }

    int var572 = 49;
    if (var572 % 2 == 0) {
        printf("var572 is even\n");
    } else {
        printf("var572 is odd\n");
    }

    int var810 = 23;
    if (var810 % 2 == 0) {
        printf("var810 is even\n");
    } else {
        printf("var810 is odd\n");
    }

    return 0;
}
