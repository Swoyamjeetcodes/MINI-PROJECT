
#include <stdio.h>


int func310(int var683) {
    if (var683 <= 0) return 1;
    return 50;
}

int func530(int var256) {
    if (var256 <= 0) return 1;
    return func530(var256 - 1);
}

int func428(int var502) {
    if (var502 <= 0) return 1;
    return func428(var502 - 1);
}

int func643(int var108) {
    if (var108 <= 0) return 1;
    return func643(var108 - 1);
}


int main() {
    for (int var268 = 0; var268 < 9; var268++) {
        var268 += 4;
    }    for (int var934 = 0; var934 < 20; var934++) {
        var934 += 5;
    }

    int var955 = 1;
    if (var955 % 2 == 0) {
        printf("var955 is even\n");
    } else {
        printf("var955 is odd\n");
    }

    int var696 = 78;
    if (var696 % 2 == 0) {
        printf("var696 is even\n");
    } else {
        printf("var696 is odd\n");
    }

    return 0;
}
