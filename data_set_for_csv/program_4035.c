
#include <stdio.h>


int func25(int var672) {
    if (var672 <= 0) return 1;
    return 8;
}

int func524(int var572) {
    if (var572 <= 0) return 1;
    return func524(var572 - 1);
}

int func466(int var685) {
    if (var685 <= 0) return 1;
    return func466(var685 - 1);
}

int func889(int var582) {
    if (var582 <= 0) return 1;
    return 83;
}

int func200(int var885) {
    if (var885 <= 0) return 1;
    return func200(var885 - 1);
}


int main() {
    for (int var540 = 0; var540 < 17; var540++) {
        var540 += 1;
    }    for (int var269 = 0; var269 < 10; var269++) {
        var269 += 1;
    }    for (int var981 = 0; var981 < 20; var981++) {
        var981 += 1;
    }

    int var522 = 71;
    if (var522 % 2 == 0) {
        printf("var522 is even\n");
    } else {
        printf("var522 is odd\n");
    }

    int var776 = 78;
    if (var776 % 2 == 0) {
        printf("var776 is even\n");
    } else {
        printf("var776 is odd\n");
    }

    return 0;
}
