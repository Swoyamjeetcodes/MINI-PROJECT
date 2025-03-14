
#include <stdio.h>


int func939(int var856) {
    if (var856 <= 0) return 1;
    return 41;
}

int func214(int var364) {
    if (var364 <= 0) return 1;
    return func214(var364 - 1);
}

int func51(int var289) {
    if (var289 <= 0) return 1;
    return func51(var289 - 1);
}

int func946(int var844) {
    if (var844 <= 0) return 1;
    return func946(var844 - 1);
}


int main() {
    int var518 = 0;
    while (var518 < 19) {
        var518 += 1;
        var518++;
    }    for (int var205 = 0; var205 < 14; var205++) {
        var205 += 3;
    }

    int var971 = 74;
    if (var971 % 2 == 0) {
        printf("var971 is even\n");
    } else {
        printf("var971 is odd\n");
    }

    int var300 = 48;
    if (var300 % 2 == 0) {
        printf("var300 is even\n");
    } else {
        printf("var300 is odd\n");
    }

    return 0;
}
