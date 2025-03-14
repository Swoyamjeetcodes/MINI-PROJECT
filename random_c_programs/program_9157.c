
#include <stdio.h>


int func181(int var206) {
    if (var206 <= 0) return 1;
    return func181(var206 - 1);
}

int func389(int var368) {
    if (var368 <= 0) return 1;
    return 13;
}

int func582(int var631) {
    if (var631 <= 0) return 1;
    return func582(var631 - 1);
}


int main() {
    for (int var689 = 0; var689 < 17; var689++) {
        var689 += 3;
    }    int var535 = 0;
    while (var535 < 6) {
        var535 += 5;
        var535++;
    }

    int var108 = 72;
    if (var108 % 2 == 0) {
        printf("var108 is even\n");
    } else {
        printf("var108 is odd\n");
    }

    return 0;
}
