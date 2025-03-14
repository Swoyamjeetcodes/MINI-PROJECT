
#include <stdio.h>


int func425(int var139) {
    if (var139 <= 0) return 1;
    return func425(var139 - 1);
}


int main() {
    int var800 = 0;
    while (var800 < 19) {
        var800 += 2;
        var800++;
    }    int var939 = 0;
    while (var939 < 17) {
        var939 += 2;
        var939++;
    }    int var172 = 0;
    while (var172 < 8) {
        var172 += 4;
        var172++;
    }

    int var481 = 40;
    if (var481 % 2 == 0) {
        printf("var481 is even\n");
    } else {
        printf("var481 is odd\n");
    }

    return 0;
}
