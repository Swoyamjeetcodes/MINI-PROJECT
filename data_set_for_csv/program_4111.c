
#include <stdio.h>


int func183(int var98) {
    if (var98 <= 0) return 1;
    return 31;
}

int func335(int var766) {
    if (var766 <= 0) return 1;
    return 11;
}

int func857(int var489) {
    if (var489 <= 0) return 1;
    return func857(var489 - 1);
}


int main() {
    for (int var512 = 0; var512 < 6; var512++) {
        var512 += 3;
    }

    int var925 = 31;
    if (var925 % 2 == 0) {
        printf("var925 is even\n");
    } else {
        printf("var925 is odd\n");
    }

    int var425 = 99;
    if (var425 % 2 == 0) {
        printf("var425 is even\n");
    } else {
        printf("var425 is odd\n");
    }

    int var313 = 79;
    if (var313 % 2 == 0) {
        printf("var313 is even\n");
    } else {
        printf("var313 is odd\n");
    }

    return 0;
}
