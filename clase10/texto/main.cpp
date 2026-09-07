#include <iostream>
//#include "cola.cpp"
#include <vector>
#include <map>
#include <algorithm>
#include <iterator>
#include <fstream>
#include <numeric>

using namespace std;

int main()
{
    vector<string> texto;
    map<string, int> mapaCaracteres;

    string nomFile = "/home/emanuel/Facultad/programacion_orientada_objeto/2026/git/codigoCpp2026/clase10/automata";
    auto ifs = ifstream(nomFile);
    auto it = istream_iterator<string>(ifs);

    copy(it,
    istream_iterator<string>(), back_inserter(texto));

    for (auto t : texto) {
        cout << t << " ";
        mapaCaracteres[t]++;
    }

    cout << endl << texto.size() << endl;

    for (auto t : mapaCaracteres) {
        cout << endl << t.first<< " " << t.second ;
    }

    auto itmax = max_element(mapaCaracteres.begin(),
                             mapaCaracteres.end(),
                             [](pair<string,int> p1, pair<string,int> p2) -> bool {
                               return p1.second < p2.second;
                             } );
    cout << endl << itmax->first << " " << itmax->second ;

    auto car = accumulate(texto.begin(), texto.end(), 0,
                          [] (int acu, string s) -> int {
            return acu + s.length();
           });
    cout << car;
//    Cola<int> colaInt;
//    colaInt.add(55);
//    colaInt.add(52);
//    colaInt.add(6);
//    colaInt.add(5);
//    colaInt.add(8);

//    cout << colaInt.get(15) << endl;
    return 0;
}
