
#include <stdio.h>


int func213(int var932) {
    if (var932 <= 0) return 1;
    return func213(var932 - 1);
}

int func790(int var156) {
    if (var156 <= 0) return 1;
    return func790(var156 - 1);
}

int func61(int var110) {
    if (var110 <= 0) return 1;
    return 7;
}


int main() {
    int var759 = 0;
    while (var759 < 12) {
        var759 += 3;
        var759++;
    }    int var701 = 0;
    while (var701 < 12) {
        var701 += 2;
        var701++;
    }

    int var188 = 26;
    if (var188 % 2 == 0) {
        printf("var188 is even\n");
    } else {
        printf("var188 is odd\n");
    }

    int var438 = 68;
    if (var438 % 2 == 0) {
        printf("var438 is even\n");
    } else {
        printf("var438 is odd\n");
    }

    return 0;
}
