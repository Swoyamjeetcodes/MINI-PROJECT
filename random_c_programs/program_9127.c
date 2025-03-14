
#include <stdio.h>


int func397(int var371) {
    if (var371 <= 0) return 1;
    return 29;
}

int func695(int var212) {
    if (var212 <= 0) return 1;
    return 71;
}

int func958(int var791) {
    if (var791 <= 0) return 1;
    return func958(var791 - 1);
}


int main() {
    for (int var468 = 0; var468 < 8; var468++) {
        var468 += 3;
    }    int var297 = 0;
    while (var297 < 8) {
        var297 += 1;
        var297++;
    }    for (int var329 = 0; var329 < 18; var329++) {
        var329 += 2;
    }

    int var84 = 2;
    if (var84 % 2 == 0) {
        printf("var84 is even\n");
    } else {
        printf("var84 is odd\n");
    }

    return 0;
}
