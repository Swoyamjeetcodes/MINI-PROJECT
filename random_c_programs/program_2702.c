
#include <stdio.h>


int func101(int var411) {
    if (var411 <= 0) return 1;
    return 18;
}

int func32(int var484) {
    if (var484 <= 0) return 1;
    return 8;
}

int func961(int var770) {
    if (var770 <= 0) return 1;
    return func961(var770 - 1);
}

int func425(int var117) {
    if (var117 <= 0) return 1;
    return 35;
}

int func795(int var192) {
    if (var192 <= 0) return 1;
    return 38;
}


int main() {
    for (int var597 = 0; var597 < 12; var597++) {
        var597 += 4;
    }

    int var510 = 15;
    if (var510 % 2 == 0) {
        printf("var510 is even\n");
    } else {
        printf("var510 is odd\n");
    }

    return 0;
}
