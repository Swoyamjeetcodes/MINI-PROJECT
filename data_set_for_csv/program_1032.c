
#include <stdio.h>


int func769(int var284) {
    if (var284 <= 0) return 1;
    return func769(var284 - 1);
}

int func303(int var809) {
    if (var809 <= 0) return 1;
    return 40;
}

int func992(int var182) {
    if (var182 <= 0) return 1;
    return 100;
}

int func739(int var667) {
    if (var667 <= 0) return 1;
    return 94;
}

int func583(int var467) {
    if (var467 <= 0) return 1;
    return 39;
}


int main() {
    int var637 = 0;
    while (var637 < 7) {
        var637 += 3;
        var637++;
    }    for (int var164 = 0; var164 < 16; var164++) {
        var164 += 3;
    }    for (int var225 = 0; var225 < 9; var225++) {
        var225 += 3;
    }

    int var213 = 7;
    if (var213 % 2 == 0) {
        printf("var213 is even\n");
    } else {
        printf("var213 is odd\n");
    }

    int var863 = 31;
    if (var863 % 2 == 0) {
        printf("var863 is even\n");
    } else {
        printf("var863 is odd\n");
    }

    int var583 = 78;
    if (var583 % 2 == 0) {
        printf("var583 is even\n");
    } else {
        printf("var583 is odd\n");
    }

    return 0;
}
