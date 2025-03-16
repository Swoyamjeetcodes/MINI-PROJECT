
#include <stdio.h>


int func364(int var171) {
    if (var171 <= 0) return 1;
    return func364(var171 - 1);
}

int func708(int var771) {
    if (var771 <= 0) return 1;
    return func708(var771 - 1);
}


int main() {
    for (int var358 = 0; var358 < 18; var358++) {
        var358 += 3;
    }    for (int var181 = 0; var181 < 9; var181++) {
        var181 += 1;
    }

    int var244 = 52;
    if (var244 % 2 == 0) {
        printf("var244 is even\n");
    } else {
        printf("var244 is odd\n");
    }

    int var157 = 12;
    if (var157 % 2 == 0) {
        printf("var157 is even\n");
    } else {
        printf("var157 is odd\n");
    }

    int var938 = 79;
    if (var938 % 2 == 0) {
        printf("var938 is even\n");
    } else {
        printf("var938 is odd\n");
    }

    return 0;
}
