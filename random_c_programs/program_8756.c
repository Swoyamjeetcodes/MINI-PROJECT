
#include <stdio.h>


int func330(int var244) {
    if (var244 <= 0) return 1;
    return func330(var244 - 1);
}

int func941(int var214) {
    if (var214 <= 0) return 1;
    return func941(var214 - 1);
}

int func756(int var52) {
    if (var52 <= 0) return 1;
    return func756(var52 - 1);
}

int func866(int var402) {
    if (var402 <= 0) return 1;
    return 100;
}

int func140(int var413) {
    if (var413 <= 0) return 1;
    return func140(var413 - 1);
}


int main() {
    for (int var100 = 0; var100 < 17; var100++) {
        var100 += 4;
    }    int var248 = 0;
    while (var248 < 17) {
        var248 += 4;
        var248++;
    }

    int var13 = 25;
    if (var13 % 2 == 0) {
        printf("var13 is even\n");
    } else {
        printf("var13 is odd\n");
    }

    return 0;
}
