
#include <stdio.h>


int func192(int var517) {
    if (var517 <= 0) return 1;
    return 54;
}

int func391(int var131) {
    if (var131 <= 0) return 1;
    return func391(var131 - 1);
}

int func666(int var826) {
    if (var826 <= 0) return 1;
    return func666(var826 - 1);
}


int main() {
    int var702 = 0;
    while (var702 < 13) {
        var702 += 5;
        var702++;
    }    int var583 = 0;
    while (var583 < 14) {
        var583 += 5;
        var583++;
    }    for (int var514 = 0; var514 < 16; var514++) {
        var514 += 4;
    }    int var775 = 0;
    while (var775 < 17) {
        var775 += 4;
        var775++;
    }    for (int var799 = 0; var799 < 19; var799++) {
        var799 += 2;
    }    int var184 = 0;
    while (var184 < 13) {
        var184 += 4;
        var184++;
    }

    int var965 = 38;
    if (var965 % 2 == 0) {
        printf("var965 is even\n");
    } else {
        printf("var965 is odd\n");
    }

    int var157 = 97;
    if (var157 % 2 == 0) {
        printf("var157 is even\n");
    } else {
        printf("var157 is odd\n");
    }

    return 0;
}
