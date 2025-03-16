
#include <stdio.h>


int func60(int var355) {
    if (var355 <= 0) return 1;
    return func60(var355 - 1);
}

int func957(int var478) {
    if (var478 <= 0) return 1;
    return func957(var478 - 1);
}

int func43(int var549) {
    if (var549 <= 0) return 1;
    return func43(var549 - 1);
}


int main() {
    for (int var100 = 0; var100 < 5; var100++) {
        var100 += 4;
    }

    int var246 = 81;
    if (var246 % 2 == 0) {
        printf("var246 is even\n");
    } else {
        printf("var246 is odd\n");
    }

    int var471 = 83;
    if (var471 % 2 == 0) {
        printf("var471 is even\n");
    } else {
        printf("var471 is odd\n");
    }

    int var305 = 90;
    if (var305 % 2 == 0) {
        printf("var305 is even\n");
    } else {
        printf("var305 is odd\n");
    }

    return 0;
}
