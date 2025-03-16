
#include <stdio.h>


int func601(int var607) {
    if (var607 <= 0) return 1;
    return func601(var607 - 1);
}

int func502(int var43) {
    if (var43 <= 0) return 1;
    return func502(var43 - 1);
}

int func129(int var725) {
    if (var725 <= 0) return 1;
    return func129(var725 - 1);
}

int func206(int var687) {
    if (var687 <= 0) return 1;
    return func206(var687 - 1);
}

int func190(int var204) {
    if (var204 <= 0) return 1;
    return func190(var204 - 1);
}


int main() {
    for (int var731 = 0; var731 < 18; var731++) {
        var731 += 4;
    }    for (int var405 = 0; var405 < 6; var405++) {
        var405 += 2;
    }    for (int var269 = 0; var269 < 5; var269++) {
        var269 += 2;
    }

    int var523 = 96;
    if (var523 % 2 == 0) {
        printf("var523 is even\n");
    } else {
        printf("var523 is odd\n");
    }

    return 0;
}
