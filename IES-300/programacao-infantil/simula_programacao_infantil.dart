import 'programacao_anos_60.dart';
import 'programacao_anos_70.dart';
import 'programacao_anos_80.dart';

class SimulaProgramacaoInfantil {
  void init() {
    print("Implementação de Programação dos anos 60");
    ProgramacaoAnos60 anos60 = new ProgramacaoAnos60();
    anos60.set_ver_desenho(anos60.desenho);
    anos60.assistir_desenho();
    anos60.set_ver_serie(anos60.serie);
    anos60.assistir_serie();
    anos60.set_ver_novela(anos60.novela);
    anos60.assistir_novela();
    anos60.epoca();
    anos60.ver_televisao();
    print("\n\n");

    print("Implementação de Programação dos anos 70");
    ProgramacaoAnos70 anos70 = new ProgramacaoAnos70();
    anos70.set_ver_desenho(anos70.desenho);
    anos70.assistir_desenho();
    anos70.set_ver_serie(anos70.serie);
    anos70.assistir_serie();
    anos70.set_ver_novela(anos70.novela);
    anos70.assistir_novela();
    anos70.epoca();
    anos70.ver_televisao();
    print("\n\n");

    print("Implementação de Programação dos anos 80");
    ProgramacaoAnos80 anos80 = new ProgramacaoAnos80();
    anos80.set_ver_desenho(anos80.desenho);
    anos80.assistir_desenho();
    anos80.set_ver_serie(anos80.serie);
    anos80.assistir_serie();
    anos80.set_ver_novela(anos80.novela);
    anos80.assistir_novela();
    anos80.epoca();
    anos80.ver_televisao();
    print("\n\n");
  }
}
