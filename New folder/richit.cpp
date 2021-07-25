#include<bits/stdc++.h>
using namespace std;

void printA(int row);
void printB(int row);
void printC(int row);
void printD(int row);
void printE(int row);
void printF(int row);
void printG(int row);
void printH(int row);
void printI(int row);
void printJ(int row);
void printK(int row);
void printL(int row);
void printM(int row);
void printN(int row);
void printO(int row);
void printP(int row);
void printQ(int row);
void printR(int row);
void printS(int row);
void printT(int row);
void printU(int row);
void printV(int row);
void printW(int row);
void printX(int row);
void printY(int row);
void printZ(int row);
void printhifen(int row);

int main(){
    string str;
    cin >> str;
    int row = 9;
    for(int i=1; i<=row; i++){
        for(int j=0; j<str.length(); j++){
            if(str[j]=='A' || str[j]=='a')
                printA(i);
            else if(str[j]=='B' || str[j]=='b')
                printB(i);
            else if(str[j]=='C' || str[j]=='c')
                printC(i);
            else if(str[j]=='D' || str[j]=='d')
                printD(i);
            else if(str[j]=='E' || str[j]=='e')
                printE(i);
            else if(str[j]=='F' || str[j]=='f')
                printF(i);
            else if(str[j]=='G' || str[j]=='g')
                printG(i);
            else if(str[j]=='H' || str[j]=='h')
                printH(i);
            else if(str[j]=='I' || str[j]=='i')
                printI(i);
            else if(str[j]=='J' || str[j]=='j')
                printJ(i);
            else if(str[j]=='K' || str[j]=='k')
                printK(i);
            else if(str[j]=='L' || str[j]=='l')
                printL(i);
            else if(str[j]=='M' || str[j]=='m')
                printM(i);
            else if(str[j]=='N' || str[j]=='n')
                printN(i);
            else if(str[j]=='O' || str[j]=='o')
                printO(i);
            else if(str[j]=='P' || str[j]=='p')
                printP(i);
            else if(str[j]=='Q' || str[j]=='q')
                printQ(i);
            else if(str[j]=='R' || str[j]=='r')
                printR(i);
            else if(str[j]=='S' || str[j]=='s')
                printS(i);
            else if(str[j]=='T' || str[j]=='t')
                printT(i);
            else if(str[j]=='U' || str[j]=='u')
                printU(i);
            else if(str[j]=='V' || str[j]=='v')
                printV(i);
            else if(str[j]=='W' || str[j]=='w')
                printW(i);
            else if(str[j]=='X' || str[j]=='x')
                printX(i);
            else if(str[j]=='Y' || str[j]=='y')
                printY(i);
            else if(str[j]=='Z' || str[j]=='z')
                printZ(i);
            else if(str[j]=='-')
                printhifen(i);
            else{}
        }
        cout << endl;
    }
}


