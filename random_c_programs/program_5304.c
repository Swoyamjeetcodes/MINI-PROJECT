
#include <stdio.h>


int func939(int var331) {
    if (var331 <= 0) return 1;
    return func939(var331 - 1);
}

int func492(int var523) {
    if (var523 <= 0) return 1;
    return func492(var523 - 1);
}


int main() {
    for (int var549 = 0; var549 < 9; var549++) {
        var549 += 5;
    }    for (int var223 = 0; var223 < 11; var223++) {
        var223 += 2;
    }

    int var379 = 5;
    if (var379 % 2 == 0) {
        printf("var379 is even\n");
    } else {
        printf("var379 is odd\n");
    }

    int var545 = 63;
    if (var545 % 2 == 0) {
        printf("var545 is even\n");
    } else {
        printf("var545 is odd\n");
    }

    return 0;
}
