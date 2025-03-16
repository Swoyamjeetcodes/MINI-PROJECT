
#include <stdio.h>


int func495(int var757) {
    if (var757 <= 0) return 1;
    return 72;
}

int func639(int var289) {
    if (var289 <= 0) return 1;
    return func639(var289 - 1);
}

int func176(int var496) {
    if (var496 <= 0) return 1;
    return func176(var496 - 1);
}


int main() {
    int var834 = 0;
    while (var834 < 17) {
        var834 += 3;
        var834++;
    }    for (int var433 = 0; var433 < 8; var433++) {
        var433 += 2;
    }

    int var234 = 8;
    if (var234 % 2 == 0) {
        printf("var234 is even\n");
    } else {
        printf("var234 is odd\n");
    }

    return 0;
}
