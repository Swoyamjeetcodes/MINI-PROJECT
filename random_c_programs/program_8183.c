
#include <stdio.h>


int func221(int var704) {
    if (var704 <= 0) return 1;
    return func221(var704 - 1);
}

int func168(int var386) {
    if (var386 <= 0) return 1;
    return func168(var386 - 1);
}

int func561(int var180) {
    if (var180 <= 0) return 1;
    return func561(var180 - 1);
}

int func328(int var400) {
    if (var400 <= 0) return 1;
    return func328(var400 - 1);
}


int main() {
    int var814 = 0;
    while (var814 < 16) {
        var814 += 1;
        var814++;
    }    int var771 = 0;
    while (var771 < 17) {
        var771 += 3;
        var771++;
    }    for (int var247 = 0; var247 < 6; var247++) {
        var247 += 4;
    }

    int var775 = 18;
    if (var775 % 2 == 0) {
        printf("var775 is even\n");
    } else {
        printf("var775 is odd\n");
    }

    int var827 = 95;
    if (var827 % 2 == 0) {
        printf("var827 is even\n");
    } else {
        printf("var827 is odd\n");
    }

    return 0;
}
