
#include <stdio.h>


int func743(int var726) {
    if (var726 <= 0) return 1;
    return 65;
}

int func671(int var151) {
    if (var151 <= 0) return 1;
    return func671(var151 - 1);
}

int func518(int var343) {
    if (var343 <= 0) return 1;
    return func518(var343 - 1);
}

int func800(int var776) {
    if (var776 <= 0) return 1;
    return func800(var776 - 1);
}

int func600(int var329) {
    if (var329 <= 0) return 1;
    return 8;
}


int main() {
    for (int var393 = 0; var393 < 12; var393++) {
        var393 += 1;
    }

    int var477 = 72;
    if (var477 % 2 == 0) {
        printf("var477 is even\n");
    } else {
        printf("var477 is odd\n");
    }

    return 0;
}
