
#include <stdio.h>


int func270(int var45) {
    if (var45 <= 0) return 1;
    return func270(var45 - 1);
}


int main() {
    for (int var23 = 0; var23 < 17; var23++) {
        var23 += 5;
    }    int var758 = 0;
    while (var758 < 20) {
        var758 += 3;
        var758++;
    }    int var745 = 0;
    while (var745 < 18) {
        var745 += 4;
        var745++;
    }

    int var300 = 33;
    if (var300 % 2 == 0) {
        printf("var300 is even\n");
    } else {
        printf("var300 is odd\n");
    }

    int var867 = 33;
    if (var867 % 2 == 0) {
        printf("var867 is even\n");
    } else {
        printf("var867 is odd\n");
    }

    return 0;
}
