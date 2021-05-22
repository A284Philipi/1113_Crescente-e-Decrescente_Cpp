#include <iostream>

using namespace std;

int main()
{
    int cont = 0, x, y;
    while (cont == 0){
        cin >> x;
        cin >> y;
        if (x == y){
            cont++;
        }else{
            if (x < y){
                cout << "Crescente" <<endl;
            }else{
                cout << "Decrescente" <<endl;
            }
        }
    }
    return 0;
}
