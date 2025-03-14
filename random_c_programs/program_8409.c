
#include <stdio.h>


int func930(int var412) {
    if (var412 <= 0) return 1;
    return 74;
}

int func735(int var763) {
    if (var763 <= 0) return 1;
    return func735(var763 - 1);
}

int func496(int var326) {
    if (var326 <= 0) return 1;
    return func496(var326 - 1);
}


int main() {
    for (int var478 = 0; var478 < 13; var478++) {
        var478 += 1;
    }    for (int var874 = 0; var874 < 7; var874++) {
        var874 += 5;
    }    int var173 = 0;
    while (var173 < 10) {
        var173 += 4;
        var173++;
    }    for (int var793 = 0; var793 < 17; var793++) {
        var793 += 1;
    }

    int var256 = 85;
    if (var256 % 2 == 0) {
        printf("var256 is even\n");
    } else {
        printf("var256 is odd\n");
    }

    int var75 = 44;
    if (var75 % 2 == 0) {
        printf("var75 is even\n");
    } else {
        printf("var75 is odd\n");
    }

    int var579 = 31;
    if (var579 % 2 == 0) {
        printf("var579 is even\n");
    } else {
        printf("var579 is odd\n");
    }

    return 0;
}
