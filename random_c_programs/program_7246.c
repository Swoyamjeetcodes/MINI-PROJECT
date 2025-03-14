
#include <stdio.h>


int func143(int var271) {
    if (var271 <= 0) return 1;
    return func143(var271 - 1);
}

int func566(int var735) {
    if (var735 <= 0) return 1;
    return func566(var735 - 1);
}

int func498(int var865) {
    if (var865 <= 0) return 1;
    return 16;
}

int func645(int var32) {
    if (var32 <= 0) return 1;
    return func645(var32 - 1);
}


int main() {
    for (int var538 = 0; var538 < 13; var538++) {
        var538 += 4;
    }    int var426 = 0;
    while (var426 < 20) {
        var426 += 3;
        var426++;
    }

    int var626 = 93;
    if (var626 % 2 == 0) {
        printf("var626 is even\n");
    } else {
        printf("var626 is odd\n");
    }

    int var957 = 0;
    if (var957 % 2 == 0) {
        printf("var957 is even\n");
    } else {
        printf("var957 is odd\n");
    }

    int var495 = 2;
    if (var495 % 2 == 0) {
        printf("var495 is even\n");
    } else {
        printf("var495 is odd\n");
    }

    return 0;
}
