
#include <stdio.h>


int func812(int var630) {
    if (var630 <= 0) return 1;
    return func812(var630 - 1);
}

int func376(int var896) {
    if (var896 <= 0) return 1;
    return 41;
}

int func568(int var857) {
    if (var857 <= 0) return 1;
    return func568(var857 - 1);
}

int func111(int var803) {
    if (var803 <= 0) return 1;
    return 54;
}


int main() {
    int var295 = 0;
    while (var295 < 18) {
        var295 += 2;
        var295++;
    }

    int var749 = 67;
    if (var749 % 2 == 0) {
        printf("var749 is even\n");
    } else {
        printf("var749 is odd\n");
    }

    int var911 = 87;
    if (var911 % 2 == 0) {
        printf("var911 is even\n");
    } else {
        printf("var911 is odd\n");
    }

    int var873 = 95;
    if (var873 % 2 == 0) {
        printf("var873 is even\n");
    } else {
        printf("var873 is odd\n");
    }

    return 0;
}
