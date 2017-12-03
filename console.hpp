#ifndef __CONSOLE_HPP__
#define __CONSOLE_HPP__

#include <limits>

#include "matrix.hpp"

namespace console {
    void clear();
    void cleanIstream(istream& is);
    void wait();
    bool endsWithMT(const string& fileName);
    bool getInput(int& n, int min, int max);
    bool getInput(string& c, const vector<string>& options);
    bool getFileForInput(string& fileName);
    bool getFileForOutput(string& fileName);
    bool getMatrixFromInput(matrix& mat);
    void saveMatrixInFile(const matrix& mat);
    void welcome();
    void displayMenu();
    void menu();
    void genMatrix();
    void genIntMatrix();
    void inputMatrixToFile();
    void reduceMatrix();
    void compMatrices();
    void displayMatrix();
    void checkMatrix(matrix mat1, int &i);
    void displayTournamentMenu();
    void displayMatrixInVar(const matrix &mt);
    void tournamentMenu(const matrix &mt, bool &showmenu, int &i);
    void startTournamentMode();
}

#endif  // __CONSOLE_HPP__
