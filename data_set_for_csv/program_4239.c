
#include <stdio.h>


int func9(int var614) {
    if (var614 <= 0) return 1;
    return func9(var614 - 1);
}

int func664(int var983) {
    if (var983 <= 0) return 1;
    return 65;
}

int func51(int var182) {
    if (var182 <= 0) return 1;
    return 31;
}

int func929(int var541) {
    if (var541 <= 0) return 1;
    return func929(var541 - 1);
}

int func295(int var555) {
    if (var555 <= 0) return 1;
    return func295(var555 - 1);
}

int func535(int var155) {
    if (var155 <= 0) return 1;
    return func535(var155 - 1);
}


int main() {
    int var912 = 0;
    while (var912 < 15) {
        var912 += 1;
        var912++;
    }

    int var812 = 64;
    if (var812 % 2 == 0) {
        printf("var812 is even\n");
    } else {
        printf("var812 is odd\n");
    }

    return 0;
}
