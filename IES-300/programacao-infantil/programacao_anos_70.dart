import 'desenho_anos_70.dart';
import 'novela_anos_70.dart';
import 'programacao_infantil.dart';
import 'serie_anos_70.dart';

class ProgramacaoAnos70 extends ProgramacaoInfatil {
  ProgramacaoAnos70() {
    this.desenho = new DesenhoAnos70();
    this.serie = new SerieAnos70();
    this.novela = new NovelaAnos70();
  }

  @override
  void epoca() {
    print("Fã dos anos 70");
  }
}
