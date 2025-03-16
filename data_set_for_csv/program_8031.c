
#include <stdio.h>


int func735(int var225) {
    if (var225 <= 0) return 1;
    return 44;
}

int func364(int var587) {
    if (var587 <= 0) return 1;
    return 73;
}

int func481(int var490) {
    if (var490 <= 0) return 1;
    return 75;
}

int func488(int var141) {
    if (var141 <= 0) return 1;
    return func488(var141 - 1);
}

int func653(int var520) {
    if (var520 <= 0) return 1;
    return func653(var520 - 1);
}


int main() {
    int var425 = 0;
    while (var425 < 16) {
        var425 += 1;
        var425++;
    }    for (int var321 = 0; var321 < 10; var321++) {
        var321 += 3;
    }    for (int var556 = 0; var556 < 10; var556++) {
        var556 += 1;
    }

    int var43 = 27;
    if (var43 % 2 == 0) {
        printf("var43 is even\n");
    } else {
        printf("var43 is odd\n");
    }

    int var596 = 28;
    if (var596 % 2 == 0) {
        printf("var596 is even\n");
    } else {
        printf("var596 is odd\n");
    }

    return 0;
}
