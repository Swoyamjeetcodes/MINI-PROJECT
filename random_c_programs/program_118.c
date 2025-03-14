
#include <stdio.h>


int func266(int var373) {
    if (var373 <= 0) return 1;
    return func266(var373 - 1);
}

int func229(int var286) {
    if (var286 <= 0) return 1;
    return func229(var286 - 1);
}


int main() {
    for (int var633 = 0; var633 < 14; var633++) {
        var633 += 5;
    }    for (int var2 = 0; var2 < 16; var2++) {
        var2 += 4;
    }    int var784 = 0;
    while (var784 < 9) {
        var784 += 5;
        var784++;
    }

    int var411 = 93;
    if (var411 % 2 == 0) {
        printf("var411 is even\n");
    } else {
        printf("var411 is odd\n");
    }

    return 0;
}
