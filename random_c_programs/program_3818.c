
#include <stdio.h>


int func681(int var508) {
    if (var508 <= 0) return 1;
    return 3;
}

int func582(int var131) {
    if (var131 <= 0) return 1;
    return func582(var131 - 1);
}

int func478(int var920) {
    if (var920 <= 0) return 1;
    return 72;
}

int func317(int var116) {
    if (var116 <= 0) return 1;
    return func317(var116 - 1);
}


int main() {
    int var81 = 0;
    while (var81 < 11) {
        var81 += 1;
        var81++;
    }    int var838 = 0;
    while (var838 < 13) {
        var838 += 1;
        var838++;
    }    for (int var487 = 0; var487 < 8; var487++) {
        var487 += 5;
    }

    int var783 = 33;
    if (var783 % 2 == 0) {
        printf("var783 is even\n");
    } else {
        printf("var783 is odd\n");
    }

    return 0;
}
