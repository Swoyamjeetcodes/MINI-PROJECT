
#include <stdio.h>


int func581(int var741) {
    if (var741 <= 0) return 1;
    return func581(var741 - 1);
}

int func435(int var851) {
    if (var851 <= 0) return 1;
    return func435(var851 - 1);
}

int func995(int var633) {
    if (var633 <= 0) return 1;
    return func995(var633 - 1);
}


int main() {
    int var502 = 0;
    while (var502 < 6) {
        var502 += 5;
        var502++;
    }    int var272 = 0;
    while (var272 < 5) {
        var272 += 4;
        var272++;
    }

    int var963 = 72;
    if (var963 % 2 == 0) {
        printf("var963 is even\n");
    } else {
        printf("var963 is odd\n");
    }

    int var861 = 64;
    if (var861 % 2 == 0) {
        printf("var861 is even\n");
    } else {
        printf("var861 is odd\n");
    }

    return 0;
}
