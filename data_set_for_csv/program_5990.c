
#include <stdio.h>


int func196(int var372) {
    if (var372 <= 0) return 1;
    return func196(var372 - 1);
}

int func805(int var371) {
    if (var371 <= 0) return 1;
    return func805(var371 - 1);
}

int func970(int var534) {
    if (var534 <= 0) return 1;
    return func970(var534 - 1);
}

int func621(int var174) {
    if (var174 <= 0) return 1;
    return 84;
}


int main() {
    for (int var216 = 0; var216 < 11; var216++) {
        var216 += 5;
    }    int var540 = 0;
    while (var540 < 5) {
        var540 += 5;
        var540++;
    }    for (int var461 = 0; var461 < 9; var461++) {
        var461 += 3;
    }

    int var739 = 98;
    if (var739 % 2 == 0) {
        printf("var739 is even\n");
    } else {
        printf("var739 is odd\n");
    }

    int var781 = 24;
    if (var781 % 2 == 0) {
        printf("var781 is even\n");
    } else {
        printf("var781 is odd\n");
    }

    return 0;
}
