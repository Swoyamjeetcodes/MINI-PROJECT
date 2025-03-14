
#include <stdio.h>


int func868(int var71) {
    if (var71 <= 0) return 1;
    return 10;
}

int func102(int var693) {
    if (var693 <= 0) return 1;
    return func102(var693 - 1);
}

int func585(int var643) {
    if (var643 <= 0) return 1;
    return 94;
}

int func301(int var873) {
    if (var873 <= 0) return 1;
    return 5;
}

int func749(int var16) {
    if (var16 <= 0) return 1;
    return 15;
}


int main() {
    for (int var310 = 0; var310 < 5; var310++) {
        var310 += 4;
    }    int var542 = 0;
    while (var542 < 11) {
        var542 += 5;
        var542++;
    }

    int var172 = 80;
    if (var172 % 2 == 0) {
        printf("var172 is even\n");
    } else {
        printf("var172 is odd\n");
    }

    int var623 = 63;
    if (var623 % 2 == 0) {
        printf("var623 is even\n");
    } else {
        printf("var623 is odd\n");
    }

    return 0;
}
