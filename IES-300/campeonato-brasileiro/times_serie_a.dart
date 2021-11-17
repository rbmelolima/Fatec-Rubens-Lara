import 'organiza_serie_a.dart';

class Times_Serie_A implements Organiza_Serie_A {
  @override
  void pontos_Serie_A() {
    print("Campeonato Brasileiro da Série A");
    print("\n");
    print("Palmeiras x Grêmio");
  }

  @override
  void tabela_Serie_A() {
    print("Campeonato Brasileiro da Série A");
    print("");
    print("\nPalmeiras: 51");
    print("\nGrêmio: 43");
    print("\nSantos: 36");
    print("\nFlamengo: 22");
  }
}
