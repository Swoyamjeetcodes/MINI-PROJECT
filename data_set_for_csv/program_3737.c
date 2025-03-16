
#include <stdio.h>


int func105(int var703) {
    if (var703 <= 0) return 1;
    return func105(var703 - 1);
}

int func548(int var265) {
    if (var265 <= 0) return 1;
    return 95;
}


int main() {
    int var571 = 0;
    while (var571 < 12) {
        var571 += 4;
        var571++;
    }

    int var724 = 17;
    if (var724 % 2 == 0) {
        printf("var724 is even\n");
    } else {
        printf("var724 is odd\n");
    }

    int var438 = 68;
    if (var438 % 2 == 0) {
        printf("var438 is even\n");
    } else {
        printf("var438 is odd\n");
    }

    return 0;
}
