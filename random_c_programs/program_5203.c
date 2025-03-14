
#include <stdio.h>


int func802(int var947) {
    if (var947 <= 0) return 1;
    return 10;
}

int func495(int var92) {
    if (var92 <= 0) return 1;
    return 69;
}

int func58(int var939) {
    if (var939 <= 0) return 1;
    return 5;
}

int func289(int var770) {
    if (var770 <= 0) return 1;
    return func289(var770 - 1);
}

int func450(int var849) {
    if (var849 <= 0) return 1;
    return func450(var849 - 1);
}


int main() {
    for (int var708 = 0; var708 < 8; var708++) {
        var708 += 1;
    }    int var792 = 0;
    while (var792 < 6) {
        var792 += 5;
        var792++;
    }    int var550 = 0;
    while (var550 < 9) {
        var550 += 3;
        var550++;
    }

    int var298 = 61;
    if (var298 % 2 == 0) {
        printf("var298 is even\n");
    } else {
        printf("var298 is odd\n");
    }

    return 0;
}
