# include <stdio.h>
# include <string.h>

#define MAX_LEN 256

FILE * pfile;
char buf[MAX_LEN];
int file_len;
int count = 0;

char buf_C[4];
int count_C = 0;


int main(){
        pfile = fopen("hellolinux.c", "r");
        if (pfile == NULL){
                perror("fopen");
                return 1;
        }
        fseek(pfile, 0, SEEK_END);
        file_len = ftell(pfile);
        printf("file_len is %d\n", file_len);
        rewind(pfile);
        if (file_len > MAX_LEN - 1){
                printf("buffer out of range.");
                return 1;
        }
        for (int i = 1; i <= file_len; i++){
                // printf("\n%d", i);
                buf[i] = fgetc(pfile);
                if (buf[i] == EOF){
                    printf("\n(i == %d) is EOF\n", i);
                }
                
        }

        int row_num = 16;
        int bias = 0;
        for (int i = 1; i <= file_len; i++){
             
                if (buf[i] == EOF) return 0;


                // print 1
                if ((unsigned char)buf[i] >= 128){
                        bias ++;
                        buf_C[count_C] = buf[i];
                        count_C ++;
                        if (count_C == 3){
                                buf_C[3] = '\0';
                                printf("%s\t", buf_C);
                                count_C = 0;
                        }
                        else
                        count --;
                }
                else if(buf[i] == ' '){
                        printf("SP\t");
                }else if(buf[i] == '\t'){
                        printf("\\t\t");
                }else if(buf[i] == '\r'){
                        printf("\\r\t");
                }else if(buf[i] == '\n'){
                        printf("\\n\t");
                }else{
                        printf("%c\t", buf[i]);
                }


                count ++;

                if (count == row_num){

                        // printf("bias::%d", bias);

                        printf("\n");
                        // print 2
                        for(int j = i - row_num - bias * 2 / 3 + 1; j <= i; j++){
                                if ((unsigned char)buf[j] >= 128){
                                        printf("%02x%02x%02x\t", (unsigned char)buf[j], (unsigned char)buf[j + 1], (unsigned char)buf[j + 2]);
                                        j += 2;
                                }else {
                                        printf("%02x\t", (unsigned char)buf[j]);
                                }
                        }
                        bias = 0;
                        count = 0;
                        printf("\n\n");
                        if (((file_len - i) < 16)) row_num = (file_len - i) % 16;
                }
                     
        }
        // printf("\n%d\n", count);
//             printf("\n%d\n", file_len); 
        fclose(pfile);
        return 0;
}

