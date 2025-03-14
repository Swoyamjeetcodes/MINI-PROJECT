
#include <stdio.h>


int func702(int var171) {
    if (var171 <= 0) return 1;
    return func702(var171 - 1);
}

int func435(int var968) {
    if (var968 <= 0) return 1;
    return 8;
}

int func397(int var362) {
    if (var362 <= 0) return 1;
    return func397(var362 - 1);
}

int func93(int var395) {
    if (var395 <= 0) return 1;
    return 72;
}


int main() {
    int var231 = 0;
    while (var231 < 8) {
        var231 += 2;
        var231++;
    }    int var289 = 0;
    while (var289 < 8) {
        var289 += 2;
        var289++;
    }

    int var447 = 38;
    if (var447 % 2 == 0) {
        printf("var447 is even\n");
    } else {
        printf("var447 is odd\n");
    }

    return 0;
}
