
#include <stdio.h>


int func601(int var41) {
    if (var41 <= 0) return 1;
    return func601(var41 - 1);
}

int func929(int var856) {
    if (var856 <= 0) return 1;
    return 88;
}

int func842(int var133) {
    if (var133 <= 0) return 1;
    return func842(var133 - 1);
}


int main() {
    for (int var766 = 0; var766 < 5; var766++) {
        var766 += 4;
    }    for (int var832 = 0; var832 < 9; var832++) {
        var832 += 2;
    }    int var248 = 0;
    while (var248 < 7) {
        var248 += 1;
        var248++;
    }

    int var981 = 83;
    if (var981 % 2 == 0) {
        printf("var981 is even\n");
    } else {
        printf("var981 is odd\n");
    }

    return 0;
}
