#include<stdio.h>
#include<string.h>
#include <conio.h>

//coding of message
void code(char *ptr,int l){
    int preceed = 2 * l,i,j,k;
    for(i=0;i<l;i++){
        k = *(ptr+i);
        k += preceed;
        for(j=0;k>122;j++){
            k = k-26;
        }
        *(ptr+i) = k;
    }
    *(ptr+i) = '\0';
}

//decoding of message
int decode(char *ptr,int l){
    int preceed = 2 * l,i,j,k;
    for(i=0;i<l;i++){
        k = *(ptr+i);
        k -= preceed;
        for(j=0;k<97;j++){
            k = k+26;
        }
        *(ptr+i) = k;
    }
    *(ptr+i) = '\0';
}
int main (){
    char mes[100],ch;
    int i;
    printf("Enter your message\n");
    for(i=0;(ch = getch())!=10;i++){
        mes[i] = ch;
        printf("*");
    }
    mes[i] = '\0';
    printf("\n");
    code(&mes[0],strlen(mes));
    printf("The coded message is : ");
    printf("%s\n",mes);
    decode(&mes[0],strlen(mes));
    printf("The decoded message is : ");
    printf("%s\n",mes);
    return 0;
}