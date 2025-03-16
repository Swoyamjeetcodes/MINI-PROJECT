
#include <stdio.h>


int func553(int var787) {
    if (var787 <= 0) return 1;
    return func553(var787 - 1);
}


int main() {
    int var554 = 0;
    while (var554 < 20) {
        var554 += 3;
        var554++;
    }    for (int var180 = 0; var180 < 6; var180++) {
        var180 += 1;
    }    int var139 = 0;
    while (var139 < 18) {
        var139 += 5;
        var139++;
    }    int var510 = 0;
    while (var510 < 5) {
        var510 += 5;
        var510++;
    }

    int var931 = 70;
    if (var931 % 2 == 0) {
        printf("var931 is even\n");
    } else {
        printf("var931 is odd\n");
    }

    return 0;
}
