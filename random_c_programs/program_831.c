
#include <stdio.h>


int func150(int var936) {
    if (var936 <= 0) return 1;
    return func150(var936 - 1);
}

int func792(int var500) {
    if (var500 <= 0) return 1;
    return func792(var500 - 1);
}

int func507(int var596) {
    if (var596 <= 0) return 1;
    return 45;
}

int func511(int var160) {
    if (var160 <= 0) return 1;
    return 22;
}


int main() {
    for (int var388 = 0; var388 < 5; var388++) {
        var388 += 4;
    }    for (int var807 = 0; var807 < 14; var807++) {
        var807 += 2;
    }

    int var539 = 79;
    if (var539 % 2 == 0) {
        printf("var539 is even\n");
    } else {
        printf("var539 is odd\n");
    }

    return 0;
}
