
#include <stdio.h>


int func35(int var170) {
    if (var170 <= 0) return 1;
    return func35(var170 - 1);
}

int func996(int var362) {
    if (var362 <= 0) return 1;
    return 27;
}

int func605(int var701) {
    if (var701 <= 0) return 1;
    return 61;
}


int main() {
    int var320 = 0;
    while (var320 < 16) {
        var320 += 5;
        var320++;
    }

    int var95 = 32;
    if (var95 % 2 == 0) {
        printf("var95 is even\n");
    } else {
        printf("var95 is odd\n");
    }

    return 0;
}
