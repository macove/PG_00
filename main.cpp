#include <iostream>
#include <list>
using namespace std;

struct Station {
	const char* code;
	const char* name;
};

void printStations(const list<Station>& stations, const char* year) {
	printf("\nStations in %s:\n", year);
    for (auto itr = stations.begin(); itr != stations.end(); ++itr) {
        printf("%s - %s\n", itr->code, itr->name);
	}
}


int main(void) {
	
    list<Station> stations1970 = {
        {"JY1", "Tokyo"}, {"JY2", "Kanda"}, {"JY3", "Akihabara"}, {"JY4", "Okachimachi"},
        {"JY5", "Ueno"}, {"JY6", "Uguisudani"}, {"JY7", "Nippori"},
        {"JY8", "Tabata"}, {"JY9", "Komagome"}, {"JY10", "Sugamo"},
        {"JY11", "Otsuka"}, {"JY12", "Ikebukuro"}, {"JY13", "Mejiro"},
        {"JY14", "Takadanobaba"}, {"JY15", "Shin-Okubo"}, {"JY16", "Shinjuku"},
        {"JY17", "Yoyogi"}, {"JY18", "Harajuku"}, {"JY19", "Shibuya"},
        {"JY20", "Ebisu"}, {"JY21", "Meguro"}, {"JY22", "Gotanda"},
        {"JY23", "Osaki"}, {"JY24", "Shinagawa"}, {"JY25", "Tamachi"},
        {"JY26", "Hamamatsucho"}, {"JY27", "Shimbashi"}, {"JY28", "Yurakucho"}
    };

    list<Station> stations2019 = stations1970;
    auto it = stations2019.begin();
    advance(it, 7); 
    stations2019.insert(it, { "JY8", "Nishi-Nippori" });

    int codeNumber1 = 9;
    for (auto itr = it; itr != stations2019.end(); ++itr) {
        char newCode[10];
        sprintf_s(newCode, "JY%d", codeNumber1++);
        itr->code = _strdup(newCode);
    }

    list<Station> stations2022 = stations2019;
    it = stations2022.begin();
    advance(it, 25); 
    stations2022.insert(it, { "JY26", "Takanawa Gateway" });

    int codeNumber2 = 27;
    for (auto itr = it; itr != stations2022.end(); ++itr) {
        char newCode[10];
        sprintf_s(newCode, "JY%d", codeNumber2++);
        itr->code = _strdup(newCode);
    }

    printStations(stations1970, "1970");
    printStations(stations2019, "2019");
    printStations(stations2022, "2022");

	return 0;

}