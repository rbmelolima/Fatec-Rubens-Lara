import 'desenho_anos_60.dart';
import 'novela_anos_60.dart';
import 'programacao_infantil.dart';
import 'serie_anos_60.dart';

class ProgramacaoAnos60 extends ProgramacaoInfatil {
  ProgramacaoAnos60() {
    this.desenho = new DesenhoAnos60();
    this.serie = new SerieAnos60();
    this.novela = new NovelaAnos60();
  }

  @override
  void epoca() {
    print("Fã dos anos 60");
  }
}
