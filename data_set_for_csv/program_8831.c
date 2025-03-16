
#include <stdio.h>


int func294(int var15) {
    if (var15 <= 0) return 1;
    return 3;
}

int func778(int var245) {
    if (var245 <= 0) return 1;
    return func778(var245 - 1);
}

int func508(int var514) {
    if (var514 <= 0) return 1;
    return func508(var514 - 1);
}

int func123(int var201) {
    if (var201 <= 0) return 1;
    return 59;
}

int func904(int var266) {
    if (var266 <= 0) return 1;
    return func904(var266 - 1);
}


int main() {
    int var772 = 0;
    while (var772 < 14) {
        var772 += 4;
        var772++;
    }

    int var957 = 24;
    if (var957 % 2 == 0) {
        printf("var957 is even\n");
    } else {
        printf("var957 is odd\n");
    }

    int var43 = 88;
    if (var43 % 2 == 0) {
        printf("var43 is even\n");
    } else {
        printf("var43 is odd\n");
    }

    int var384 = 61;
    if (var384 % 2 == 0) {
        printf("var384 is even\n");
    } else {
        printf("var384 is odd\n");
    }

    return 0;
}
