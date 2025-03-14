
#include <stdio.h>


int func640(int var775) {
    if (var775 <= 0) return 1;
    return func640(var775 - 1);
}

int func118(int var129) {
    if (var129 <= 0) return 1;
    return func118(var129 - 1);
}


int main() {
    int var951 = 0;
    while (var951 < 19) {
        var951 += 3;
        var951++;
    }    int var830 = 0;
    while (var830 < 15) {
        var830 += 4;
        var830++;
    }    for (int var356 = 0; var356 < 11; var356++) {
        var356 += 1;
    }

    int var52 = 6;
    if (var52 % 2 == 0) {
        printf("var52 is even\n");
    } else {
        printf("var52 is odd\n");
    }

    int var97 = 8;
    if (var97 % 2 == 0) {
        printf("var97 is even\n");
    } else {
        printf("var97 is odd\n");
    }

    int var964 = 60;
    if (var964 % 2 == 0) {
        printf("var964 is even\n");
    } else {
        printf("var964 is odd\n");
    }

    return 0;
}
