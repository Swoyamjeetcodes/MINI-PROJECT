
#include <stdio.h>


int func641(int var560) {
    if (var560 <= 0) return 1;
    return func641(var560 - 1);
}

int func685(int var759) {
    if (var759 <= 0) return 1;
    return 37;
}

int func283(int var736) {
    if (var736 <= 0) return 1;
    return func283(var736 - 1);
}


int main() {
    for (int var898 = 0; var898 < 12; var898++) {
        var898 += 5;
    }    int var994 = 0;
    while (var994 < 13) {
        var994 += 1;
        var994++;
    }

    int var114 = 68;
    if (var114 % 2 == 0) {
        printf("var114 is even\n");
    } else {
        printf("var114 is odd\n");
    }

    return 0;
}
