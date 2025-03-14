
#include <stdio.h>


int func732(int var247) {
    if (var247 <= 0) return 1;
    return func732(var247 - 1);
}

int func11(int var679) {
    if (var679 <= 0) return 1;
    return func11(var679 - 1);
}

int func437(int var302) {
    if (var302 <= 0) return 1;
    return 32;
}

int func214(int var834) {
    if (var834 <= 0) return 1;
    return func214(var834 - 1);
}


int main() {
    int var102 = 0;
    while (var102 < 20) {
        var102 += 4;
        var102++;
    }    for (int var68 = 0; var68 < 15; var68++) {
        var68 += 3;
    }    for (int var874 = 0; var874 < 7; var874++) {
        var874 += 3;
    }

    int var869 = 96;
    if (var869 % 2 == 0) {
        printf("var869 is even\n");
    } else {
        printf("var869 is odd\n");
    }

    int var638 = 50;
    if (var638 % 2 == 0) {
        printf("var638 is even\n");
    } else {
        printf("var638 is odd\n");
    }

    int var900 = 77;
    if (var900 % 2 == 0) {
        printf("var900 is even\n");
    } else {
        printf("var900 is odd\n");
    }

    return 0;
}
