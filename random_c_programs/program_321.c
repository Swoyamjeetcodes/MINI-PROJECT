
#include <stdio.h>


int func425(int var136) {
    if (var136 <= 0) return 1;
    return func425(var136 - 1);
}


int main() {
    for (int var692 = 0; var692 < 12; var692++) {
        var692 += 5;
    }    for (int var959 = 0; var959 < 20; var959++) {
        var959 += 3;
    }    for (int var512 = 0; var512 < 8; var512++) {
        var512 += 3;
    }

    int var675 = 4;
    if (var675 % 2 == 0) {
        printf("var675 is even\n");
    } else {
        printf("var675 is odd\n");
    }

    int var253 = 12;
    if (var253 % 2 == 0) {
        printf("var253 is even\n");
    } else {
        printf("var253 is odd\n");
    }

    return 0;
}
