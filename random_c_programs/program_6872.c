
#include <stdio.h>


int func524(int var35) {
    if (var35 <= 0) return 1;
    return 28;
}

int func375(int var81) {
    if (var81 <= 0) return 1;
    return func375(var81 - 1);
}


int main() {
    int var558 = 0;
    while (var558 < 12) {
        var558 += 5;
        var558++;
    }

    int var197 = 57;
    if (var197 % 2 == 0) {
        printf("var197 is even\n");
    } else {
        printf("var197 is odd\n");
    }

    return 0;
}
