
#include <stdio.h>


int func580(int var418) {
    if (var418 <= 0) return 1;
    return func580(var418 - 1);
}

int func278(int var151) {
    if (var151 <= 0) return 1;
    return 50;
}

int func747(int var693) {
    if (var693 <= 0) return 1;
    return 84;
}

int func752(int var482) {
    if (var482 <= 0) return 1;
    return func752(var482 - 1);
}


int main() {
    int var161 = 0;
    while (var161 < 9) {
        var161 += 1;
        var161++;
    }    for (int var900 = 0; var900 < 12; var900++) {
        var900 += 1;
    }

    int var847 = 12;
    if (var847 % 2 == 0) {
        printf("var847 is even\n");
    } else {
        printf("var847 is odd\n");
    }

    int var305 = 43;
    if (var305 % 2 == 0) {
        printf("var305 is even\n");
    } else {
        printf("var305 is odd\n");
    }

    int var611 = 77;
    if (var611 % 2 == 0) {
        printf("var611 is even\n");
    } else {
        printf("var611 is odd\n");
    }

    return 0;
}
