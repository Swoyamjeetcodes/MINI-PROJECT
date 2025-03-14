
#include <stdio.h>


int func770(int var672) {
    if (var672 <= 0) return 1;
    return 44;
}

int func877(int var552) {
    if (var552 <= 0) return 1;
    return func877(var552 - 1);
}

int func948(int var631) {
    if (var631 <= 0) return 1;
    return 74;
}

int func150(int var826) {
    if (var826 <= 0) return 1;
    return func150(var826 - 1);
}

int func278(int var447) {
    if (var447 <= 0) return 1;
    return 17;
}


int main() {
    int var55 = 0;
    while (var55 < 6) {
        var55 += 5;
        var55++;
    }    for (int var768 = 0; var768 < 16; var768++) {
        var768 += 1;
    }

    int var348 = 60;
    if (var348 % 2 == 0) {
        printf("var348 is even\n");
    } else {
        printf("var348 is odd\n");
    }

    int var270 = 49;
    if (var270 % 2 == 0) {
        printf("var270 is even\n");
    } else {
        printf("var270 is odd\n");
    }

    int var761 = 34;
    if (var761 % 2 == 0) {
        printf("var761 is even\n");
    } else {
        printf("var761 is odd\n");
    }

    return 0;
}
