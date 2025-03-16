
#include <stdio.h>


int func848(int var62) {
    if (var62 <= 0) return 1;
    return func848(var62 - 1);
}

int func760(int var826) {
    if (var826 <= 0) return 1;
    return func760(var826 - 1);
}

int func448(int var867) {
    if (var867 <= 0) return 1;
    return func448(var867 - 1);
}


int main() {
    int var595 = 0;
    while (var595 < 13) {
        var595 += 1;
        var595++;
    }    int var450 = 0;
    while (var450 < 11) {
        var450 += 1;
        var450++;
    }    int var593 = 0;
    while (var593 < 5) {
        var593 += 1;
        var593++;
    }

    int var657 = 87;
    if (var657 % 2 == 0) {
        printf("var657 is even\n");
    } else {
        printf("var657 is odd\n");
    }

    return 0;
}
