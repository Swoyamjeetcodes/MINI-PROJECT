
#include <stdio.h>


int func130(int var439) {
    if (var439 <= 0) return 1;
    return func130(var439 - 1);
}

int func842(int var903) {
    if (var903 <= 0) return 1;
    return func842(var903 - 1);
}

int func195(int var583) {
    if (var583 <= 0) return 1;
    return 96;
}

int func245(int var814) {
    if (var814 <= 0) return 1;
    return 74;
}


int main() {
    for (int var899 = 0; var899 < 5; var899++) {
        var899 += 1;
    }    for (int var574 = 0; var574 < 16; var574++) {
        var574 += 2;
    }    int var188 = 0;
    while (var188 < 14) {
        var188 += 5;
        var188++;
    }

    int var785 = 40;
    if (var785 % 2 == 0) {
        printf("var785 is even\n");
    } else {
        printf("var785 is odd\n");
    }

    int var176 = 21;
    if (var176 % 2 == 0) {
        printf("var176 is even\n");
    } else {
        printf("var176 is odd\n");
    }

    int var101 = 20;
    if (var101 % 2 == 0) {
        printf("var101 is even\n");
    } else {
        printf("var101 is odd\n");
    }

    return 0;
}
