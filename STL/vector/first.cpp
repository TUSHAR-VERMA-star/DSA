#include <iostream>
#include <vector>

using namespace std;
void print(vector<int> &v)
{
    cout << endl;
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << "done";
}
int main()
{
    vector<int> vect1;
    int element;
    for (int i = 0; i < 4; i++)
    {
        cin >> element;
        vect1.push_back(element);
    }
    print(vect1);
    int value = 100;
    int idx = 3;
    vector<int>::iterator iter = vect1.begin();
    vect1.insert(iter + idx, value);
    print(vect1);

    value = 200;
    idx = 0;
    iter = vect1.begin();
    vect1.insert(iter + idx, value);
    print(vect1);

    value = 80;
    idx = 2;
    int repete = 10;
    iter = vect1.begin();
    vect1.insert(iter + idx, repete, value);
    print(vect1);

    vector<int> vect2(10, 4);
    print(vect2);

    vector<int> v1;
    vector<char> v2(4);
    v2.push_back('A');
    v2.push_back('B');
    v2.push_back('C');
    v2.push_back('D');
    // print(v2);
    vector<char> v3(v2);
    v3.push_back('E');
    // print(v3);
    vector<int> v4(10, 4);
}