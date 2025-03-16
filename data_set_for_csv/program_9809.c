
#include <stdio.h>


int func745(int var327) {
    if (var327 <= 0) return 1;
    return func745(var327 - 1);
}

int func190(int var960) {
    if (var960 <= 0) return 1;
    return 54;
}

int func693(int var78) {
    if (var78 <= 0) return 1;
    return 42;
}


int main() {
    for (int var592 = 0; var592 < 8; var592++) {
        var592 += 4;
    }

    int var588 = 23;
    if (var588 % 2 == 0) {
        printf("var588 is even\n");
    } else {
        printf("var588 is odd\n");
    }

    return 0;
}
