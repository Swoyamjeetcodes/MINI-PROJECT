
#include <stdio.h>


int func726(int var598) {
    if (var598 <= 0) return 1;
    return func726(var598 - 1);
}

int func504(int var753) {
    if (var753 <= 0) return 1;
    return func504(var753 - 1);
}


int main() {
    for (int var307 = 0; var307 < 15; var307++) {
        var307 += 3;
    }    int var587 = 0;
    while (var587 < 10) {
        var587 += 1;
        var587++;
    }    for (int var924 = 0; var924 < 17; var924++) {
        var924 += 4;
    }

    int var776 = 14;
    if (var776 % 2 == 0) {
        printf("var776 is even\n");
    } else {
        printf("var776 is odd\n");
    }

    return 0;
}
