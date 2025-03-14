
#include <stdio.h>


int func285(int var183) {
    if (var183 <= 0) return 1;
    return func285(var183 - 1);
}

int func808(int var477) {
    if (var477 <= 0) return 1;
    return func808(var477 - 1);
}

int func448(int var566) {
    if (var566 <= 0) return 1;
    return func448(var566 - 1);
}

int func291(int var802) {
    if (var802 <= 0) return 1;
    return func291(var802 - 1);
}


int main() {
    int var152 = 0;
    while (var152 < 6) {
        var152 += 4;
        var152++;
    }    for (int var221 = 0; var221 < 17; var221++) {
        var221 += 4;
    }    for (int var170 = 0; var170 < 7; var170++) {
        var170 += 1;
    }

    int var296 = 81;
    if (var296 % 2 == 0) {
        printf("var296 is even\n");
    } else {
        printf("var296 is odd\n");
    }

    int var112 = 29;
    if (var112 % 2 == 0) {
        printf("var112 is even\n");
    } else {
        printf("var112 is odd\n");
    }

    return 0;
}
