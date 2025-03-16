
#include <stdio.h>


int func262(int var235) {
    if (var235 <= 0) return 1;
    return 61;
}

int func706(int var215) {
    if (var215 <= 0) return 1;
    return 23;
}

int func939(int var275) {
    if (var275 <= 0) return 1;
    return 92;
}

int func168(int var105) {
    if (var105 <= 0) return 1;
    return func168(var105 - 1);
}

int func517(int var711) {
    if (var711 <= 0) return 1;
    return func517(var711 - 1);
}


int main() {
    int var428 = 0;
    while (var428 < 9) {
        var428 += 4;
        var428++;
    }

    int var911 = 95;
    if (var911 % 2 == 0) {
        printf("var911 is even\n");
    } else {
        printf("var911 is odd\n");
    }

    int var798 = 28;
    if (var798 % 2 == 0) {
        printf("var798 is even\n");
    } else {
        printf("var798 is odd\n");
    }

    return 0;
}
