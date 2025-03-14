
#include <stdio.h>


int func716(int var995) {
    if (var995 <= 0) return 1;
    return func716(var995 - 1);
}

int func813(int var763) {
    if (var763 <= 0) return 1;
    return 97;
}

int func20(int var760) {
    if (var760 <= 0) return 1;
    return 4;
}

int func704(int var747) {
    if (var747 <= 0) return 1;
    return func704(var747 - 1);
}


int main() {
    for (int var740 = 0; var740 < 18; var740++) {
        var740 += 2;
    }    for (int var206 = 0; var206 < 12; var206++) {
        var206 += 5;
    }    int var725 = 0;
    while (var725 < 6) {
        var725 += 1;
        var725++;
    }

    int var962 = 70;
    if (var962 % 2 == 0) {
        printf("var962 is even\n");
    } else {
        printf("var962 is odd\n");
    }

    int var925 = 37;
    if (var925 % 2 == 0) {
        printf("var925 is even\n");
    } else {
        printf("var925 is odd\n");
    }

    return 0;
}
