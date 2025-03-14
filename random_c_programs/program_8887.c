
#include <stdio.h>


int func186(int var137) {
    if (var137 <= 0) return 1;
    return 14;
}

int func223(int var656) {
    if (var656 <= 0) return 1;
    return func223(var656 - 1);
}

int func601(int var577) {
    if (var577 <= 0) return 1;
    return func601(var577 - 1);
}


int main() {
    for (int var851 = 0; var851 < 18; var851++) {
        var851 += 2;
    }    int var620 = 0;
    while (var620 < 11) {
        var620 += 2;
        var620++;
    }

    int var253 = 39;
    if (var253 % 2 == 0) {
        printf("var253 is even\n");
    } else {
        printf("var253 is odd\n");
    }

    return 0;
}
