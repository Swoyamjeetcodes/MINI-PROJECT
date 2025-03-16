
#include <stdio.h>


int func665(int var428) {
    if (var428 <= 0) return 1;
    return func665(var428 - 1);
}

int func29(int var818) {
    if (var818 <= 0) return 1;
    return func29(var818 - 1);
}


int main() {
    for (int var561 = 0; var561 < 14; var561++) {
        var561 += 2;
    }    int var971 = 0;
    while (var971 < 11) {
        var971 += 3;
        var971++;
    }

    int var738 = 82;
    if (var738 % 2 == 0) {
        printf("var738 is even\n");
    } else {
        printf("var738 is odd\n");
    }

    return 0;
}
