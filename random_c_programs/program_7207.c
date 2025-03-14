
#include <stdio.h>


int func149(int var696) {
    if (var696 <= 0) return 1;
    return func149(var696 - 1);
}

int func67(int var382) {
    if (var382 <= 0) return 1;
    return func67(var382 - 1);
}

int func842(int var974) {
    if (var974 <= 0) return 1;
    return 7;
}

int func859(int var380) {
    if (var380 <= 0) return 1;
    return 84;
}

int func759(int var6) {
    if (var6 <= 0) return 1;
    return 77;
}


int main() {
    for (int var469 = 0; var469 < 16; var469++) {
        var469 += 4;
    }    for (int var45 = 0; var45 < 7; var45++) {
        var45 += 5;
    }    int var778 = 0;
    while (var778 < 7) {
        var778 += 2;
        var778++;
    }

    int var760 = 13;
    if (var760 % 2 == 0) {
        printf("var760 is even\n");
    } else {
        printf("var760 is odd\n");
    }

    int var323 = 43;
    if (var323 % 2 == 0) {
        printf("var323 is even\n");
    } else {
        printf("var323 is odd\n");
    }

    return 0;
}
