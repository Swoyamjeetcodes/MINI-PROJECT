
#include <stdio.h>


int func656(int var77) {
    if (var77 <= 0) return 1;
    return func656(var77 - 1);
}

int func721(int var631) {
    if (var631 <= 0) return 1;
    return 25;
}

int func748(int var264) {
    if (var264 <= 0) return 1;
    return 43;
}

int func73(int var482) {
    if (var482 <= 0) return 1;
    return 48;
}

int func396(int var646) {
    if (var646 <= 0) return 1;
    return 10;
}


int main() {
    for (int var101 = 0; var101 < 19; var101++) {
        var101 += 3;
    }    int var43 = 0;
    while (var43 < 19) {
        var43 += 2;
        var43++;
    }

    int var227 = 68;
    if (var227 % 2 == 0) {
        printf("var227 is even\n");
    } else {
        printf("var227 is odd\n");
    }

    int var172 = 38;
    if (var172 % 2 == 0) {
        printf("var172 is even\n");
    } else {
        printf("var172 is odd\n");
    }

    int var798 = 33;
    if (var798 % 2 == 0) {
        printf("var798 is even\n");
    } else {
        printf("var798 is odd\n");
    }

    return 0;
}
