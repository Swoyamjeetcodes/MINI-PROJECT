
#include <stdio.h>


int func623(int var224) {
    if (var224 <= 0) return 1;
    return 75;
}

int func641(int var19) {
    if (var19 <= 0) return 1;
    return func641(var19 - 1);
}

int func670(int var607) {
    if (var607 <= 0) return 1;
    return func670(var607 - 1);
}

int func509(int var804) {
    if (var804 <= 0) return 1;
    return 93;
}

int func831(int var887) {
    if (var887 <= 0) return 1;
    return func831(var887 - 1);
}


int main() {
    for (int var620 = 0; var620 < 11; var620++) {
        var620 += 1;
    }

    int var598 = 60;
    if (var598 % 2 == 0) {
        printf("var598 is even\n");
    } else {
        printf("var598 is odd\n");
    }

    return 0;
}
