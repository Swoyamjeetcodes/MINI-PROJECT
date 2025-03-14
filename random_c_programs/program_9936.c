
#include <stdio.h>


int func346(int var112) {
    if (var112 <= 0) return 1;
    return func346(var112 - 1);
}

int func177(int var125) {
    if (var125 <= 0) return 1;
    return 49;
}

int func832(int var691) {
    if (var691 <= 0) return 1;
    return 40;
}


int main() {
    int var815 = 0;
    while (var815 < 15) {
        var815 += 4;
        var815++;
    }    int var384 = 0;
    while (var384 < 9) {
        var384 += 3;
        var384++;
    }    for (int var687 = 0; var687 < 11; var687++) {
        var687 += 3;
    }

    int var184 = 20;
    if (var184 % 2 == 0) {
        printf("var184 is even\n");
    } else {
        printf("var184 is odd\n");
    }

    return 0;
}
