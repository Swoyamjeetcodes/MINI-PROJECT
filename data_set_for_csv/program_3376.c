
#include <stdio.h>


int func99(int var92) {
    if (var92 <= 0) return 1;
    return func99(var92 - 1);
}

int func704(int var551) {
    if (var551 <= 0) return 1;
    return 94;
}

int func598(int var829) {
    if (var829 <= 0) return 1;
    return func598(var829 - 1);
}

int func42(int var531) {
    if (var531 <= 0) return 1;
    return func42(var531 - 1);
}


int main() {
    int var699 = 0;
    while (var699 < 20) {
        var699 += 4;
        var699++;
    }    int var584 = 0;
    while (var584 < 16) {
        var584 += 5;
        var584++;
    }

    int var981 = 27;
    if (var981 % 2 == 0) {
        printf("var981 is even\n");
    } else {
        printf("var981 is odd\n");
    }

    int var162 = 44;
    if (var162 % 2 == 0) {
        printf("var162 is even\n");
    } else {
        printf("var162 is odd\n");
    }

    int var142 = 51;
    if (var142 % 2 == 0) {
        printf("var142 is even\n");
    } else {
        printf("var142 is odd\n");
    }

    return 0;
}
