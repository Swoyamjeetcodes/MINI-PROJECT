
#include <stdio.h>


int func118(int var602) {
    if (var602 <= 0) return 1;
    return 81;
}

int func400(int var832) {
    if (var832 <= 0) return 1;
    return 49;
}

int func466(int var865) {
    if (var865 <= 0) return 1;
    return func466(var865 - 1);
}

int func455(int var732) {
    if (var732 <= 0) return 1;
    return 26;
}

int func122(int var631) {
    if (var631 <= 0) return 1;
    return 38;
}


int main() {
    int var956 = 0;
    while (var956 < 16) {
        var956 += 2;
        var956++;
    }    for (int var117 = 0; var117 < 18; var117++) {
        var117 += 3;
    }    int var471 = 0;
    while (var471 < 10) {
        var471 += 4;
        var471++;
    }

    int var546 = 71;
    if (var546 % 2 == 0) {
        printf("var546 is even\n");
    } else {
        printf("var546 is odd\n");
    }

    return 0;
}
