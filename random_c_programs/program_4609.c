
#include <stdio.h>


int func753(int var205) {
    if (var205 <= 0) return 1;
    return func753(var205 - 1);
}

int func5(int var652) {
    if (var652 <= 0) return 1;
    return 49;
}

int func554(int var763) {
    if (var763 <= 0) return 1;
    return func554(var763 - 1);
}


int main() {
    for (int var392 = 0; var392 < 12; var392++) {
        var392 += 5;
    }    for (int var153 = 0; var153 < 20; var153++) {
        var153 += 3;
    }

    int var553 = 4;
    if (var553 % 2 == 0) {
        printf("var553 is even\n");
    } else {
        printf("var553 is odd\n");
    }

    int var950 = 60;
    if (var950 % 2 == 0) {
        printf("var950 is even\n");
    } else {
        printf("var950 is odd\n");
    }

    int var809 = 35;
    if (var809 % 2 == 0) {
        printf("var809 is even\n");
    } else {
        printf("var809 is odd\n");
    }

    return 0;
}
