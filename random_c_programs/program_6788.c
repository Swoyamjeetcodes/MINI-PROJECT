
#include <stdio.h>


int func271(int var887) {
    if (var887 <= 0) return 1;
    return func271(var887 - 1);
}


int main() {
    for (int var129 = 0; var129 < 18; var129++) {
        var129 += 2;
    }    int var152 = 0;
    while (var152 < 5) {
        var152 += 4;
        var152++;
    }

    int var889 = 18;
    if (var889 % 2 == 0) {
        printf("var889 is even\n");
    } else {
        printf("var889 is odd\n");
    }

    int var201 = 68;
    if (var201 % 2 == 0) {
        printf("var201 is even\n");
    } else {
        printf("var201 is odd\n");
    }

    return 0;
}
