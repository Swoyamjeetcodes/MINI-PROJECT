
#include <stdio.h>


int func231(int var554) {
    if (var554 <= 0) return 1;
    return func231(var554 - 1);
}

int func506(int var744) {
    if (var744 <= 0) return 1;
    return 3;
}

int func745(int var768) {
    if (var768 <= 0) return 1;
    return func745(var768 - 1);
}


int main() {
    int var29 = 0;
    while (var29 < 13) {
        var29 += 1;
        var29++;
    }    int var986 = 0;
    while (var986 < 20) {
        var986 += 5;
        var986++;
    }    int var472 = 0;
    while (var472 < 16) {
        var472 += 5;
        var472++;
    }

    int var293 = 72;
    if (var293 % 2 == 0) {
        printf("var293 is even\n");
    } else {
        printf("var293 is odd\n");
    }

    int var710 = 78;
    if (var710 % 2 == 0) {
        printf("var710 is even\n");
    } else {
        printf("var710 is odd\n");
    }

    return 0;
}
