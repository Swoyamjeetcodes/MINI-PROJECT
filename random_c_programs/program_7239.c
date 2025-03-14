
#include <stdio.h>


int func792(int var585) {
    if (var585 <= 0) return 1;
    return func792(var585 - 1);
}

int func488(int var808) {
    if (var808 <= 0) return 1;
    return func488(var808 - 1);
}


int main() {
    int var904 = 0;
    while (var904 < 7) {
        var904 += 2;
        var904++;
    }    int var893 = 0;
    while (var893 < 8) {
        var893 += 3;
        var893++;
    }

    int var229 = 52;
    if (var229 % 2 == 0) {
        printf("var229 is even\n");
    } else {
        printf("var229 is odd\n");
    }

    int var50 = 23;
    if (var50 % 2 == 0) {
        printf("var50 is even\n");
    } else {
        printf("var50 is odd\n");
    }

    return 0;
}
