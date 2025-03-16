
#include <stdio.h>


int func445(int var114) {
    if (var114 <= 0) return 1;
    return func445(var114 - 1);
}

int func596(int var933) {
    if (var933 <= 0) return 1;
    return 37;
}

int func844(int var537) {
    if (var537 <= 0) return 1;
    return func844(var537 - 1);
}

int func469(int var200) {
    if (var200 <= 0) return 1;
    return func469(var200 - 1);
}


int main() {
    for (int var930 = 0; var930 < 18; var930++) {
        var930 += 5;
    }

    int var53 = 12;
    if (var53 % 2 == 0) {
        printf("var53 is even\n");
    } else {
        printf("var53 is odd\n");
    }

    int var336 = 12;
    if (var336 % 2 == 0) {
        printf("var336 is even\n");
    } else {
        printf("var336 is odd\n");
    }

    int var84 = 6;
    if (var84 % 2 == 0) {
        printf("var84 is even\n");
    } else {
        printf("var84 is odd\n");
    }

    return 0;
}
