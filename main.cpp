#include <bits/stdc++.h>
using namespace std;

int main()
{
double compra, ticketpadrao , atraso, pts, score2 , score3 ;
string pagamentos , D , B , C;

cout << endl << "SISTEMA DE PERFIL DO CLIENTE" << endl;
cout << "--------------------------------" << endl;
cout << "INFORME OS DADOS DO ÚLTIMO ANO" << endl;

cout << "Quantas compras o cliente fez no último ano? " ;
cin >> compra ;
cout << endl << "Qual o ticket médio? ";
cin >> ticketpadrao;

cout << endl << "Quantas vezes o cliente atrasou o pagamento? " ;
cin >> atraso;
cout << endl << "A maioria das compras foi em dinheiro, cartão, ou boleto (D/C/B)? " ;
cin >> pagamentos;

if (ticketpadrao == 0) {
        pts = 0;
    }
    else if (compra <= 2 && ticketpadrao <= 3000) {
        pts = 20;
    }
    else if (compra > 2 && ticketpadrao <= 3000 ) {
        pts = 40;
    }
    else {
        pts = 60;
    }

    cout << endl << "Score de volume de compras = " << ticketpadrao << " pontos" << endl;

    if ( compra == 0 || atraso > 1 ) {
       score2 = 0 ;
    }
    else if ( atraso == 1 && compra >= 1 ) {
      score2 = 15 ;
    }
    else if ( atraso == 0 && compra >= 1 ) {
      score2 = 30 ;
    }

    cout << "Score de inadimplencia = " << score2 << " pontos" <<endl;

    if ( pagamentos == "D" && compra > 0 ) {
       score3 = 5; 
    }
   if ( compra > 0 && (pagamentos == "C" || pagamentos == "B")) {
       score3 = 10;
    }

    cout << "Score de forma de pagamento = " << score3 << " pontos" << endl;
       
 return 0;
}