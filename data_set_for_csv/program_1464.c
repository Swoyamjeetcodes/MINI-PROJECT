
#include <stdio.h>


int func24(int var422) {
    if (var422 <= 0) return 1;
    return func24(var422 - 1);
}


int main() {
    for (int var195 = 0; var195 < 8; var195++) {
        var195 += 1;
    }    int var345 = 0;
    while (var345 < 13) {
        var345 += 5;
        var345++;
    }

    int var424 = 13;
    if (var424 % 2 == 0) {
        printf("var424 is even\n");
    } else {
        printf("var424 is odd\n");
    }

    int var247 = 97;
    if (var247 % 2 == 0) {
        printf("var247 is even\n");
    } else {
        printf("var247 is odd\n");
    }

    return 0;
}
