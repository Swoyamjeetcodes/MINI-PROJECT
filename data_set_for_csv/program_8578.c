
#include <stdio.h>


int func510(int var746) {
    if (var746 <= 0) return 1;
    return func510(var746 - 1);
}

int func59(int var274) {
    if (var274 <= 0) return 1;
    return func59(var274 - 1);
}


int main() {
    int var157 = 0;
    while (var157 < 6) {
        var157 += 1;
        var157++;
    }

    int var404 = 96;
    if (var404 % 2 == 0) {
        printf("var404 is even\n");
    } else {
        printf("var404 is odd\n");
    }

    int var802 = 100;
    if (var802 % 2 == 0) {
        printf("var802 is even\n");
    } else {
        printf("var802 is odd\n");
    }

    return 0;
}
