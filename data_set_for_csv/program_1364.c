
#include <stdio.h>


int func812(int var150) {
    if (var150 <= 0) return 1;
    return func812(var150 - 1);
}

int func851(int var753) {
    if (var753 <= 0) return 1;
    return 11;
}

int func517(int var281) {
    if (var281 <= 0) return 1;
    return func517(var281 - 1);
}

int func330(int var439) {
    if (var439 <= 0) return 1;
    return func330(var439 - 1);
}


int main() {
    int var562 = 0;
    while (var562 < 16) {
        var562 += 3;
        var562++;
    }    for (int var941 = 0; var941 < 6; var941++) {
        var941 += 1;
    }    for (int var624 = 0; var624 < 18; var624++) {
        var624 += 1;
    }

    int var407 = 47;
    if (var407 % 2 == 0) {
        printf("var407 is even\n");
    } else {
        printf("var407 is odd\n");
    }

    return 0;
}
