import 'desenho.dart';
import 'novela.dart';
import 'serie.dart';

abstract class ProgramacaoInfatil {
  late Desenho desenho;
  late Serie serie;
  late Novela novela;

  ProgramacaoInfatil() {}

  void set_ver_desenho(Desenho novoDesenho) {
    this.desenho = novoDesenho;
  }

  void set_ver_serie(Serie novaSerie) {
    this.serie = novaSerie;
  }

  void set_ver_novela(Novela novaNovela) {
    this.novela = novaNovela;
  }

  void assistir_desenho() {
    this.desenho.ver_desenho();
  }

  void assistir_serie() {
    this.serie.ver_serie();
  }

  void assistir_novela() {
    this.novela.ver_novela();
  }

  void epoca();

  void ver_televisao() {
    print("Toda criança gosta de ver televisão!");
  }
}
