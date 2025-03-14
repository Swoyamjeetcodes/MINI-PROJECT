
#include <stdio.h>


int func996(int var200) {
    if (var200 <= 0) return 1;
    return func996(var200 - 1);
}

int func878(int var633) {
    if (var633 <= 0) return 1;
    return func878(var633 - 1);
}

int func763(int var882) {
    if (var882 <= 0) return 1;
    return 67;
}

int func856(int var502) {
    if (var502 <= 0) return 1;
    return func856(var502 - 1);
}


int main() {
    int var835 = 0;
    while (var835 < 8) {
        var835 += 5;
        var835++;
    }    int var806 = 0;
    while (var806 < 6) {
        var806 += 2;
        var806++;
    }    int var680 = 0;
    while (var680 < 15) {
        var680 += 5;
        var680++;
    }

    int var372 = 74;
    if (var372 % 2 == 0) {
        printf("var372 is even\n");
    } else {
        printf("var372 is odd\n");
    }

    int var695 = 51;
    if (var695 % 2 == 0) {
        printf("var695 is even\n");
    } else {
        printf("var695 is odd\n");
    }

    int var540 = 43;
    if (var540 % 2 == 0) {
        printf("var540 is even\n");
    } else {
        printf("var540 is odd\n");
    }

    return 0;
}
