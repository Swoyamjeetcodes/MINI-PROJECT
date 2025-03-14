
#include <stdio.h>


int func829(int var68) {
    if (var68 <= 0) return 1;
    return func829(var68 - 1);
}

int func804(int var73) {
    if (var73 <= 0) return 1;
    return 8;
}


int main() {
    for (int var155 = 0; var155 < 12; var155++) {
        var155 += 4;
    }    int var589 = 0;
    while (var589 < 5) {
        var589 += 2;
        var589++;
    }    for (int var342 = 0; var342 < 17; var342++) {
        var342 += 3;
    }

    int var315 = 62;
    if (var315 % 2 == 0) {
        printf("var315 is even\n");
    } else {
        printf("var315 is odd\n");
    }

    return 0;
}
