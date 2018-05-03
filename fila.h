#ifndef FILA_H_INCLUDED
#define FILA_H_INCLUDED

  aviao *inserir(aviao **inicio, aviao **fim, aviao *novo);
  aviao *remover(aviao **inicio);
  void *contar(aviao **inicio, aviao **fim);
  void *imprimir(aviao **inicio, aviao **fim);
  void *consultar_cabeça(aviao **inicio);
  void *quantidadeDePessoas(aviao **inicio, aviao **fim);

#endif // FILA_H_INCLUDED
