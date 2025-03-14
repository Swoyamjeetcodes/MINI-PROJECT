
#include <stdio.h>


int func14(int var590) {
    if (var590 <= 0) return 1;
    return 66;
}

int func493(int var81) {
    if (var81 <= 0) return 1;
    return 40;
}

int func232(int var409) {
    if (var409 <= 0) return 1;
    return 15;
}

int func93(int var586) {
    if (var586 <= 0) return 1;
    return func93(var586 - 1);
}


int main() {
    int var602 = 0;
    while (var602 < 11) {
        var602 += 2;
        var602++;
    }    int var620 = 0;
    while (var620 < 19) {
        var620 += 3;
        var620++;
    }    for (int var178 = 0; var178 < 19; var178++) {
        var178 += 1;
    }

    int var220 = 98;
    if (var220 % 2 == 0) {
        printf("var220 is even\n");
    } else {
        printf("var220 is odd\n");
    }

    int var240 = 49;
    if (var240 % 2 == 0) {
        printf("var240 is even\n");
    } else {
        printf("var240 is odd\n");
    }

    return 0;
}
