
#include <stdio.h>


int func263(int var527) {
    if (var527 <= 0) return 1;
    return 81;
}

int func158(int var750) {
    if (var750 <= 0) return 1;
    return func158(var750 - 1);
}

int func846(int var308) {
    if (var308 <= 0) return 1;
    return 80;
}

int func719(int var63) {
    if (var63 <= 0) return 1;
    return 44;
}


int main() {
    int var562 = 0;
    while (var562 < 8) {
        var562 += 2;
        var562++;
    }    for (int var251 = 0; var251 < 5; var251++) {
        var251 += 2;
    }

    int var549 = 9;
    if (var549 % 2 == 0) {
        printf("var549 is even\n");
    } else {
        printf("var549 is odd\n");
    }

    return 0;
}
