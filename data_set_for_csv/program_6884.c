
#include <stdio.h>


int func417(int var247) {
    if (var247 <= 0) return 1;
    return 40;
}

int func552(int var212) {
    if (var212 <= 0) return 1;
    return func552(var212 - 1);
}

int func939(int var215) {
    if (var215 <= 0) return 1;
    return func939(var215 - 1);
}

int func695(int var478) {
    if (var478 <= 0) return 1;
    return 3;
}

int func307(int var172) {
    if (var172 <= 0) return 1;
    return 46;
}


int main() {
    int var440 = 0;
    while (var440 < 11) {
        var440 += 5;
        var440++;
    }    for (int var656 = 0; var656 < 20; var656++) {
        var656 += 3;
    }

    int var449 = 98;
    if (var449 % 2 == 0) {
        printf("var449 is even\n");
    } else {
        printf("var449 is odd\n");
    }

    int var282 = 67;
    if (var282 % 2 == 0) {
        printf("var282 is even\n");
    } else {
        printf("var282 is odd\n");
    }

    return 0;
}
