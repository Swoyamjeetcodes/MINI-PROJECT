
#include <stdio.h>


int func562(int var718) {
    if (var718 <= 0) return 1;
    return 28;
}

int func287(int var814) {
    if (var814 <= 0) return 1;
    return 82;
}

int func858(int var890) {
    if (var890 <= 0) return 1;
    return func858(var890 - 1);
}

int func597(int var675) {
    if (var675 <= 0) return 1;
    return func597(var675 - 1);
}

int func107(int var664) {
    if (var664 <= 0) return 1;
    return func107(var664 - 1);
}

int func41(int var40) {
    if (var40 <= 0) return 1;
    return 78;
}


int main() {
    for (int var350 = 0; var350 < 18; var350++) {
        var350 += 5;
    }    int var652 = 0;
    while (var652 < 19) {
        var652 += 5;
        var652++;
    }    for (int var475 = 0; var475 < 16; var475++) {
        var475 += 2;
    }

    int var273 = 1;
    if (var273 % 2 == 0) {
        printf("var273 is even\n");
    } else {
        printf("var273 is odd\n");
    }

    return 0;
}
