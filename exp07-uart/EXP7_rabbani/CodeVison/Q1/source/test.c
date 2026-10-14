#include <myHeader.h>

void q1(void){
    char text[50];
    char data;
    int i = 0;

    printf("part 1 is running... \r\n");
    printf("please enter 25 characters in the below format and put spaces at the end. \r\n");
    printf("firstname_lastname\r\n");

    for(i = 0; i<25; i++){
        data = getchar();
        if(data == '_')
            text[i] = ' ';
        else if(data == ' ')
            ;
        else
            text[i] = data;
        putchar(data);
    }

    printf("\r\n<<%s>>",text);
    printf("\r\npart 1 is ending...");


}