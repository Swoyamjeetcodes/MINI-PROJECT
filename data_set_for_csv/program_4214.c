
#include <stdio.h>


int func610(int var896) {
    if (var896 <= 0) return 1;
    return 32;
}

int func923(int var767) {
    if (var767 <= 0) return 1;
    return func923(var767 - 1);
}

int func234(int var272) {
    if (var272 <= 0) return 1;
    return 3;
}

int func418(int var566) {
    if (var566 <= 0) return 1;
    return func418(var566 - 1);
}


int main() {
    for (int var692 = 0; var692 < 12; var692++) {
        var692 += 4;
    }    for (int var78 = 0; var78 < 14; var78++) {
        var78 += 5;
    }

    int var583 = 28;
    if (var583 % 2 == 0) {
        printf("var583 is even\n");
    } else {
        printf("var583 is odd\n");
    }

    int var616 = 100;
    if (var616 % 2 == 0) {
        printf("var616 is even\n");
    } else {
        printf("var616 is odd\n");
    }

    int var920 = 23;
    if (var920 % 2 == 0) {
        printf("var920 is even\n");
    } else {
        printf("var920 is odd\n");
    }

    return 0;
}
