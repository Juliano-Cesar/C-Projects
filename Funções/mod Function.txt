float mod(float dividendo, float divisor) {
    int finalizou = 0;
    float quociente = 0;
    
    while(dividendo > divisor) {
        dividendo -= divisor;
        quociente++;
    }
    
    return dividendo;
}