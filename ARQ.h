class ARQ {
 public:
   // métodos públicos
 
 private:
  enum TipoEvento {Payload, Quadro, Timeout};
 
  // esta struct descreve um Evento
  struct Evento {
    TipoEvento tipo;
    char * ptr;
    int bytes;
 
    // construtor sem parâmetros: cria um Evento Timeout
    Evento() { tipo = Timeout;}
 
    // construtor com parâmetros: cria um evento Payload ou Quadro
    Evento(TipoEvento t, char * p, int len) : tipo(t), ptr(p), bytes(len) {}
  };
 
  // executa a MEF, passando como parâmetro um evento
  void handle(Evento & e);
};
