import 'brasileirao.dart';
import 'serie_a.dart';
import 'serie_b.dart';
import 'serie_c.dart';

void main() {
  Brasileirao serieA = new Serie_A();
  serieA.set_Serie_A(serieA.serieA);
  serieA.rodada_Serie_A();

  Brasileirao serieB = new Serie_B();
  serieB.set_Serie_B(serieB.serieB);
  serieB.rodada_Serie_B();

  Brasileirao serieC = new Serie_C();
  serieB.set_Serie_C(serieC.serieC);
  serieB.rodada_Serie_C();
}
