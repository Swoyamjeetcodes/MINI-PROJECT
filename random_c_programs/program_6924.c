
#include <stdio.h>


int func987(int var951) {
    if (var951 <= 0) return 1;
    return 31;
}

int func804(int var251) {
    if (var251 <= 0) return 1;
    return func804(var251 - 1);
}

int func147(int var326) {
    if (var326 <= 0) return 1;
    return 34;
}

int func434(int var459) {
    if (var459 <= 0) return 1;
    return 52;
}


int main() {
    for (int var765 = 0; var765 < 14; var765++) {
        var765 += 2;
    }    int var86 = 0;
    while (var86 < 11) {
        var86 += 2;
        var86++;
    }    int var7 = 0;
    while (var7 < 7) {
        var7 += 4;
        var7++;
    }

    int var143 = 84;
    if (var143 % 2 == 0) {
        printf("var143 is even\n");
    } else {
        printf("var143 is odd\n");
    }

    int var1000 = 48;
    if (var1000 % 2 == 0) {
        printf("var1000 is even\n");
    } else {
        printf("var1000 is odd\n");
    }

    return 0;
}
