//novel_2311102057
#include <iostream>
#include <iomanip>
#include <vector>
#include <string>
using namespace std;

int main()
{
    int novel_2311102057;
    cout << "Silahkan masukkan jumlah simpul : ";
    cin >> novel_2311102057;
    vector<string> simpul(novel_2311102057);
    vector<vector<int>> busur(novel_2311102057,
    vector<int>(novel_2311102057, 0));

    cout << "Silahkan masukkan nama simpul " << endl;

    for (int i = 0; i < novel_2311102057; i++) {
        cout << "Simpul ke-" << (i + 1) << " : ";
        cin >> simpul[i];
        }
        cout << "Silahkan masukkan bobot antar simpul " << endl;

    for (int i = 0; i < novel_2311102057; i++) {

        for (int j = 0; j < novel_2311102057; j++)
        {
            cout << simpul[i] << " --> " << simpul[j] << " = ";
            cin >> busur[i][j];
             }
        }
             cout << endl;
             cout << setw(7) << " ";
             for (int i = 0; i < novel_2311102057; i++) {

                cout << setw(8) << simpul[i];
            }
                cout << endl;

                for (int i = 0; i < novel_2311102057; i++)
                {
                    cout << setw(7) << simpul[i];

                    for (int j = 0; j < novel_2311102057; j++)

                {
                    cout << setw(8) << busur[i][j];
                }
                cout << endl;
            }
        }