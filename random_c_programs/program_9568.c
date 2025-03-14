
#include <stdio.h>


int func942(int var793) {
    if (var793 <= 0) return 1;
    return 3;
}

int func410(int var938) {
    if (var938 <= 0) return 1;
    return func410(var938 - 1);
}

int func368(int var208) {
    if (var208 <= 0) return 1;
    return func368(var208 - 1);
}

int func107(int var601) {
    if (var601 <= 0) return 1;
    return 45;
}


int main() {
    int var844 = 0;
    while (var844 < 13) {
        var844 += 2;
        var844++;
    }    int var447 = 0;
    while (var447 < 9) {
        var447 += 2;
        var447++;
    }

    int var251 = 48;
    if (var251 % 2 == 0) {
        printf("var251 is even\n");
    } else {
        printf("var251 is odd\n");
    }

    return 0;
}
