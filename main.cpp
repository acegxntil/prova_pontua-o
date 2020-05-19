#include <bits/stdc++.h>
using namespace std;

int main()
{
double compra, ticketpadrao , pagamentos , atraso ;

cout << endl << "SISTEMA DE PERFIL DO CLIENTE" << endl;
cout << "--------------------------------" << endl;
cout << "INFORME OS DADOS DO ÚLTIMO ANO" << endl;

cout << "Quantas compras o cliente fez no último ano?" ;
cin >> compra ;
cout << endl << "Qual o ticket médio? ";
cin >> ticketpadrao;

cout << endl << "Quantas vezes o cliente atrasou o pagamento?" ;
cin >> atraso;
cout << endl << "A maioria das compras foi em dinheiro, cartão, ou boleto (D/C/B)?" ;
cin >> pagamentos;


 return 0;
}