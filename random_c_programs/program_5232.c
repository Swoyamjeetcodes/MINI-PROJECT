
#include <stdio.h>


int func507(int var58) {
    if (var58 <= 0) return 1;
    return func507(var58 - 1);
}

int func295(int var150) {
    if (var150 <= 0) return 1;
    return func295(var150 - 1);
}

int func939(int var905) {
    if (var905 <= 0) return 1;
    return func939(var905 - 1);
}


int main() {
    for (int var887 = 0; var887 < 16; var887++) {
        var887 += 5;
    }    for (int var846 = 0; var846 < 5; var846++) {
        var846 += 4;
    }    for (int var775 = 0; var775 < 18; var775++) {
        var775 += 1;
    }

    int var863 = 63;
    if (var863 % 2 == 0) {
        printf("var863 is even\n");
    } else {
        printf("var863 is odd\n");
    }

    int var591 = 1;
    if (var591 % 2 == 0) {
        printf("var591 is even\n");
    } else {
        printf("var591 is odd\n");
    }

    return 0;
}
