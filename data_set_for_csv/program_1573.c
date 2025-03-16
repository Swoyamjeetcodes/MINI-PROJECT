
#include <stdio.h>


int func543(int var791) {
    if (var791 <= 0) return 1;
    return func543(var791 - 1);
}

int func283(int var422) {
    if (var422 <= 0) return 1;
    return func283(var422 - 1);
}


int main() {
    for (int var832 = 0; var832 < 14; var832++) {
        var832 += 1;
    }    int var136 = 0;
    while (var136 < 7) {
        var136 += 1;
        var136++;
    }    for (int var664 = 0; var664 < 18; var664++) {
        var664 += 1;
    }

    int var105 = 97;
    if (var105 % 2 == 0) {
        printf("var105 is even\n");
    } else {
        printf("var105 is odd\n");
    }

    int var108 = 47;
    if (var108 % 2 == 0) {
        printf("var108 is even\n");
    } else {
        printf("var108 is odd\n");
    }

    int var358 = 19;
    if (var358 % 2 == 0) {
        printf("var358 is even\n");
    } else {
        printf("var358 is odd\n");
    }

    return 0;
}
