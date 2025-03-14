
#include <stdio.h>


int func169(int var883) {
    if (var883 <= 0) return 1;
    return 2;
}

int func986(int var828) {
    if (var828 <= 0) return 1;
    return func986(var828 - 1);
}


int main() {
    for (int var433 = 0; var433 < 11; var433++) {
        var433 += 4;
    }    int var324 = 0;
    while (var324 < 10) {
        var324 += 4;
        var324++;
    }    int var604 = 0;
    while (var604 < 13) {
        var604 += 2;
        var604++;
    }

    int var363 = 92;
    if (var363 % 2 == 0) {
        printf("var363 is even\n");
    } else {
        printf("var363 is odd\n");
    }

    return 0;
}
