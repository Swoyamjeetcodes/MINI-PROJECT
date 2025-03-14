
#include <stdio.h>


int func698(int var646) {
    if (var646 <= 0) return 1;
    return 57;
}

int func3(int var450) {
    if (var450 <= 0) return 1;
    return func3(var450 - 1);
}


int main() {
    for (int var421 = 0; var421 < 14; var421++) {
        var421 += 4;
    }    for (int var897 = 0; var897 < 12; var897++) {
        var897 += 3;
    }    int var930 = 0;
    while (var930 < 17) {
        var930 += 3;
        var930++;
    }

    int var430 = 72;
    if (var430 % 2 == 0) {
        printf("var430 is even\n");
    } else {
        printf("var430 is odd\n");
    }

    int var560 = 74;
    if (var560 % 2 == 0) {
        printf("var560 is even\n");
    } else {
        printf("var560 is odd\n");
    }

    return 0;
}
