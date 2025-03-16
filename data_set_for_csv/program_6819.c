
#include <stdio.h>


int func335(int var339) {
    if (var339 <= 0) return 1;
    return func335(var339 - 1);
}

int func299(int var450) {
    if (var450 <= 0) return 1;
    return func299(var450 - 1);
}

int func915(int var638) {
    if (var638 <= 0) return 1;
    return func915(var638 - 1);
}

int func922(int var104) {
    if (var104 <= 0) return 1;
    return func922(var104 - 1);
}

int func398(int var311) {
    if (var311 <= 0) return 1;
    return 40;
}


int main() {
    int var314 = 0;
    while (var314 < 7) {
        var314 += 1;
        var314++;
    }

    int var76 = 23;
    if (var76 % 2 == 0) {
        printf("var76 is even\n");
    } else {
        printf("var76 is odd\n");
    }

    return 0;
}
