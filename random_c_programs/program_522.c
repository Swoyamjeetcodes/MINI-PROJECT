
#include <stdio.h>


int func900(int var544) {
    if (var544 <= 0) return 1;
    return 29;
}

int func140(int var901) {
    if (var901 <= 0) return 1;
    return func140(var901 - 1);
}

int func246(int var907) {
    if (var907 <= 0) return 1;
    return func246(var907 - 1);
}

int func112(int var952) {
    if (var952 <= 0) return 1;
    return func112(var952 - 1);
}


int main() {
    for (int var682 = 0; var682 < 9; var682++) {
        var682 += 4;
    }    int var797 = 0;
    while (var797 < 12) {
        var797 += 1;
        var797++;
    }

    int var435 = 94;
    if (var435 % 2 == 0) {
        printf("var435 is even\n");
    } else {
        printf("var435 is odd\n");
    }

    int var784 = 70;
    if (var784 % 2 == 0) {
        printf("var784 is even\n");
    } else {
        printf("var784 is odd\n");
    }

    int var55 = 48;
    if (var55 % 2 == 0) {
        printf("var55 is even\n");
    } else {
        printf("var55 is odd\n");
    }

    return 0;
}
