#pragma once
#include<fstream>
#include<iomanip>
#include<ctime>
using namespace std;

float generateRandomFloat();
void randomGenerate(ostream& outDev, short SoDonThuc, short SoBienCuaDonThuc =  1, short SoDonThucCungBac = 0, short SoDonThucCungBien = 0);