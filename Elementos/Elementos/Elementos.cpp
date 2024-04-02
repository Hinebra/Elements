#include <iostream>
#include <string>
#include <vector>
#include <unordered_set>

using namespace std;

string elementos[15][7] = {
    { "Agua", "Fuego", "Aire", "Tierra" },
    { "Charco", "Lago", "Mar", "Oceano" },
    { "Llama", "Magma" },
    { "Viento", "Tornado", "Huracan" },
    { "Esplanada", "Turon", "Monte", "Montaña" },
    { "Vapor", "Presion" },
    { "Hierba", "Planta","Arbol", "Bosque" },
    { "Ceniza", "Carbon" },
    { "Lava", "Volcan" },
    { "Polvo" },
    { "Obsidiana", "Piedra" },
    { "Ladrillo", "Pared", "Casa", "Pueblo", "Ciudad", "Pais", "Continente" },
    { "Planeta" },
    { "Jorpas","Maquina_Virtual","Pegarme_un_tiro"}
};
string ele[38] = { "Agua", "Fuego", "Aire", "Tierra", "Charco", "Lago", "Mar", "Oceano" ,"Llama", "Magma" ,"Viento", "Tornado", "Huracan" ,"Esplanada", "Turon", "Monte", "Montaña","Vapor", "Presion"
,"Hierba", "Planta", "Bosque","Ceniza", "Carbon","Lava", "Volcan","Polvo","Obsidiana", "Piedra","Ladrillo", "Pared", "Casa", "Pueblo", "Ciudad", "Pais", "Continente","Planeta"};

const string Principales[] = { "Agua", "Fuego", "Aire", "Tierra" };

unordered_set<string> elementos_desbloqueados;

void desbloquearElemento(const string& elemento) {
    elementos_desbloqueados.insert(elemento);
}


