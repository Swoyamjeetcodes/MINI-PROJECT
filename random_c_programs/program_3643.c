
#include <stdio.h>


int func101(int var531) {
    if (var531 <= 0) return 1;
    return func101(var531 - 1);
}

int func498(int var601) {
    if (var601 <= 0) return 1;
    return 33;
}

int func339(int var648) {
    if (var648 <= 0) return 1;
    return func339(var648 - 1);
}

int func254(int var175) {
    if (var175 <= 0) return 1;
    return func254(var175 - 1);
}


int main() {
    int var916 = 0;
    while (var916 < 8) {
        var916 += 4;
        var916++;
    }    int var865 = 0;
    while (var865 < 11) {
        var865 += 5;
        var865++;
    }    int var81 = 0;
    while (var81 < 15) {
        var81 += 2;
        var81++;
    }

    int var736 = 64;
    if (var736 % 2 == 0) {
        printf("var736 is even\n");
    } else {
        printf("var736 is odd\n");
    }

    int var303 = 20;
    if (var303 % 2 == 0) {
        printf("var303 is even\n");
    } else {
        printf("var303 is odd\n");
    }

    return 0;
}
