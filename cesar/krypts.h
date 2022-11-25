#ifndef KRYPTS_H
#define KRYPTS_H
#include <QString>
#include <QList>
#include <string>
using namespace std;

class krypts
{
private:

    QString _slovo;
    QString _result;
    QString _ControlAlph = "АБВГДЕЁЖЗИЙКЛМНОПРСТУФXЧЦШЩЪЫЬЭЮЯ";
    QString _Controla = "абвгдеёжзийклмнопрстуфxчцшщъыьэюя";


public:

    krypts();
    QString setWord (QString word)
    {
        _slovo = word;
        return _slovo;
    }
    QString cesartry_numba_one(int n)
    {
        _result = _slovo;
        /*if (n >= 32)
        {
            n = n % 32;
        }
        */
        int N = _slovo.length();
        int M = _ControlAlph.length();
        for (int i = 0; i < N; ++i)
        {
            for (int j = 0; j <= M; ++j)
            {
                int res = j+n;
                if (res > 32){
                    res = res % 33;
                }
                if (_slovo[i] == _ControlAlph[j])
                {
                    _result[i] = _ControlAlph[res];
                    break;
                }
                if (_slovo[i] == _Controla[j])
                {
                    _result[i] = _Controla[res];
                    break;
                }
            }
        }
        return _result;
    }
    QString slogan_crypt(QString slogan)
    {
        _result = _slovo;
        bool flag = false;

        QString *crypto_aplh = new QString[33];

        for (int i = 0; i < slogan.length(); i++)
        {
            crypto_aplh[i] = slogan[i];
        }

        for (int i = 0, n = slogan.length(); i < _Controla.length(); i++, n++)
        {
            for (int j = 0; j < slogan.length(); j++)
            {
                if (_Controla[i] != slogan[j])
                {
                    flag = true;
                }
                else{
                    flag = false;
                    n--;
                    break;
                }
                if (flag == true)
                {
                    crypto_aplh[n] = _Controla[i];
                }
            }
        }
        QString temp = *crypto_aplh;
        for (int i = 0; i < _slovo.length(); i++)
        {
            for (int j = 0; j < temp.length(); j++)
            {
                if (_slovo[i] == _Controla[j])
                {
                    _result[i] = temp[j];
                    break;
                }
            }
        }

        return _result;
    }

};

#endif // KRYPTS_H
