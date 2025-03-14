
#include <stdio.h>


int func411(int var256) {
    if (var256 <= 0) return 1;
    return 25;
}

int func788(int var68) {
    if (var68 <= 0) return 1;
    return func788(var68 - 1);
}

int func224(int var204) {
    if (var204 <= 0) return 1;
    return func224(var204 - 1);
}

int func561(int var99) {
    if (var99 <= 0) return 1;
    return 30;
}

int func698(int var991) {
    if (var991 <= 0) return 1;
    return 37;
}

int func51(int var946) {
    if (var946 <= 0) return 1;
    return 39;
}

int func199(int var135) {
    if (var135 <= 0) return 1;
    return func199(var135 - 1);
}

int func946(int var110) {
    if (var110 <= 0) return 1;
    return func946(var110 - 1);
}


int main() {
    int var441 = 0;
    while (var441 < 13) {
        var441 += 1;
        var441++;
    }    int var118 = 0;
    while (var118 < 15) {
        var118 += 4;
        var118++;
    }    for (int var165 = 0; var165 < 17; var165++) {
        var165 += 3;
    }

    int var698 = 41;
    if (var698 % 2 == 0) {
        printf("var698 is even\n");
    } else {
        printf("var698 is odd\n");
    }

    return 0;
}
