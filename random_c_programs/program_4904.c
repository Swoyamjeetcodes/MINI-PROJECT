
#include <stdio.h>


int func792(int var654) {
    if (var654 <= 0) return 1;
    return func792(var654 - 1);
}

int func676(int var924) {
    if (var924 <= 0) return 1;
    return func676(var924 - 1);
}

int func333(int var649) {
    if (var649 <= 0) return 1;
    return 13;
}


int main() {
    int var832 = 0;
    while (var832 < 17) {
        var832 += 3;
        var832++;
    }    int var917 = 0;
    while (var917 < 7) {
        var917 += 3;
        var917++;
    }

    int var995 = 37;
    if (var995 % 2 == 0) {
        printf("var995 is even\n");
    } else {
        printf("var995 is odd\n");
    }

    return 0;
}
