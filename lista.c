void check_lista(aviao **inicio, int codigo){
    aviao *aux = (*inicio);
    int booleano = 0;

    while(aux != NULL){
        if(aux->codigo == codigo){
            remover(codigo);
            booleano = 1;
        }
    }
    if(booleano == 0){
        printf("CODIGO NÃO ENCONTRADO!\n");
    }
}
