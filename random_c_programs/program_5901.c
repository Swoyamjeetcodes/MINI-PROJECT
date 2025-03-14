
#include <stdio.h>


int func827(int var876) {
    if (var876 <= 0) return 1;
    return func827(var876 - 1);
}

int func831(int var870) {
    if (var870 <= 0) return 1;
    return func831(var870 - 1);
}


int main() {
    for (int var787 = 0; var787 < 16; var787++) {
        var787 += 5;
    }    int var887 = 0;
    while (var887 < 9) {
        var887 += 1;
        var887++;
    }    for (int var979 = 0; var979 < 17; var979++) {
        var979 += 3;
    }

    int var727 = 26;
    if (var727 % 2 == 0) {
        printf("var727 is even\n");
    } else {
        printf("var727 is odd\n");
    }

    return 0;
}
