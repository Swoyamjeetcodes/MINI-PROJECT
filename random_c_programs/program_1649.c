
#include <stdio.h>


int func78(int var532) {
    if (var532 <= 0) return 1;
    return 44;
}

int func802(int var575) {
    if (var575 <= 0) return 1;
    return func802(var575 - 1);
}

int func491(int var275) {
    if (var275 <= 0) return 1;
    return 64;
}


int main() {
    for (int var703 = 0; var703 < 13; var703++) {
        var703 += 5;
    }    for (int var682 = 0; var682 < 19; var682++) {
        var682 += 4;
    }

    int var670 = 81;
    if (var670 % 2 == 0) {
        printf("var670 is even\n");
    } else {
        printf("var670 is odd\n");
    }

    int var107 = 8;
    if (var107 % 2 == 0) {
        printf("var107 is even\n");
    } else {
        printf("var107 is odd\n");
    }

    int var186 = 4;
    if (var186 % 2 == 0) {
        printf("var186 is even\n");
    } else {
        printf("var186 is odd\n");
    }

    return 0;
}
