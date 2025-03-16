
#include <stdio.h>


int func138(int var734) {
    if (var734 <= 0) return 1;
    return 63;
}

int func836(int var494) {
    if (var494 <= 0) return 1;
    return func836(var494 - 1);
}


int main() {
    int var241 = 0;
    while (var241 < 10) {
        var241 += 1;
        var241++;
    }    for (int var16 = 0; var16 < 19; var16++) {
        var16 += 2;
    }

    int var95 = 55;
    if (var95 % 2 == 0) {
        printf("var95 is even\n");
    } else {
        printf("var95 is odd\n");
    }

    int var896 = 64;
    if (var896 % 2 == 0) {
        printf("var896 is even\n");
    } else {
        printf("var896 is odd\n");
    }

    return 0;
}
