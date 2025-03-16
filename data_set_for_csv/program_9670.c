
#include <stdio.h>


int func895(int var688) {
    if (var688 <= 0) return 1;
    return func895(var688 - 1);
}

int func759(int var46) {
    if (var46 <= 0) return 1;
    return 24;
}


int main() {
    for (int var161 = 0; var161 < 17; var161++) {
        var161 += 3;
    }    for (int var607 = 0; var607 < 12; var607++) {
        var607 += 2;
    }    for (int var304 = 0; var304 < 6; var304++) {
        var304 += 5;
    }

    int var772 = 76;
    if (var772 % 2 == 0) {
        printf("var772 is even\n");
    } else {
        printf("var772 is odd\n");
    }

    return 0;
}
