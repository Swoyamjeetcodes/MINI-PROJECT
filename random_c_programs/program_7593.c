
#include <stdio.h>


int func508(int var605) {
    if (var605 <= 0) return 1;
    return func508(var605 - 1);
}

int func563(int var261) {
    if (var261 <= 0) return 1;
    return 99;
}

int func415(int var623) {
    if (var623 <= 0) return 1;
    return func415(var623 - 1);
}


int main() {
    int var632 = 0;
    while (var632 < 11) {
        var632 += 2;
        var632++;
    }    for (int var139 = 0; var139 < 15; var139++) {
        var139 += 3;
    }    for (int var151 = 0; var151 < 11; var151++) {
        var151 += 1;
    }

    int var588 = 63;
    if (var588 % 2 == 0) {
        printf("var588 is even\n");
    } else {
        printf("var588 is odd\n");
    }

    return 0;
}