void mostrarElementosDesbloqueados() {
    cout << " Elementos desbloqueados: \n";
    for (const auto& elemento : elementos_desbloqueados) {
        cout <<" [" << elemento << "]\n";
    }
    cout << endl;
}
string IniciarEntorno(){
    system("cls");

    cout << " \n";
    cout << " \n";
    cout << " \n";
    cout << " \n";
    cout << " \n";
    cout << " \n";
    cout << " \n";
    cout << " \n";
    cout << "                            |¯¯¯¯¯¯¯¯|   |¯¯¯|        |¯¯¯¯¯¯¯¯|  |¯¯¯|    |¯¯¯|  |¯¯¯¯¯¯¯¯|  |¯¯¯|   |¯¯|  |¯¯¯¯¯¯¯¯¯¯¯|   |¯¯¯¯¯¯¯¯¯|      " << "\n";
    cout << "                            |   _____|   |   |        |   _____|  |    |  |    |  |   _____|  |    |  |  |  |____   ____|  |   _______|      " << "\n";
    cout << "                            |   |        |   |        |   |       |  |  ||  |  |  |   |       |     | |  |      |   |      |   |             " << "\n";
    cout << "                            |   ¯¯¯¯¯|   |   |        |   ¯¯¯¯¯|  |  ||    ||  |  |   ¯¯¯¯¯|  |  |   ||  |      |   |      |   ¯¯¯¯¯¯|       " << "\n";
    cout << "                            |   _____|   |   |        |   _____|  |  | |  | |  |  |   _____|  |  ||   |  |      |   |       |_______  |      " << "\n";
    cout << "                            |   |        |   |        |   |       |  |  ||  |  |  |   |       |  | |     |      |   |              |  |      " << "\n";
    cout << "                            |   ¯¯¯¯¯|   |    ¯¯¯¯¯|  |   ¯¯¯¯¯|  |  |      |  |  |   ¯¯¯¯¯|  |  |  |    |      |   |      |¯¯¯¯¯¯¯¯  |      " << "\n";
    cout << "                            |________|   |_________|  |________|  |__|      |__|  |________|  |__|   |___|      |___|      |_________|       " << "\n";

    cout << " \n";
    cout << " \n";
    cout << " \n";
    cout << " \n";
    cout << " \n";
    cout << " \n";
    cout << " \n";
    cout << " \n";
    cout << "                                                                          - INICIAR JUEGO -" << "\n";
    cout << " \n";
    cout << "                                                                            - ELEMENTOS -  " << "\n";
    cout << " \n";
    cout << "                                                                          - CONFIGURACION -" << "\n";

    string inicio;
    cin >> inicio;
    return inicio;
   
}
int main() {
    string inicio;
    while (inicio != " ") {
        inicio = IniciarEntorno();
        if (inicio == "I" || inicio == "i") {
            system("cls");
            cout << " \n";
            cout << " ELEMENTOS PRINCIPALES: "" \n";
            cout << " \n";

            for (const auto& elemento : Principales) {
                cout << " [" << elemento << "] \n";
            }
            cout << endl;
            desbloquearElemento("Agua");
            desbloquearElemento("Fuego");
            desbloquearElemento("Aire");
            desbloquearElemento("Tierra");

            bool continuar = true;
            while (continuar) {
                string elemento1, elemento2;
                cout << "\n Ingresa el primer elemento: ";
                cin >> elemento1;
                
                cout << " Ingresa el segundo elemento: ";
                cin >> elemento2;
                cout << " \n";
                cout << " Elementos unidos [" << elemento1 << "] + [" << elemento2 << "]" << endl;

                for (int i = 0; i < 15; ++i) {
                    for (int j = 0; j < 7; ++j) {
                        if (elementos[i][j] == elemento1 || elementos[i][j] == elemento2) {
                            desbloquearElemento(elementos[i][j]);
                        }
                    }
                }

                bool elementos_validos = false;
                for (int i = 0; i < 15; ++i) {
                    for (int j = 0; j < 7; ++j) {
                        if (elementos[i][j] == elemento1 || elementos[i][j] == elemento2) {
                            elementos_validos = true;
                            break;
                        }
                    }
                    if (elementos_validos) {
                        break;
                    }
                }

                if (!elementos_validos) {
                    cout << "Alguno de los elementos es incorrecto." << endl;
                }

                if (elemento1 == "Agua" && elemento2 == "Agua") {
                    cout << " Resultado: Charco" << endl;
                    desbloquearElemento("Charco");
                }
                if (elemento1 == "Charco" && elemento2 == "Charco") {
                    cout << " Resultado: Lago" << endl;
                    desbloquearElemento("Lago");
                }
                if (elemento1 == "Lago" && elemento2 == "Lago") {
                    cout << " Resultado: Mar" << endl;
                    desbloquearElemento("Mar");
                }
                if (elemento1 == "Mar" && elemento2 == "Mar") {
                    cout << " Resultado: Oceano" << endl;
                    desbloquearElemento("Oceano");
                }
                if (elemento1 == "Fuego" && elemento2 == "Fuego") {
                    cout << " Resultado: Llama" << endl;
                    desbloquearElemento("Llama");
                }
                if (elemento1 == "Llama" && elemento2 == "Llama") {
                    cout << " Resultado: Magma" << endl;
                    desbloquearElemento("Magma");
                }
                if (elemento1 == "Aire" && elemento2 == "Aire") {
                    cout << " Resultado: Viento" << endl;
                    desbloquearElemento("Viento");
                }
                if (elemento1 == "Viento" && elemento2 == "Viento") {
                    cout << " Resultado: Tornado" << endl;
                    desbloquearElemento("Tornado");
                }
                if (elemento1 == "Tornado" && elemento2 == "Tornado") {
                    cout << " Resultado: Huracan" << endl;
                    desbloquearElemento("Huracan");
                }
                if (elemento1 == "Tierra" && elemento2 == "Tierra") {
                    cout << " Resultado: Esplanada" << endl;
                    desbloquearElemento("Esplanada");
                }
                if (elemento1 == "Esplanada" && elemento2 == "Esplanada") {
                    cout << " Resultado: Turon" << endl;
                    desbloquearElemento("Turon");
                }
                if (elemento1 == "Turon" && elemento2 == "Turon") {
                    cout << " Resultado: Monte" << endl;
                    desbloquearElemento("Monte");
                }
                if (elemento1 == "Monte" && elemento2 == "Monte") {
                    cout << " Resultado: Montaña" << endl;
                    desbloquearElemento("Montaña");
                }
                if (elemento1 == "Agua" && elemento2 == "Fuego" || elemento1 == "Fuego" && elemento2 == "Agua") {
                    cout << " Resultado: Vapor" << endl;
                    desbloquearElemento("Vapor");

                }
                if (elemento1 == "Vapor" && elemento2 == "Vapor") {
                    cout << " Resultado: Presion" << endl;
                    desbloquearElemento("Presion");
                }
                if (elemento1 == "Agua" && elemento2 == "Tierra" || elemento1 == "Tierra" && elemento2 == "Agua") {
                    cout << " Resultado: Hierba" << endl;
                    desbloquearElemento("Hierba");

                }
                if (elemento1 == "Hierba" && elemento2 == "Hierba") {
                    cout << " Resultado: Planta" << endl;
                    desbloquearElemento("Planta");

                }
                if (elemento1 == "Planta" && elemento2 == "Planta") {
                    cout << " Resultado: Arbol" << endl;
                    desbloquearElemento("Arbol");

                }
                if (elemento1 == "Arbol" && elemento2 == "Arbol") {
                    cout << " Resultado: Bosque" << endl;
                    desbloquearElemento("Bosque");

                }
                if (elemento1 == "Arbol" && elemento2 == "Fuego" || elemento1 == "Fuego" && elemento2 == "Arbol") {
                    cout << " Resultado: Ceniza y Carbon" << endl;
                    desbloquearElemento("Ceniza");
                    desbloquearElemento("Carbon");
                }
                if (elemento1 == "Magma" && elemento2 == "Tierra" || elemento1 == "Tierra" && elemento2 == "Magma") {
                    cout << " Resultado: Lava" << endl;
                    desbloquearElemento("Lava");

                }
                if (elemento1 == "Magma" && elemento2 == "Montaña" || elemento1 == "Tierra" && elemento2 == "Montaña") {
                    cout << " Resultado: Volcan" << endl;
                    desbloquearElemento("Volcan");

                }
                if (elemento1 == "Fuego" && elemento2 == "Piedra" || elemento1 == "Piedra" && elemento2 == "Fuego") {
                    cout << " Resultado: Polvo" << endl;
                    desbloquearElemento("Polvo");

                }
                if (elemento1 == "Lava" && elemento2 == "Agua" || elemento1 == "Agua" && elemento2 == "Lava") {
                    cout << " Resultado: Obsidiana y Piedra" << endl;
                    desbloquearElemento("Obsidiana");
                    desbloquearElemento("Piedra");

                }
                if (elemento1 == "Piedra" && elemento2 == "Piedra") {
                    cout << " Resultado: Ladrillo" << endl;
                    desbloquearElemento("Ladrillo");

                }
                if (elemento1 == "Ladrillo" && elemento2 == "Ladrillo") {
                    cout << " Resultado: Pared" << endl;
                    desbloquearElemento("Pared");

                }
                if (elemento1 == "Pared" && elemento2 == "Pared") {
                    cout << " Resultado: Casa" << endl;
                    desbloquearElemento("Casa");

                }
                if (elemento1 == "Casa" && elemento2 == "Casa") {
                    cout << " Resultado: Pueblo" << endl;
                    desbloquearElemento("Pueblo");

                }
                if (elemento1 == "Pueblo" && elemento2 == "Pueblo") {
                    cout << " Resultado: Ciudad" << endl;
                    desbloquearElemento("Ciudad");

                }
                if (elemento1 == "Ciudad" && elemento2 == "Ciudad")  {
                    cout << " Resultado: Pais" << endl;
                    desbloquearElemento("Pais");

                }
                if (elemento1 == "Pais" && elemento2 == "Pais") {
                    cout << " Resultado: Continente" << endl;
                    desbloquearElemento("Continente");

                }
                if (elemento1 == "Oceano" && elemento2 == "Montaña" || elemento1 == "Montaña" && elemento2 == "Oceano") {
                    cout << " Resultado: Planeta" << endl;
                    desbloquearElemento("Planeta");

                }
                if (elemento1 == "Jorpas" && elemento2 == "Jorpas" ) {
                    cout << " Resultado: MaquinaVirtual" << endl;
                    desbloquearElemento("MaquinaVirtual");

                }
                if (elemento1 == "MaquinaVirtual" && elemento2 == "Jorpas" || elemento1 == "Jorpas" && elemento2 == "MaquinaVirtual") {  
                    cout << " El juego ha finalizado te has pegado un tiro en la cabeza porque se te ha petado la maquina Virtual y no tienes Snapshot.";
                    break;

                }
                
                int respuesta;
                cout << " \n";
                cout << " 1. Continuar\n";
                cout << " 2. Mostrar elementos desbloqueados\n";
                cout << " 3. Salir\n";
                cout << " \n";
                cout << " Selecciona una opción: ";
                cin >> respuesta;

                if (respuesta == 2) {
                    mostrarElementosDesbloqueados();
                }
                else if (respuesta == 3) {
                    continuar = false;
                    main();
                }

            }

            return 0;
        }
        if (inicio == "E" || inicio == "e") {
            system("cls");
            cout << " Elementos : ";
            cout << "\n";
            for (int i = 0; i < 38; ++i) {
                cout <<" [" << ele[i] << "]\n";
            }
            cout << " [?]";
            cout << "\n";
            cout << "Pulsa una tecla y despues enter para salir del menu de elementos";
            cout << "\n";
            cin >> inicio;
        }
        if (inicio == "C" || inicio == "c") {
            system("cls");
            cout << " \n";
            cout << " \n";
            cout << " \n";
            cout << " \n";
            cout << " \n";
            cout << " \n";
            cout << " \n";
            cout << " \n";
            cout << "                            |¯¯¯¯¯¯¯¯|   |¯¯¯|        |¯¯¯¯¯¯¯¯|  |¯¯¯|    |¯¯¯|  |¯¯¯¯¯¯¯¯|  |¯¯¯|   |¯¯|  |¯¯¯¯¯¯¯¯¯¯¯|   |¯¯¯¯¯¯¯¯¯|      " << "\n";
            cout << "                            |   _____|   |   |        |   _____|  |    |  |    |  |   _____|  |    |  |  |  |____   ____|  |   _______|      " << "\n";
            cout << "                            |   |        |   |        |   |       |  |  ||  |  |  |   |       |     | |  |      |   |      |   |             " << "\n";
            cout << "                            |   ¯¯¯¯¯|   |   |        |   ¯¯¯¯¯|  |  ||    ||  |  |   ¯¯¯¯¯|  |  |   ||  |      |   |      |   ¯¯¯¯¯¯|       " << "\n";
            cout << "                            |   _____|   |   |        |   _____|  |  | |  | |  |  |   _____|  |  ||   |  |      |   |       |_______  |      " << "\n";
            cout << "                            |   |        |   |        |   |       |  |  ||  |  |  |   |       |  | |     |      |   |              |  |      " << "\n";
            cout << "                            |   ¯¯¯¯¯|   |    ¯¯¯¯¯|  |   ¯¯¯¯¯|  |  |      |  |  |   ¯¯¯¯¯|  |  |  |    |      |   |      |¯¯¯¯¯¯¯¯  |      " << "\n";
            cout << "                            |________|   |_________|  |________|  |__|      |__|  |________|  |__|   |___|      |___|      |_________|       " << "\n";

            cout << " \n";
            cout << " \n";
            cout << " \n";
            cout << " \n";
            cout << " \n";
            cout << " \n";
            cout << " \n";
            cout << " \n";
            cout << "                                                                          - VOLUMEN                  [100]" << "\n";
            cout << " \n";
            cout << "                                                                          - MODO GOD                 (Introduce God en en menu de Inicio para activarlo) " << "\n";
            cout << " \n";
            cout << "                                                                          - INSTRUCCIONES " << "\n";
            cout << " \n";
            cout << "                                                                          - SALIR " << "\n";
            

        }
        if (inicio == "secreto") {
            system("cls");
            desbloquearElemento("Jorpas");
            
        }
        if (inicio == "God") {
            system("cls");
            desbloquearElemento("Charco");
            desbloquearElemento("Lago");
            desbloquearElemento("Mar");
            desbloquearElemento("Oceano");
            desbloquearElemento("Llama");
            desbloquearElemento("Magma");
            desbloquearElemento("Viento");
            desbloquearElemento("Tornado");
            desbloquearElemento("Huracan");
            desbloquearElemento("Esplanada");
            desbloquearElemento("Turon");
            desbloquearElemento("Monte");
            desbloquearElemento("Montaña");
            desbloquearElemento("Vapor");
            desbloquearElemento("Presion");
            desbloquearElemento("Hierba");
            desbloquearElemento("Planta");
            desbloquearElemento("Arbol");
            desbloquearElemento("Bosque");
            desbloquearElemento("Ceniza");
            desbloquearElemento("Carbon");
            desbloquearElemento("Lava");
            desbloquearElemento("Volcan");
            desbloquearElemento("Polvo");
            desbloquearElemento("Obsidiana");
            desbloquearElemento("Piedra");
            desbloquearElemento("Ladrillo");
            desbloquearElemento("Pared");
            desbloquearElemento("Casa");
            desbloquearElemento("Pueblo");
            desbloquearElemento("Ciudad");
            desbloquearElemento("Pais");
            desbloquearElemento("Continente");
            desbloquearElemento("Planeta");




        }
    }
}
