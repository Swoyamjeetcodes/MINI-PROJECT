
#include <stdio.h>


int func278(int var480) {
    if (var480 <= 0) return 1;
    return 70;
}

int func882(int var631) {
    if (var631 <= 0) return 1;
    return func882(var631 - 1);
}


int main() {
    for (int var202 = 0; var202 < 6; var202++) {
        var202 += 3;
    }    for (int var623 = 0; var623 < 11; var623++) {
        var623 += 1;
    }    for (int var757 = 0; var757 < 12; var757++) {
        var757 += 1;
    }

    int var209 = 83;
    if (var209 % 2 == 0) {
        printf("var209 is even\n");
    } else {
        printf("var209 is odd\n");
    }

    int var475 = 94;
    if (var475 % 2 == 0) {
        printf("var475 is even\n");
    } else {
        printf("var475 is odd\n");
    }

    return 0;
}
