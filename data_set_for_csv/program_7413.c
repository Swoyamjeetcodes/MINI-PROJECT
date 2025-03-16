
#include <stdio.h>


int func584(int var587) {
    if (var587 <= 0) return 1;
    return 30;
}

int func901(int var18) {
    if (var18 <= 0) return 1;
    return 85;
}

int func575(int var184) {
    if (var184 <= 0) return 1;
    return 82;
}

int func537(int var500) {
    if (var500 <= 0) return 1;
    return func537(var500 - 1);
}


int main() {
    for (int var825 = 0; var825 < 13; var825++) {
        var825 += 1;
    }

    int var837 = 9;
    if (var837 % 2 == 0) {
        printf("var837 is even\n");
    } else {
        printf("var837 is odd\n");
    }

    int var296 = 22;
    if (var296 % 2 == 0) {
        printf("var296 is even\n");
    } else {
        printf("var296 is odd\n");
    }

    return 0;
}
