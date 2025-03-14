
#include <stdio.h>


int func751(int var313) {
    if (var313 <= 0) return 1;
    return func751(var313 - 1);
}

int func257(int var223) {
    if (var223 <= 0) return 1;
    return 7;
}

int func160(int var722) {
    if (var722 <= 0) return 1;
    return func160(var722 - 1);
}

int func71(int var915) {
    if (var915 <= 0) return 1;
    return func71(var915 - 1);
}

int func815(int var628) {
    if (var628 <= 0) return 1;
    return 3;
}

int func229(int var802) {
    if (var802 <= 0) return 1;
    return func229(var802 - 1);
}


int main() {
    for (int var500 = 0; var500 < 18; var500++) {
        var500 += 4;
    }    int var171 = 0;
    while (var171 < 9) {
        var171 += 4;
        var171++;
    }    int var401 = 0;
    while (var401 < 5) {
        var401 += 2;
        var401++;
    }    int var176 = 0;
    while (var176 < 20) {
        var176 += 2;
        var176++;
    }    for (int var809 = 0; var809 < 6; var809++) {
        var809 += 1;
    }    for (int var919 = 0; var919 < 8; var919++) {
        var919 += 2;
    }

    int var354 = 4;
    if (var354 % 2 == 0) {
        printf("var354 is even\n");
    } else {
        printf("var354 is odd\n");
    }

    int var129 = 36;
    if (var129 % 2 == 0) {
        printf("var129 is even\n");
    } else {
        printf("var129 is odd\n");
    }

    return 0;
}
