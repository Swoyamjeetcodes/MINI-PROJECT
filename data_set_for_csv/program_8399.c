
#include <stdio.h>


int func631(int var163) {
    if (var163 <= 0) return 1;
    return func631(var163 - 1);
}

int func884(int var793) {
    if (var793 <= 0) return 1;
    return 74;
}


int main() {
    for (int var18 = 0; var18 < 13; var18++) {
        var18 += 4;
    }    int var269 = 0;
    while (var269 < 15) {
        var269 += 5;
        var269++;
    }    for (int var785 = 0; var785 < 17; var785++) {
        var785 += 2;
    }

    int var758 = 4;
    if (var758 % 2 == 0) {
        printf("var758 is even\n");
    } else {
        printf("var758 is odd\n");
    }

    int var649 = 98;
    if (var649 % 2 == 0) {
        printf("var649 is even\n");
    } else {
        printf("var649 is odd\n");
    }

    int var433 = 73;
    if (var433 % 2 == 0) {
        printf("var433 is even\n");
    } else {
        printf("var433 is odd\n");
    }

    return 0;
}
