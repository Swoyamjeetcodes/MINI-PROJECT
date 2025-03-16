
#include <stdio.h>


int func355(int var638) {
    if (var638 <= 0) return 1;
    return func355(var638 - 1);
}

int func895(int var329) {
    if (var329 <= 0) return 1;
    return func895(var329 - 1);
}

int func2(int var512) {
    if (var512 <= 0) return 1;
    return func2(var512 - 1);
}

int func641(int var963) {
    if (var963 <= 0) return 1;
    return 95;
}


int main() {
    for (int var640 = 0; var640 < 18; var640++) {
        var640 += 5;
    }    for (int var697 = 0; var697 < 7; var697++) {
        var697 += 4;
    }    int var829 = 0;
    while (var829 < 11) {
        var829 += 2;
        var829++;
    }

    int var467 = 26;
    if (var467 % 2 == 0) {
        printf("var467 is even\n");
    } else {
        printf("var467 is odd\n");
    }

    int var950 = 94;
    if (var950 % 2 == 0) {
        printf("var950 is even\n");
    } else {
        printf("var950 is odd\n");
    }

    return 0;
}
