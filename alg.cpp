#include <iostream>
#include <map>
#include <vector>
#include <algorithm>
#include <Windows.h>
#include <string>

using namespace std;

bool comparePairs(pair<char, int>& a, pair<char, int>& b) {
    return a.second > b.second;
}

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    string text = "И ОТДЕЛАВШИСЬ ОТ МОЛОДОГО ЧЕЛОВЕКА НЕ УМЕЮЩЕГО ЖИТЬ ОНА ВОЗВРАТИЛАСЬ К СВОИМ ЗАНЯТИЯМ ХОЗЯЙКИ ДОМА И ПРОДОЛЖАЛА ПРИСЛУШИВАТЬСЯ И ПРИГЛЯДЫВАТЬСЯ ГОТОВАЯ ПОДАТЬ ПОМОЩЬ НА ТОТ ПУНКТ ГДЕ ОСЛАБЕВАЛ РАЗГОВОР КАК ХОЗЯИН ПРЯДИЛЬНОЙ МАСТЕРСКОЙ ПОСАДИВ РАБОТНИКОВ ПО МЕСТАМ ПРОХАЖИВАЕТСЯ ПО ЗАВЕДЕНИЮ ЗАМЕЧАЯ НЕПОДВИЖНОСТЬ ИЛИ НЕПРИВЫЧНЫЙ СКРИПЯЩИЙ СЛИШКОМ ГРОМКИЙ ЗВУК ВЕРЕТЕНА ТОРОПЛИВО ИДЕТ СДЕРЖИВАЕТ ИЛИ ПУСКАЕТ ЕГО В НАДЛЕЖАЩИЙ ХОД ТАК И АННА ПАВЛОВНА ПРОХАЖИВАЯСЬ ПО СВОЕЙ ГОСТИНОЙ ПОДХОДИЛА К ЗАМОЛКНУВШЕМУ ИЛИ СЛИШКОМ МНОГО ГОВОРИВШЕМУ КРУЖКУ И ОДНИМ СЛОВОМ ИЛИ ПЕРЕМЕЩЕНИЕМ ОПЯТЬ ЗАВОДИЛА РАВНОМЕРНУЮ ПРИЛИЧНУЮ РАЗГОВОРНУЮ МАШИНУ НО СРЕДИ ЭТИХ ЗАБОТ ВСЕ ВИДЕН БЫЛ В НЕЙ ОСОБЕННЫЙ СТРАХ ЗА ПЬЕРА";

    map<char, int> SymbolsAndCount;

    for (char ch : text) {
        SymbolsAndCount[ch]++;
    }

    vector<pair<char, int>> BUFFER(SymbolsAndCount.begin(), SymbolsAndCount.end());

    sort(BUFFER.begin(), BUFFER.end(), comparePairs);

    cout << "Количество вхождений каждого символа (по убыванию): " << endl;
    for (auto& pair : BUFFER) {
        cout << "'" << pair.first << "': " << pair.second << endl;
    }

    int TotalSymbolsCount = text.size();
    cout << "Общее количество символов -> " << TotalSymbolsCount << endl;

    return 0;
}
