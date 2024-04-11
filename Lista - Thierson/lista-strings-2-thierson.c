//
// Created by MarquesV on 01/03/2024.
//

#include <stdio.h>
#include <string.h>

int main() {

    char led[100];
    int qntsLed;
    int n;

    scanf("%d", &n);

    for(int i = 0; i < n; i++) {
        qntsLed = 0;
        scanf("%s", led);
        for(int j = 0; j < strlen(led); j++) {
            if(led[j] == '0'){
                qntsLed += 6;
            }
            if(led[j] == '1') {
                qntsLed += 2;
            }
            if(led[j] == '2') {
                qntsLed += 5;
            }
            if(led[j] == '3') {
                qntsLed += 5;
            }
            if(led[j] == '4') {
                qntsLed += 4;
            }
            if(led[j] == '5') {
                qntsLed += 5;
            }
            if(led[j] == '6') {
                qntsLed += 6;
            }
            if(led[j] == '7') {
                qntsLed += 3;
            }
            if(led[j] == '8'){
                qntsLed += 7;
            }
            if(led[j] == '9'){
                qntsLed += 6;
            }
        }

        printf("%d leds\n", qntsLed);
    }

    return 0;
}