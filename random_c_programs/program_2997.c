
#include <stdio.h>


int func864(int var503) {
    if (var503 <= 0) return 1;
    return func864(var503 - 1);
}

int func966(int var354) {
    if (var354 <= 0) return 1;
    return func966(var354 - 1);
}

int func695(int var398) {
    if (var398 <= 0) return 1;
    return 24;
}

int func248(int var329) {
    if (var329 <= 0) return 1;
    return func248(var329 - 1);
}


int main() {
    for (int var733 = 0; var733 < 11; var733++) {
        var733 += 4;
    }

    int var5 = 76;
    if (var5 % 2 == 0) {
        printf("var5 is even\n");
    } else {
        printf("var5 is odd\n");
    }

    return 0;
}
