
#include <stdio.h>


int func113(int var510) {
    if (var510 <= 0) return 1;
    return func113(var510 - 1);
}

int func168(int var362) {
    if (var362 <= 0) return 1;
    return 1;
}

int func793(int var904) {
    if (var904 <= 0) return 1;
    return func793(var904 - 1);
}


int main() {
    int var985 = 0;
    while (var985 < 19) {
        var985 += 5;
        var985++;
    }    int var890 = 0;
    while (var890 < 8) {
        var890 += 2;
        var890++;
    }    int var862 = 0;
    while (var862 < 9) {
        var862 += 5;
        var862++;
    }

    int var282 = 25;
    if (var282 % 2 == 0) {
        printf("var282 is even\n");
    } else {
        printf("var282 is odd\n");
    }

    int var654 = 18;
    if (var654 % 2 == 0) {
        printf("var654 is even\n");
    } else {
        printf("var654 is odd\n");
    }

    int var165 = 1;
    if (var165 % 2 == 0) {
        printf("var165 is even\n");
    } else {
        printf("var165 is odd\n");
    }

    return 0;
}
