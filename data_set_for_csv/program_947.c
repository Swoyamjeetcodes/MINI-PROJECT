
#include <stdio.h>


int func837(int var634) {
    if (var634 <= 0) return 1;
    return 30;
}

int func973(int var256) {
    if (var256 <= 0) return 1;
    return func973(var256 - 1);
}

int func24(int var929) {
    if (var929 <= 0) return 1;
    return func24(var929 - 1);
}

int func849(int var772) {
    if (var772 <= 0) return 1;
    return func849(var772 - 1);
}


int main() {
    int var49 = 0;
    while (var49 < 20) {
        var49 += 1;
        var49++;
    }    for (int var114 = 0; var114 < 14; var114++) {
        var114 += 3;
    }    int var743 = 0;
    while (var743 < 7) {
        var743 += 3;
        var743++;
    }

    int var909 = 83;
    if (var909 % 2 == 0) {
        printf("var909 is even\n");
    } else {
        printf("var909 is odd\n");
    }

    return 0;
}
