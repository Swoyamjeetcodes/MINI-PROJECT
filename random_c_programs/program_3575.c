
#include <stdio.h>


int func511(int var242) {
    if (var242 <= 0) return 1;
    return func511(var242 - 1);
}

int func780(int var182) {
    if (var182 <= 0) return 1;
    return func780(var182 - 1);
}

int func363(int var153) {
    if (var153 <= 0) return 1;
    return 58;
}

int func303(int var627) {
    if (var627 <= 0) return 1;
    return func303(var627 - 1);
}


int main() {
    for (int var166 = 0; var166 < 8; var166++) {
        var166 += 1;
    }    int var375 = 0;
    while (var375 < 20) {
        var375 += 3;
        var375++;
    }    int var716 = 0;
    while (var716 < 17) {
        var716 += 2;
        var716++;
    }

    int var625 = 50;
    if (var625 % 2 == 0) {
        printf("var625 is even\n");
    } else {
        printf("var625 is odd\n");
    }

    return 0;
}
