
#include <stdio.h>


int func469(int var599) {
    if (var599 <= 0) return 1;
    return func469(var599 - 1);
}

int func450(int var416) {
    if (var416 <= 0) return 1;
    return 28;
}

int func452(int var224) {
    if (var224 <= 0) return 1;
    return func452(var224 - 1);
}

int func82(int var526) {
    if (var526 <= 0) return 1;
    return func82(var526 - 1);
}

int func920(int var27) {
    if (var27 <= 0) return 1;
    return func920(var27 - 1);
}


int main() {
    int var835 = 0;
    while (var835 < 16) {
        var835 += 4;
        var835++;
    }    int var76 = 0;
    while (var76 < 13) {
        var76 += 1;
        var76++;
    }

    int var11 = 52;
    if (var11 % 2 == 0) {
        printf("var11 is even\n");
    } else {
        printf("var11 is odd\n");
    }

    int var235 = 66;
    if (var235 % 2 == 0) {
        printf("var235 is even\n");
    } else {
        printf("var235 is odd\n");
    }

    return 0;
}
