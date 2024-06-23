#include <iostream>
#include <fstream>
#include <stdio.h>
#include <stdlib.h>
#include "estadiaLib.h"
using namespace std;

/*
int getFidelidade(int clientCode) {
    Reserva reserva;
    int diarias = 0;

    ifstream arquivoLer;
    arquivoLer.open("reservas.dat", ios::binary);

    while (arquivoLer.read((char*)&reserva, sizeof(Reserva))) {
        int reservaCC = reserva.getClientCode();

        if (reservaCC == clientCode) {
            diarias += reserva.getDiarias();
        }
    }

    arquivoLer.close();
    return diarias * 10;
};
*/