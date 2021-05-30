#include<stdio.h>

int main(){
    int i=0;
    char cmd_line[256];
    for(;;){
        char cmd[50];
        printf("icsh $ ");
        scanf("%[^\n]%*c", &cmd_line);
        for(i=0;cmd_line[i] != ' ' && i < 50;i++){
            cmd[i] = cmd_line[i];
        }
        i++;
        if(strcmp(cmd, "echo") == 0){
            for(;cmd_line[i];i++){
                printf("%c",cmd_line[i]);
            }
        }
        else if(strcmp(cmd, "echo") == 0){

        }
        cmd_line[0] = '\0';
        cmd[0] = '\0';
        printf("\n");
    }
}
