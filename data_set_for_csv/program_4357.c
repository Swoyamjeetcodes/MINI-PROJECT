
#include <stdio.h>


int func413(int var998) {
    if (var998 <= 0) return 1;
    return func413(var998 - 1);
}

int func661(int var133) {
    if (var133 <= 0) return 1;
    return func661(var133 - 1);
}

int func125(int var852) {
    if (var852 <= 0) return 1;
    return 88;
}

int func835(int var280) {
    if (var280 <= 0) return 1;
    return func835(var280 - 1);
}

int func797(int var198) {
    if (var198 <= 0) return 1;
    return func797(var198 - 1);
}


int main() {
    for (int var189 = 0; var189 < 19; var189++) {
        var189 += 5;
    }    for (int var496 = 0; var496 < 13; var496++) {
        var496 += 2;
    }

    int var7 = 3;
    if (var7 % 2 == 0) {
        printf("var7 is even\n");
    } else {
        printf("var7 is odd\n");
    }

    int var379 = 90;
    if (var379 % 2 == 0) {
        printf("var379 is even\n");
    } else {
        printf("var379 is odd\n");
    }

    return 0;
}
