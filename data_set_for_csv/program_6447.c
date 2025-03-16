
#include <stdio.h>


int func899(int var660) {
    if (var660 <= 0) return 1;
    return func899(var660 - 1);
}

int func34(int var250) {
    if (var250 <= 0) return 1;
    return func34(var250 - 1);
}


int main() {
    int var687 = 0;
    while (var687 < 5) {
        var687 += 1;
        var687++;
    }    for (int var287 = 0; var287 < 6; var287++) {
        var287 += 3;
    }    for (int var876 = 0; var876 < 12; var876++) {
        var876 += 2;
    }

    int var838 = 43;
    if (var838 % 2 == 0) {
        printf("var838 is even\n");
    } else {
        printf("var838 is odd\n");
    }

    int var610 = 11;
    if (var610 % 2 == 0) {
        printf("var610 is even\n");
    } else {
        printf("var610 is odd\n");
    }

    return 0;
}
