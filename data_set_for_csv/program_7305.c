
#include <stdio.h>


int func153(int var887) {
    if (var887 <= 0) return 1;
    return func153(var887 - 1);
}

int func492(int var622) {
    if (var622 <= 0) return 1;
    return 47;
}


int main() {
    int var360 = 0;
    while (var360 < 13) {
        var360 += 4;
        var360++;
    }    int var408 = 0;
    while (var408 < 12) {
        var408 += 5;
        var408++;
    }

    int var97 = 7;
    if (var97 % 2 == 0) {
        printf("var97 is even\n");
    } else {
        printf("var97 is odd\n");
    }

    int var796 = 30;
    if (var796 % 2 == 0) {
        printf("var796 is even\n");
    } else {
        printf("var796 is odd\n");
    }

    return 0;
}
