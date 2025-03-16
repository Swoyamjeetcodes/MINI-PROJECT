
#include <stdio.h>


int func882(int var562) {
    if (var562 <= 0) return 1;
    return func882(var562 - 1);
}

int func896(int var152) {
    if (var152 <= 0) return 1;
    return func896(var152 - 1);
}

int func218(int var563) {
    if (var563 <= 0) return 1;
    return 9;
}

int func972(int var188) {
    if (var188 <= 0) return 1;
    return func972(var188 - 1);
}

int func720(int var742) {
    if (var742 <= 0) return 1;
    return func720(var742 - 1);
}


int main() {
    for (int var33 = 0; var33 < 14; var33++) {
        var33 += 1;
    }    int var38 = 0;
    while (var38 < 20) {
        var38 += 2;
        var38++;
    }

    int var42 = 66;
    if (var42 % 2 == 0) {
        printf("var42 is even\n");
    } else {
        printf("var42 is odd\n");
    }

    int var17 = 39;
    if (var17 % 2 == 0) {
        printf("var17 is even\n");
    } else {
        printf("var17 is odd\n");
    }

    return 0;
}
