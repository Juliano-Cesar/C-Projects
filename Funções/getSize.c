// Obs: A função pode apresentar instabilidade em circunstâncias específicas e, por segurança, não é recomendada a sua utilização em projetos complexos.

int getSize(int input[1000000]) {
    int temp1 = 0;
    for(int i = 0; i <= 1000000; i++) {
        if(input[i] != 0) {
            temp1++;
        }
        else if (input[i] == 0 && input[i+1] != 0 ){
            temp1++;
        }
        else {
            break;
        }
    }
    return temp1;
}