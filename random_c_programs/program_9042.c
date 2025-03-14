
#include <stdio.h>


int func695(int var986) {
    if (var986 <= 0) return 1;
    return func695(var986 - 1);
}

int func323(int var579) {
    if (var579 <= 0) return 1;
    return 78;
}

int func450(int var40) {
    if (var40 <= 0) return 1;
    return func450(var40 - 1);
}

int func420(int var555) {
    if (var555 <= 0) return 1;
    return func420(var555 - 1);
}


int main() {
    for (int var745 = 0; var745 < 17; var745++) {
        var745 += 4;
    }    for (int var605 = 0; var605 < 6; var605++) {
        var605 += 2;
    }

    int var863 = 36;
    if (var863 % 2 == 0) {
        printf("var863 is even\n");
    } else {
        printf("var863 is odd\n");
    }

    int var487 = 58;
    if (var487 % 2 == 0) {
        printf("var487 is even\n");
    } else {
        printf("var487 is odd\n");
    }

    int var358 = 26;
    if (var358 % 2 == 0) {
        printf("var358 is even\n");
    } else {
        printf("var358 is odd\n");
    }

    return 0;
}
