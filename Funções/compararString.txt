int compararString(char a[256], char b[256]) {
    int tamanhoA = strlen(a), tamanhoB = strlen(b);
    
    if(tamanhoA != tamanhoB) {
        return 1;
    }
    
    for(int i = 0; i < tamanhoA; i++) {
        if(tolower(a[i]) != tolower(b[i])) {
            return 1;
        }
    }
    
    return 0;
}