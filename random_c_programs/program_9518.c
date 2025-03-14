
#include <stdio.h>


int func285(int var39) {
    if (var39 <= 0) return 1;
    return func285(var39 - 1);
}

int func625(int var225) {
    if (var225 <= 0) return 1;
    return func625(var225 - 1);
}

int func58(int var546) {
    if (var546 <= 0) return 1;
    return 85;
}

int func522(int var756) {
    if (var756 <= 0) return 1;
    return func522(var756 - 1);
}


int main() {
    int var850 = 0;
    while (var850 < 15) {
        var850 += 4;
        var850++;
    }    for (int var910 = 0; var910 < 5; var910++) {
        var910 += 2;
    }    for (int var951 = 0; var951 < 5; var951++) {
        var951 += 1;
    }

    int var145 = 95;
    if (var145 % 2 == 0) {
        printf("var145 is even\n");
    } else {
        printf("var145 is odd\n");
    }

    int var433 = 15;
    if (var433 % 2 == 0) {
        printf("var433 is even\n");
    } else {
        printf("var433 is odd\n");
    }

    return 0;
}
