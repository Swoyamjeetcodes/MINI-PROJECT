
#include <stdio.h>


int func886(int var749) {
    if (var749 <= 0) return 1;
    return 49;
}

int func64(int var422) {
    if (var422 <= 0) return 1;
    return func64(var422 - 1);
}


int main() {
    int var446 = 0;
    while (var446 < 8) {
        var446 += 3;
        var446++;
    }    int var233 = 0;
    while (var233 < 11) {
        var233 += 4;
        var233++;
    }    int var980 = 0;
    while (var980 < 8) {
        var980 += 5;
        var980++;
    }

    int var792 = 43;
    if (var792 % 2 == 0) {
        printf("var792 is even\n");
    } else {
        printf("var792 is odd\n");
    }

    int var774 = 66;
    if (var774 % 2 == 0) {
        printf("var774 is even\n");
    } else {
        printf("var774 is odd\n");
    }

    return 0;
}
