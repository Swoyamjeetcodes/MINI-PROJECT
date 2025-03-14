
#include <stdio.h>


int func401(int var108) {
    if (var108 <= 0) return 1;
    return func401(var108 - 1);
}

int func816(int var750) {
    if (var750 <= 0) return 1;
    return func816(var750 - 1);
}

int func558(int var422) {
    if (var422 <= 0) return 1;
    return 45;
}


int main() {
    for (int var178 = 0; var178 < 17; var178++) {
        var178 += 1;
    }    for (int var590 = 0; var590 < 8; var590++) {
        var590 += 3;
    }

    int var310 = 65;
    if (var310 % 2 == 0) {
        printf("var310 is even\n");
    } else {
        printf("var310 is odd\n");
    }

    int var239 = 55;
    if (var239 % 2 == 0) {
        printf("var239 is even\n");
    } else {
        printf("var239 is odd\n");
    }

    return 0;
}
