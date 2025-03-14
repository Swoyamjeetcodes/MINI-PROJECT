
#include <stdio.h>


int func425(int var200) {
    if (var200 <= 0) return 1;
    return func425(var200 - 1);
}

int func951(int var950) {
    if (var950 <= 0) return 1;
    return func951(var950 - 1);
}

int func956(int var77) {
    if (var77 <= 0) return 1;
    return 95;
}


int main() {
    for (int var163 = 0; var163 < 18; var163++) {
        var163 += 4;
    }    for (int var248 = 0; var248 < 15; var248++) {
        var248 += 3;
    }

    int var584 = 38;
    if (var584 % 2 == 0) {
        printf("var584 is even\n");
    } else {
        printf("var584 is odd\n");
    }

    int var432 = 71;
    if (var432 % 2 == 0) {
        printf("var432 is even\n");
    } else {
        printf("var432 is odd\n");
    }

    int var120 = 69;
    if (var120 % 2 == 0) {
        printf("var120 is even\n");
    } else {
        printf("var120 is odd\n");
    }

    return 0;
}
