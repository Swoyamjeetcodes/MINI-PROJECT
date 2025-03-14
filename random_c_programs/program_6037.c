
#include <stdio.h>


int func414(int var75) {
    if (var75 <= 0) return 1;
    return func414(var75 - 1);
}

int func924(int var683) {
    if (var683 <= 0) return 1;
    return func924(var683 - 1);
}

int func353(int var48) {
    if (var48 <= 0) return 1;
    return 20;
}

int func191(int var922) {
    if (var922 <= 0) return 1;
    return func191(var922 - 1);
}

int func471(int var311) {
    if (var311 <= 0) return 1;
    return func471(var311 - 1);
}

int func283(int var515) {
    if (var515 <= 0) return 1;
    return 9;
}

int func587(int var581) {
    if (var581 <= 0) return 1;
    return 100;
}

int func962(int var863) {
    if (var863 <= 0) return 1;
    return 4;
}


int main() {
    for (int var627 = 0; var627 < 20; var627++) {
        var627 += 2;
    }

    int var885 = 21;
    if (var885 % 2 == 0) {
        printf("var885 is even\n");
    } else {
        printf("var885 is odd\n");
    }

    int var329 = 35;
    if (var329 % 2 == 0) {
        printf("var329 is even\n");
    } else {
        printf("var329 is odd\n");
    }

    int var670 = 52;
    if (var670 % 2 == 0) {
        printf("var670 is even\n");
    } else {
        printf("var670 is odd\n");
    }

    int var986 = 5;
    if (var986 % 2 == 0) {
        printf("var986 is even\n");
    } else {
        printf("var986 is odd\n");
    }

    return 0;
}
