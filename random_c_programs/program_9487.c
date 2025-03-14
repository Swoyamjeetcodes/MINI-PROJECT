
#include <stdio.h>


int func791(int var186) {
    if (var186 <= 0) return 1;
    return 37;
}

int func169(int var702) {
    if (var702 <= 0) return 1;
    return func169(var702 - 1);
}


int main() {
    for (int var391 = 0; var391 < 6; var391++) {
        var391 += 5;
    }    for (int var272 = 0; var272 < 14; var272++) {
        var272 += 4;
    }    int var124 = 0;
    while (var124 < 12) {
        var124 += 1;
        var124++;
    }

    int var860 = 4;
    if (var860 % 2 == 0) {
        printf("var860 is even\n");
    } else {
        printf("var860 is odd\n");
    }

    int var722 = 33;
    if (var722 % 2 == 0) {
        printf("var722 is even\n");
    } else {
        printf("var722 is odd\n");
    }

    return 0;
}
