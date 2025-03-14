
#include <stdio.h>


int func143(int var679) {
    if (var679 <= 0) return 1;
    return func143(var679 - 1);
}

int func732(int var354) {
    if (var354 <= 0) return 1;
    return 96;
}


int main() {
    for (int var765 = 0; var765 < 18; var765++) {
        var765 += 3;
    }

    int var938 = 6;
    if (var938 % 2 == 0) {
        printf("var938 is even\n");
    } else {
        printf("var938 is odd\n");
    }

    int var594 = 35;
    if (var594 % 2 == 0) {
        printf("var594 is even\n");
    } else {
        printf("var594 is odd\n");
    }

    int var182 = 23;
    if (var182 % 2 == 0) {
        printf("var182 is even\n");
    } else {
        printf("var182 is odd\n");
    }

    return 0;
}
