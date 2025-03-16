
#include <stdio.h>


int func603(int var368) {
    if (var368 <= 0) return 1;
    return func603(var368 - 1);
}

int func503(int var132) {
    if (var132 <= 0) return 1;
    return func503(var132 - 1);
}


int main() {
    for (int var105 = 0; var105 < 6; var105++) {
        var105 += 5;
    }    for (int var151 = 0; var151 < 9; var151++) {
        var151 += 5;
    }

    int var248 = 51;
    if (var248 % 2 == 0) {
        printf("var248 is even\n");
    } else {
        printf("var248 is odd\n");
    }

    int var632 = 71;
    if (var632 % 2 == 0) {
        printf("var632 is even\n");
    } else {
        printf("var632 is odd\n");
    }

    return 0;
}
