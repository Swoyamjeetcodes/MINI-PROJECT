
#include <stdio.h>


int func923(int var397) {
    if (var397 <= 0) return 1;
    return func923(var397 - 1);
}

int func954(int var371) {
    if (var371 <= 0) return 1;
    return func954(var371 - 1);
}

int func820(int var295) {
    if (var295 <= 0) return 1;
    return func820(var295 - 1);
}

int func334(int var41) {
    if (var41 <= 0) return 1;
    return func334(var41 - 1);
}


int main() {
    int var806 = 0;
    while (var806 < 17) {
        var806 += 1;
        var806++;
    }    int var315 = 0;
    while (var315 < 6) {
        var315 += 4;
        var315++;
    }    for (int var788 = 0; var788 < 12; var788++) {
        var788 += 4;
    }

    int var632 = 90;
    if (var632 % 2 == 0) {
        printf("var632 is even\n");
    } else {
        printf("var632 is odd\n");
    }

    int var28 = 72;
    if (var28 % 2 == 0) {
        printf("var28 is even\n");
    } else {
        printf("var28 is odd\n");
    }

    int var634 = 82;
    if (var634 % 2 == 0) {
        printf("var634 is even\n");
    } else {
        printf("var634 is odd\n");
    }

    return 0;
}
