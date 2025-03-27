#include<iostream>
#include<iomanip>
#include<windows.h>
#include<cmath>
#include<math.h>
using namespace std;
const int capacity=50;
void init(char B[][capacity], char Sym[], char PNames[][50], int& dim, int& NOP, int& turn)
{
cout << "Enter Dimension You Want To Play In: ";
cin >> dim;
for (int r = 0; r < dim; r++)
{
for (int c = 0; c < dim; c++)
{
B[r][c] = '-';
}
}
cout << "Enter Number Of Players: ";
cin >> NOP;
for (int i = 0; i < NOP; i++)
{
cout << "Enter Player " << i + 1 << "'s Name: ";
cin.getline(PNames[i], 100, '\n');
cout << "Enter Player " << i + 1 << "'s symbol: ";
cin >> Sym[i];
}
turn = rand() % NOP;
}
void turnMsg(char PNames)
{
cout << PNames << "'s Turn" << endl;
}
void selectPos(int& Pr, int& Pc, int Dim)
{
cout << "Enter Row Number: " << endl;
cin >> Pr;
Pr--;
cout << "Enter Column Number: " << endl;
cin >> Pc;
Pc--;
}
void placeMove(char B[][capacity], int Pr, int Pc, char Sym)
{
B[Pr][Pc] = Sym;
}
void turnChange(int& Turn, int NOP)
{
Turn = (Turn + 1) % NOP;
}
void printBoard(char B[][capacity], int Dim)
{
for (int r = 0; r < Dim; r++)
{
for (int c = 0; c < Dim; c++)
{
cout << B[r][c] << " ";
}
cout << endl;
}
}
bool isValidMove(char B[][capacity], int Pr, int Pc, int Dim)
{
if (Pr > Dim)
{
cout << "Invalid Move....Enter Again...!" << endl;
return false;
}
else if (Pc > Dim)
{
cout << "Invalid Move....Enter Again...!" << endl;
return false;
}
for (int r = 0; r < Dim; r++)
{
for (int c = 0; c < Dim; c++)
{
if (B[Pr][Pc] == '-')
return true;
else
cout << "Invalid Move....Enter Again...!" << endl;
return false;
}
}
}
int isWin1(char B[][capacity], char Sym[], int Dim, int Turn)
{
int WinCount = 0;
if (Turn == 1)
Turn = Turn - 1;
for (int r = 0; r < Dim; r++)
{
for (int c = 0; c < Dim; c++)
{
if (B[r][c] == Sym[Turn])
{
WinCount++;
}
else
{
WinCount = 0;
}
}
}
return WinCount;
}
int isWin2(char B[][capacity], char Sym[], int Dim, int Turn)
{
int WinCount = 0;
if (Turn == 0)
Turn = Turn + 1;
for (int r = 0; r < Dim; r++)
{
for (int c = 0; c < Dim; c++)
{
if (B[r][c] == Sym[Turn])
{
WinCount++;
}
else
{
WinCount = 0;
}
}
}
return WinCount;
}
int main()
{
char B[capacity][capacity], Sym[capacity] = {}, PNames[capacity][capacity]={};
int NOP, Turn, Dim, Pr, Pc;
init(B, Sym, PNames, Dim, NOP, Turn);
printBoard(B, Dim);
while (1)
{
turnMsg(PNames[Turn][Turn]);
do {
selectPos(Pr, Pc, Dim);
} while (!isValidMove(B, Pr, Pc, Dim));
placeMove(B, Pr, Pc, Sym[Turn]);
printBoard(B, Dim);
turnChange(Turn, NOP);
if (isWin1(B, Sym, Dim, Turn) == Dim || isWin2(B, Sym, Dim, Turn) == Dim)
{
cout << PNames[Turn][Turn] << " Wins...!" << endl;
}
}
return 0;
}