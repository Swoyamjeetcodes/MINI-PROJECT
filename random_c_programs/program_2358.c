
#include <stdio.h>


int func588(int var205) {
    if (var205 <= 0) return 1;
    return func588(var205 - 1);
}

int func687(int var729) {
    if (var729 <= 0) return 1;
    return func687(var729 - 1);
}

int func679(int var549) {
    if (var549 <= 0) return 1;
    return func679(var549 - 1);
}


int main() {
    int var219 = 0;
    while (var219 < 8) {
        var219 += 5;
        var219++;
    }    for (int var885 = 0; var885 < 16; var885++) {
        var885 += 1;
    }

    int var795 = 80;
    if (var795 % 2 == 0) {
        printf("var795 is even\n");
    } else {
        printf("var795 is odd\n");
    }

    return 0;
}