void printA(int row){
    if(row==1)
        cout << "  #   ";
    else if(row==3)
        cout << " # #  ";
    else if(row==5)
        cout << "# # # ";
    else if(row==7)
        cout << "#   # ";
    else if(row==9)
        cout << "#   # ";
    else{}
        cout << "  ";
}
void printB(int row){
    if(row==1)
        cout << "# #   ";
    else if(row==3)
        cout << "#   # ";
    else if(row==5)
        cout << "# #   ";
    else if(row==7)
        cout << "#   # ";
    else if(row==9)
        cout << "# #   ";
    else{}
    cout << "  ";
}
void printC(int row){
    if(row==1)
        cout << "   ## ";
    else if(row==3)
        cout << " #    ";
    else if(row==5)
        cout << "#     ";
    else if(row==7)
        cout << " #    ";
    else if(row==9)
        cout << "   ## ";
    else{}
    cout << "  ";
}
void printD(int row){
    if(row==1)
        cout << "##    ";
    else if(row==3)
        cout << "#  #  ";
    else if(row==5)
        cout << "#   # ";
    else if(row==7)
        cout << "#  #  ";
    else if(row==9)
        cout << "##    ";
    else{}
    cout << "  ";
}
void printE(int row){
    if(row==1)
        cout << "# # # ";
    else if(row==3)
        cout << "#     ";
    else if(row==5)
        cout << "# # # ";
    else if(row==7)
        cout << "#     ";
    else if(row==9)
        cout << "# # # ";
    else{}
    cout << "  ";
}
void printF(int row){
    if(row==1)
        cout << "# # # ";
    else if(row==3)
        cout << "#     ";
    else if(row==5)
        cout << "# #   ";
    else if(row==7)
        cout << "#     ";
    else if(row==9)
        cout << "#     ";
    else{}
    cout << "  ";
}
void printG(int row){
    if(row==1)
        cout << "# # # ";
    else if(row==3)
        cout << "#     ";
    else if(row==5)
        cout << "#  ## ";
    else if(row==7)
        cout << "#   # ";
    else if(row==9)
        cout << "# # # ";
    else{}
    cout << "  ";
}
void printH(int row){
    if(row==1)
        cout << "#   # ";
    else if(row==3)
        cout << "#   # ";
    else if(row==5)
        cout << "# # # ";
    else if(row==7)
        cout << "#   # ";
    else if(row==9)
        cout << "#   # ";
    else{}
    cout << "  ";
}
void printI(int row){
    if(row==1)
        cout << "# # # ";
    else if(row==3)
        cout << "  #   ";
    else if(row==5)
        cout << "  #   ";
    else if(row==7)
        cout << "  #   ";
    else if(row==9)
        cout << "# # # ";
    else{}
    cout << "  ";
}
void printJ(int row){
    if(row==1)
        cout << "# # # ";
    else if(row==3)
        cout << "    # ";
    else if(row==5)
        cout << "##  # ";
    else if(row==7)
        cout << "#   # ";
    else if(row==9)
        cout << "  #   ";
    else{}
    cout << "  ";
}
void printK(int row){
    if(row==1)
        cout << "#   # ";
    else if(row==3)
        cout << "# #   ";
    else if(row==5)
        cout << "#     ";
    else if(row==7)
        cout << "# #   ";
    else if(row==9)
        cout << "#   # ";
    else{}
    cout << "  ";
}
void printL(int row){
    if(row==1)
        cout << "#     ";
    else if(row==3)
        cout << "#     ";
    else if(row==5)
        cout << "#     ";
    else if(row==7)
        cout << "#     ";
    else if(row==9)
        cout << "# # # ";
    else{}
    cout << "  ";
}
void printM(int row){
    if(row==1)
        cout << "#   # ";
    else if(row==3)
        cout << "## ## ";
    else if(row==5)
        cout << "# # # ";
    else if(row==7)
        cout << "#   # ";
    else if(row==9)
        cout << "#   # ";
    else{}
    cout << "  ";
}
void printN(int row){
    if(row==1)
        cout << "#   # ";
    else if(row==3)
        cout << "##  # ";
    else if(row==5)
        cout << "# # # ";
    else if(row==7)
        cout << "#  ## ";
    else if(row==9)
        cout << "#   # ";
    else{}
    cout << "  ";
}
void printO(int row){
    if(row==1)
        cout << "  #   ";
    else if(row==3)
        cout << "#   # ";
    else if(row==5)
        cout << "#   # ";
    else if(row==7)
        cout << "#   # ";
    else if(row==9)
        cout << "  #   ";
    else{}
    cout << "  ";
}
void printP(int row){
    if(row==1)
        cout << "# #   ";
    else if(row==3)
        cout << "#   # ";
    else if(row==5)
        cout << "# #   ";
    else if(row==7)
        cout << "#     ";
    else if(row==9)
        cout << "#     ";
    else{}
    cout << "  ";
}
void printQ(int row){
    if(row==1)
        cout << "# # # ";
    else if(row==3)
        cout << "#   # ";
    else if(row==5)
        cout << "#   # ";
    else if(row==7)
        cout << "#  ## ";
    else if(row==9)
        cout << "# # ##";
    else{}
    cout << "  ";
}
void printR(int row){
    if(row==1)
        cout << "# #   ";
    else if(row==3)
        cout << "#   # ";
    else if(row==5)
        cout << "# #   ";
    else if(row==7)
        cout << "# #   ";
    else if(row==9)
        cout << "#   # ";
    else{}
    cout << "  ";
}
void printS(int row){
    if(row==1)
        cout << "# # # ";
    else if(row==3)
        cout << "#     ";
    else if(row==5)
        cout << "# # # ";
    else if(row==7)
        cout << "    # ";
    else if(row==9)
        cout << "# # # ";
    else{}
    cout << "  ";
}
void printT(int row){
    if(row==1)
        cout << "# # # ";
    else if(row==3)
        cout << "  #   ";
    else if(row==5)
        cout << "  #   ";
    else if(row==7)
        cout << "  #   ";
    else if(row==9)
        cout << "  #   ";
    else{}
    cout << "  ";
}
void printU(int row){
    if(row==1)
        cout << "#   # ";
    else if(row==3)
        cout << "#   # ";
    else if(row==5)
        cout << "#   # ";
    else if(row==7)
        cout << "#   # ";
    else if(row==9)
        cout << "# # # ";
    else{}
    cout << "  ";
}
void printV(int row){
    if(row==1)
        cout << "#   # ";
    else if(row==3)
        cout << "#   # ";
    else if(row==5)
        cout << "#   # ";
    else if(row==7)
        cout << " # #  ";
    else if(row==9)
        cout << "  #   ";
    else{}
    cout << "  ";
}
void printW(int row){
    if(row==1)
        cout << "#   # ";
    else if(row==3)
        cout << "#   # ";
    else if(row==5)
        cout << "# # # ";
    else if(row==7)
        cout << "## ## ";
    else if(row==9)
        cout << "#   # ";
    else{}
    cout << "  ";
}
void printX(int row){
    if(row==1)
        cout << "#   # ";
    else if(row==3)
        cout << " # #  ";
    else if(row==5)
        cout << "  #   ";
    else if(row==7)
        cout << " # #  ";
    else if(row==9)
        cout << "#   # ";
    else{}
    cout << "  ";
}
void printY(int row){
    if(row==1)
        cout << "#   # ";
    else if(row==3)
        cout << " # #  ";
    else if(row==5)
        cout << "  #   ";
    else if(row==7)
        cout << "  #   ";
    else if(row==9)
        cout << "  #   ";
    else{}
    cout << "  ";
}
void printZ(int row){
    if(row==1)
        cout << "# # # ";
    else if(row==3)
        cout << "   #  ";
    else if(row==5)
        cout << "  #   ";
    else if(row==7)
        cout << " #    ";
    else if(row==9)
        cout << "# # # ";
    else{}
    cout << "  ";
}


void printhifen(int row){
    if(row==5)
        cout << "# # # ";
    else
        cout << "      ";
    cout << "  ";
}
