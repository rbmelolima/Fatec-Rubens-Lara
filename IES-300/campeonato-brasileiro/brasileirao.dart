import 'organiza_serie_a.dart';
import 'organiza_serie_b.dart';
import 'organiza_serie_c.dart';

abstract class Brasileirao {
  late Organiza_Serie_A serieA;
  late Organiza_Serie_B serieB;
  late Organiza_Serie_C serieC;

  Brasileirao() {}

  void set_Serie_A(Organiza_Serie_A a) {
    serieA = a;
  }

  void set_Serie_B(Organiza_Serie_B b) {
    serieB = b;
  }

  void set_Serie_C(Organiza_Serie_C c) {
    serieC = c;
  }

  void rodada_Serie_A() {
    serieA.tabela_Serie_A();
    serieA.pontos_Serie_A();
  }

  void rodada_Serie_B() {
    serieB.tabela_Serie_B();
    serieB.pontos_Serie_B();
  }

  void rodada_Serie_C() {
    serieC.tabela_Serie_C();
    serieC.pontos_Serie_C();
  }
}
