
#include <stdio.h>


int func243(int var187) {
    if (var187 <= 0) return 1;
    return 63;
}

int func404(int var219) {
    if (var219 <= 0) return 1;
    return 93;
}

int func130(int var26) {
    if (var26 <= 0) return 1;
    return func130(var26 - 1);
}


int main() {
    for (int var552 = 0; var552 < 8; var552++) {
        var552 += 3;
    }    int var746 = 0;
    while (var746 < 17) {
        var746 += 1;
        var746++;
    }

    int var341 = 63;
    if (var341 % 2 == 0) {
        printf("var341 is even\n");
    } else {
        printf("var341 is odd\n");
    }

    int var722 = 17;
    if (var722 % 2 == 0) {
        printf("var722 is even\n");
    } else {
        printf("var722 is odd\n");
    }

    return 0;
}
