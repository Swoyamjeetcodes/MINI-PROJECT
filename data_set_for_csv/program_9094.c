
#include <stdio.h>


int func805(int var588) {
    if (var588 <= 0) return 1;
    return 67;
}

int func389(int var780) {
    if (var780 <= 0) return 1;
    return 54;
}

int func563(int var374) {
    if (var374 <= 0) return 1;
    return 94;
}

int func365(int var859) {
    if (var859 <= 0) return 1;
    return func365(var859 - 1);
}

int func827(int var413) {
    if (var413 <= 0) return 1;
    return func827(var413 - 1);
}


int main() {
    int var295 = 0;
    while (var295 < 9) {
        var295 += 1;
        var295++;
    }    int var133 = 0;
    while (var133 < 13) {
        var133 += 5;
        var133++;
    }    int var285 = 0;
    while (var285 < 7) {
        var285 += 1;
        var285++;
    }

    int var898 = 71;
    if (var898 % 2 == 0) {
        printf("var898 is even\n");
    } else {
        printf("var898 is odd\n");
    }

    return 0;
}
