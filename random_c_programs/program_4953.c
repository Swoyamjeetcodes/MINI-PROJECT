
#include <stdio.h>


int func979(int var113) {
    if (var113 <= 0) return 1;
    return func979(var113 - 1);
}

int func36(int var105) {
    if (var105 <= 0) return 1;
    return func36(var105 - 1);
}

int func583(int var804) {
    if (var804 <= 0) return 1;
    return 66;
}

int func845(int var398) {
    if (var398 <= 0) return 1;
    return func845(var398 - 1);
}


int main() {
    int var792 = 0;
    while (var792 < 11) {
        var792 += 2;
        var792++;
    }

    int var770 = 11;
    if (var770 % 2 == 0) {
        printf("var770 is even\n");
    } else {
        printf("var770 is odd\n");
    }

    int var222 = 4;
    if (var222 % 2 == 0) {
        printf("var222 is even\n");
    } else {
        printf("var222 is odd\n");
    }

    return 0;
}
