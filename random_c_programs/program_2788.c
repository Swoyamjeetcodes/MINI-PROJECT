
#include <stdio.h>


int func631(int var924) {
    if (var924 <= 0) return 1;
    return func631(var924 - 1);
}

int func74(int var521) {
    if (var521 <= 0) return 1;
    return func74(var521 - 1);
}

int func100(int var239) {
    if (var239 <= 0) return 1;
    return 55;
}

int func531(int var487) {
    if (var487 <= 0) return 1;
    return func531(var487 - 1);
}

int func267(int var445) {
    if (var445 <= 0) return 1;
    return 65;
}


int main() {
    for (int var785 = 0; var785 < 14; var785++) {
        var785 += 3;
    }    for (int var875 = 0; var875 < 19; var875++) {
        var875 += 1;
    }    int var92 = 0;
    while (var92 < 16) {
        var92 += 1;
        var92++;
    }

    int var583 = 25;
    if (var583 % 2 == 0) {
        printf("var583 is even\n");
    } else {
        printf("var583 is odd\n");
    }

    return 0;
}
