
#include <stdio.h>


int func691(int var26) {
    if (var26 <= 0) return 1;
    return 86;
}

int func266(int var459) {
    if (var459 <= 0) return 1;
    return func266(var459 - 1);
}

int func364(int var519) {
    if (var519 <= 0) return 1;
    return func364(var519 - 1);
}

int func697(int var427) {
    if (var427 <= 0) return 1;
    return 65;
}

int func10(int var295) {
    if (var295 <= 0) return 1;
    return 49;
}

int func999(int var977) {
    if (var977 <= 0) return 1;
    return func999(var977 - 1);
}


int main() {
    for (int var614 = 0; var614 < 6; var614++) {
        var614 += 4;
    }

    int var242 = 86;
    if (var242 % 2 == 0) {
        printf("var242 is even\n");
    } else {
        printf("var242 is odd\n");
    }

    int var364 = 14;
    if (var364 % 2 == 0) {
        printf("var364 is even\n");
    } else {
        printf("var364 is odd\n");
    }

    int var835 = 57;
    if (var835 % 2 == 0) {
        printf("var835 is even\n");
    } else {
        printf("var835 is odd\n");
    }

    return 0;
}
