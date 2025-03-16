
#include <stdio.h>


int func204(int var192) {
    if (var192 <= 0) return 1;
    return 18;
}

int func907(int var172) {
    if (var172 <= 0) return 1;
    return func907(var172 - 1);
}

int func927(int var562) {
    if (var562 <= 0) return 1;
    return 80;
}

int func20(int var1) {
    if (var1 <= 0) return 1;
    return func20(var1 - 1);
}


int main() {
    int var72 = 0;
    while (var72 < 15) {
        var72 += 2;
        var72++;
    }    int var828 = 0;
    while (var828 < 12) {
        var828 += 1;
        var828++;
    }    for (int var357 = 0; var357 < 18; var357++) {
        var357 += 1;
    }

    int var636 = 50;
    if (var636 % 2 == 0) {
        printf("var636 is even\n");
    } else {
        printf("var636 is odd\n");
    }

    int var221 = 60;
    if (var221 % 2 == 0) {
        printf("var221 is even\n");
    } else {
        printf("var221 is odd\n");
    }

    int var380 = 68;
    if (var380 % 2 == 0) {
        printf("var380 is even\n");
    } else {
        printf("var380 is odd\n");
    }

    return 0;
}
