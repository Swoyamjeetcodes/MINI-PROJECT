
#include <stdio.h>


int func329(int var296) {
    if (var296 <= 0) return 1;
    return 84;
}

int func676(int var86) {
    if (var86 <= 0) return 1;
    return 93;
}

int func513(int var276) {
    if (var276 <= 0) return 1;
    return func513(var276 - 1);
}


int main() {
    for (int var785 = 0; var785 < 13; var785++) {
        var785 += 4;
    }

    int var819 = 54;
    if (var819 % 2 == 0) {
        printf("var819 is even\n");
    } else {
        printf("var819 is odd\n");
    }

    int var823 = 60;
    if (var823 % 2 == 0) {
        printf("var823 is even\n");
    } else {
        printf("var823 is odd\n");
    }

    return 0;
}
