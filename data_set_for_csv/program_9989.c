
#include <stdio.h>


int func883(int var631) {
    if (var631 <= 0) return 1;
    return 12;
}

int func975(int var616) {
    if (var616 <= 0) return 1;
    return 35;
}

int func375(int var630) {
    if (var630 <= 0) return 1;
    return 21;
}

int func713(int var776) {
    if (var776 <= 0) return 1;
    return 70;
}

int func457(int var812) {
    if (var812 <= 0) return 1;
    return func457(var812 - 1);
}

int func171(int var912) {
    if (var912 <= 0) return 1;
    return func171(var912 - 1);
}

int func445(int var456) {
    if (var456 <= 0) return 1;
    return func445(var456 - 1);
}

int func27(int var655) {
    if (var655 <= 0) return 1;
    return func27(var655 - 1);
}

int func280(int var428) {
    if (var428 <= 0) return 1;
    return 29;
}


int main() {
    for (int var139 = 0; var139 < 7; var139++) {
        var139 += 4;
    }

    int var933 = 15;
    if (var933 % 2 == 0) {
        printf("var933 is even\n");
    } else {
        printf("var933 is odd\n");
    }

    int var866 = 65;
    if (var866 % 2 == 0) {
        printf("var866 is even\n");
    } else {
        printf("var866 is odd\n");
    }

    int var23 = 61;
    if (var23 % 2 == 0) {
        printf("var23 is even\n");
    } else {
        printf("var23 is odd\n");
    }

    int var837 = 14;
    if (var837 % 2 == 0) {
        printf("var837 is even\n");
    } else {
        printf("var837 is odd\n");
    }

    return 0;
}
