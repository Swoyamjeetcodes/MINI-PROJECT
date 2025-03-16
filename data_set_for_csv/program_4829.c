
#include <stdio.h>


int func894(int var449) {
    if (var449 <= 0) return 1;
    return func894(var449 - 1);
}

int func627(int var200) {
    if (var200 <= 0) return 1;
    return func627(var200 - 1);
}

int func594(int var807) {
    if (var807 <= 0) return 1;
    return func594(var807 - 1);
}

int func472(int var425) {
    if (var425 <= 0) return 1;
    return 75;
}

int func323(int var810) {
    if (var810 <= 0) return 1;
    return func323(var810 - 1);
}


int main() {
    for (int var495 = 0; var495 < 9; var495++) {
        var495 += 3;
    }    int var770 = 0;
    while (var770 < 12) {
        var770 += 1;
        var770++;
    }

    int var808 = 4;
    if (var808 % 2 == 0) {
        printf("var808 is even\n");
    } else {
        printf("var808 is odd\n");
    }

    return 0;
}
