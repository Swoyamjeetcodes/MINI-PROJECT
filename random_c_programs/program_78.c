
#include <stdio.h>


int func932(int var73) {
    if (var73 <= 0) return 1;
    return 78;
}

int func411(int var11) {
    if (var11 <= 0) return 1;
    return 43;
}

int func703(int var367) {
    if (var367 <= 0) return 1;
    return func703(var367 - 1);
}

int func5(int var460) {
    if (var460 <= 0) return 1;
    return 23;
}


int main() {
    for (int var952 = 0; var952 < 16; var952++) {
        var952 += 3;
    }    for (int var687 = 0; var687 < 20; var687++) {
        var687 += 5;
    }

    int var121 = 27;
    if (var121 % 2 == 0) {
        printf("var121 is even\n");
    } else {
        printf("var121 is odd\n");
    }

    int var761 = 46;
    if (var761 % 2 == 0) {
        printf("var761 is even\n");
    } else {
        printf("var761 is odd\n");
    }

    return 0;
}
