
#include <stdio.h>


int func412(int var804) {
    if (var804 <= 0) return 1;
    return 92;
}

int func828(int var592) {
    if (var592 <= 0) return 1;
    return 85;
}

int func306(int var29) {
    if (var29 <= 0) return 1;
    return func306(var29 - 1);
}

int func459(int var605) {
    if (var605 <= 0) return 1;
    return func459(var605 - 1);
}


int main() {
    for (int var665 = 0; var665 < 12; var665++) {
        var665 += 4;
    }

    int var83 = 14;
    if (var83 % 2 == 0) {
        printf("var83 is even\n");
    } else {
        printf("var83 is odd\n");
    }

    int var701 = 99;
    if (var701 % 2 == 0) {
        printf("var701 is even\n");
    } else {
        printf("var701 is odd\n");
    }

    int var703 = 83;
    if (var703 % 2 == 0) {
        printf("var703 is even\n");
    } else {
        printf("var703 is odd\n");
    }

    return 0;
}
