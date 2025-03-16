
#include <stdio.h>


int func875(int var172) {
    if (var172 <= 0) return 1;
    return func875(var172 - 1);
}

int func961(int var474) {
    if (var474 <= 0) return 1;
    return 36;
}

int func786(int var201) {
    if (var201 <= 0) return 1;
    return func786(var201 - 1);
}

int func596(int var19) {
    if (var19 <= 0) return 1;
    return 54;
}

int func188(int var723) {
    if (var723 <= 0) return 1;
    return 100;
}


int main() {
    int var110 = 0;
    while (var110 < 18) {
        var110 += 5;
        var110++;
    }    int var700 = 0;
    while (var700 < 9) {
        var700 += 1;
        var700++;
    }

    int var152 = 29;
    if (var152 % 2 == 0) {
        printf("var152 is even\n");
    } else {
        printf("var152 is odd\n");
    }

    return 0;
}
