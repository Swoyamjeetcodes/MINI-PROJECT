
#include <stdio.h>


int func834(int var931) {
    if (var931 <= 0) return 1;
    return func834(var931 - 1);
}

int func179(int var639) {
    if (var639 <= 0) return 1;
    return func179(var639 - 1);
}

int func375(int var345) {
    if (var345 <= 0) return 1;
    return 80;
}


int main() {
    for (int var764 = 0; var764 < 18; var764++) {
        var764 += 2;
    }    for (int var561 = 0; var561 < 16; var561++) {
        var561 += 3;
    }

    int var541 = 36;
    if (var541 % 2 == 0) {
        printf("var541 is even\n");
    } else {
        printf("var541 is odd\n");
    }

    int var500 = 89;
    if (var500 % 2 == 0) {
        printf("var500 is even\n");
    } else {
        printf("var500 is odd\n");
    }

    int var895 = 2;
    if (var895 % 2 == 0) {
        printf("var895 is even\n");
    } else {
        printf("var895 is odd\n");
    }

    return 0;
}
