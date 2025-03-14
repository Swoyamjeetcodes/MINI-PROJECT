
#include <stdio.h>


int func197(int var154) {
    if (var154 <= 0) return 1;
    return func197(var154 - 1);
}

int func28(int var34) {
    if (var34 <= 0) return 1;
    return func28(var34 - 1);
}


int main() {
    int var877 = 0;
    while (var877 < 8) {
        var877 += 1;
        var877++;
    }    for (int var306 = 0; var306 < 10; var306++) {
        var306 += 4;
    }    int var157 = 0;
    while (var157 < 11) {
        var157 += 5;
        var157++;
    }

    int var582 = 93;
    if (var582 % 2 == 0) {
        printf("var582 is even\n");
    } else {
        printf("var582 is odd\n");
    }

    int var848 = 80;
    if (var848 % 2 == 0) {
        printf("var848 is even\n");
    } else {
        printf("var848 is odd\n");
    }

    return 0;
}
