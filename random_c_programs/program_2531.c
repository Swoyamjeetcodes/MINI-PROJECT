
#include <stdio.h>


int func637(int var879) {
    if (var879 <= 0) return 1;
    return 23;
}

int func321(int var693) {
    if (var693 <= 0) return 1;
    return func321(var693 - 1);
}

int func570(int var873) {
    if (var873 <= 0) return 1;
    return 48;
}

int func696(int var100) {
    if (var100 <= 0) return 1;
    return 57;
}


int main() {
    int var913 = 0;
    while (var913 < 18) {
        var913 += 4;
        var913++;
    }    for (int var773 = 0; var773 < 17; var773++) {
        var773 += 4;
    }

    int var485 = 30;
    if (var485 % 2 == 0) {
        printf("var485 is even\n");
    } else {
        printf("var485 is odd\n");
    }

    int var521 = 55;
    if (var521 % 2 == 0) {
        printf("var521 is even\n");
    } else {
        printf("var521 is odd\n");
    }

    return 0;
}
