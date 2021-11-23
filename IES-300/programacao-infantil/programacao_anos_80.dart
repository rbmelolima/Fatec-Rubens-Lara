import 'desenho_anos_80.dart';
import 'novela_anos_80.dart';
import 'programacao_infantil.dart';
import 'serie_anos_80.dart';

class ProgramacaoAnos80 extends ProgramacaoInfatil {
  ProgramacaoAnos80() {
    this.desenho = new DesenhoAnos80();
    this.serie = new SerieAnos80();
    this.novela = new NovelaAnos80();
  }

  @override
  void epoca() {
    print("Fã dos anos 80");
  }
}
