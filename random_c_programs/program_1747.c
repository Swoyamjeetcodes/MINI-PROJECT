
#include <stdio.h>


int func246(int var656) {
    if (var656 <= 0) return 1;
    return func246(var656 - 1);
}


int main() {
    for (int var798 = 0; var798 < 10; var798++) {
        var798 += 2;
    }    for (int var703 = 0; var703 < 15; var703++) {
        var703 += 4;
    }

    int var251 = 52;
    if (var251 % 2 == 0) {
        printf("var251 is even\n");
    } else {
        printf("var251 is odd\n");
    }

    int var85 = 36;
    if (var85 % 2 == 0) {
        printf("var85 is even\n");
    } else {
        printf("var85 is odd\n");
    }

    int var676 = 63;
    if (var676 % 2 == 0) {
        printf("var676 is even\n");
    } else {
        printf("var676 is odd\n");
    }

    return 0;
}
