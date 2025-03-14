
#include <stdio.h>


int func252(int var918) {
    if (var918 <= 0) return 1;
    return func252(var918 - 1);
}

int func656(int var46) {
    if (var46 <= 0) return 1;
    return 68;
}

int func812(int var739) {
    if (var739 <= 0) return 1;
    return func812(var739 - 1);
}

int func834(int var662) {
    if (var662 <= 0) return 1;
    return 74;
}


int main() {
    int var592 = 0;
    while (var592 < 5) {
        var592 += 2;
        var592++;
    }    for (int var672 = 0; var672 < 9; var672++) {
        var672 += 4;
    }

    int var250 = 4;
    if (var250 % 2 == 0) {
        printf("var250 is even\n");
    } else {
        printf("var250 is odd\n");
    }

    int var694 = 62;
    if (var694 % 2 == 0) {
        printf("var694 is even\n");
    } else {
        printf("var694 is odd\n");
    }

    return 0;
}
