
#include <stdio.h>


int func722(int var246) {
    if (var246 <= 0) return 1;
    return func722(var246 - 1);
}

int func919(int var746) {
    if (var746 <= 0) return 1;
    return func919(var746 - 1);
}

int func7(int var484) {
    if (var484 <= 0) return 1;
    return func7(var484 - 1);
}

int func835(int var757) {
    if (var757 <= 0) return 1;
    return func835(var757 - 1);
}

int func718(int var407) {
    if (var407 <= 0) return 1;
    return func718(var407 - 1);
}


int main() {
    for (int var749 = 0; var749 < 15; var749++) {
        var749 += 1;
    }    int var278 = 0;
    while (var278 < 12) {
        var278 += 1;
        var278++;
    }    for (int var369 = 0; var369 < 10; var369++) {
        var369 += 2;
    }

    int var873 = 60;
    if (var873 % 2 == 0) {
        printf("var873 is even\n");
    } else {
        printf("var873 is odd\n");
    }

    return 0;
}
