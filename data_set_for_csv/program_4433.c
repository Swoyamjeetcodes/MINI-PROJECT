
#include <stdio.h>


int func635(int var165) {
    if (var165 <= 0) return 1;
    return 15;
}

int func91(int var758) {
    if (var758 <= 0) return 1;
    return func91(var758 - 1);
}


int main() {
    int var621 = 0;
    while (var621 < 15) {
        var621 += 1;
        var621++;
    }    int var759 = 0;
    while (var759 < 18) {
        var759 += 4;
        var759++;
    }    for (int var685 = 0; var685 < 15; var685++) {
        var685 += 2;
    }

    int var465 = 49;
    if (var465 % 2 == 0) {
        printf("var465 is even\n");
    } else {
        printf("var465 is odd\n");
    }

    return 0;
}
