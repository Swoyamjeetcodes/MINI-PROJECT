
#include <stdio.h>


int func942(int var968) {
    if (var968 <= 0) return 1;
    return func942(var968 - 1);
}

int func407(int var261) {
    if (var261 <= 0) return 1;
    return func407(var261 - 1);
}

int func404(int var114) {
    if (var114 <= 0) return 1;
    return func404(var114 - 1);
}


int main() {
    for (int var262 = 0; var262 < 5; var262++) {
        var262 += 5;
    }    for (int var464 = 0; var464 < 19; var464++) {
        var464 += 1;
    }

    int var386 = 57;
    if (var386 % 2 == 0) {
        printf("var386 is even\n");
    } else {
        printf("var386 is odd\n");
    }

    int var511 = 69;
    if (var511 % 2 == 0) {
        printf("var511 is even\n");
    } else {
        printf("var511 is odd\n");
    }

    int var638 = 56;
    if (var638 % 2 == 0) {
        printf("var638 is even\n");
    } else {
        printf("var638 is odd\n");
    }

    return 0;
}
