
#include <stdio.h>


int func525(int var427) {
    if (var427 <= 0) return 1;
    return 71;
}

int func726(int var94) {
    if (var94 <= 0) return 1;
    return 90;
}

int func856(int var717) {
    if (var717 <= 0) return 1;
    return 29;
}

int func658(int var420) {
    if (var420 <= 0) return 1;
    return func658(var420 - 1);
}


int main() {
    for (int var667 = 0; var667 < 5; var667++) {
        var667 += 4;
    }    int var949 = 0;
    while (var949 < 13) {
        var949 += 2;
        var949++;
    }    for (int var823 = 0; var823 < 14; var823++) {
        var823 += 2;
    }

    int var353 = 2;
    if (var353 % 2 == 0) {
        printf("var353 is even\n");
    } else {
        printf("var353 is odd\n");
    }

    return 0;
}
