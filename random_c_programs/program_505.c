
#include <stdio.h>


int func234(int var170) {
    if (var170 <= 0) return 1;
    return func234(var170 - 1);
}

int func720(int var100) {
    if (var100 <= 0) return 1;
    return 59;
}

int func176(int var626) {
    if (var626 <= 0) return 1;
    return func176(var626 - 1);
}

int func818(int var611) {
    if (var611 <= 0) return 1;
    return func818(var611 - 1);
}

int func813(int var391) {
    if (var391 <= 0) return 1;
    return func813(var391 - 1);
}


int main() {
    int var143 = 0;
    while (var143 < 5) {
        var143 += 1;
        var143++;
    }    for (int var433 = 0; var433 < 8; var433++) {
        var433 += 5;
    }    int var687 = 0;
    while (var687 < 18) {
        var687 += 5;
        var687++;
    }

    int var310 = 21;
    if (var310 % 2 == 0) {
        printf("var310 is even\n");
    } else {
        printf("var310 is odd\n");
    }

    return 0;
}
